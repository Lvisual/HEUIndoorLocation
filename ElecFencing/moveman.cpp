#include "MoveMan.h"
#include <QPainter>
#include <QPen>
#include <QGraphicsItemAnimation>
#include <QTimeLine>
MoveMan::MoveMan()
{
    //setFlag(QGraphicsItem::ItemIsFocusable);
    setFlag(QGraphicsItem::ItemIsMovable);
}

void MoveMan::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){
    QPen pen;
    pen.setWidth(2);
    pen.setColor(QColor(0, 160, 230));
    painter->setPen(pen);
    painter->setBrush(QColor(247, 160, 57));
    painter->drawEllipse(0,0,10,10);
}


QRectF MoveMan::boundingRect() const
{
    qreal adjust = 0.5;
    return QRectF(-10 - adjust, -10 - adjust,
                  20 + adjust, 20 + adjust);
}

 void MoveMan::move(QVector<QPoint> v){
         QTimeLine *timer = new QTimeLine(15000);
         timer->setFrameRange(0,100);
         QGraphicsItemAnimation *animation = new QGraphicsItemAnimation;
         animation->setItem(this);
         animation->setTimeLine(timer);
         for(int i = 0; i < v.size(); ++i)
         animation->setPosAt(i/10.0, QPointF(v[i]));
         timer->start();
 }

