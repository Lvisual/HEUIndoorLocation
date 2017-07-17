#ifndef MOVEMAN_H
#define MOVEMAN_H
#include <QGraphicsItem>
#include <QGraphicsItemAnimation>
#include <QPoint>

class MoveMan : public QGraphicsItem
{
public:
    MoveMan();
    QRectF boundingRect() const;
    void setColor(const QColor &color) { brushColor = color; }
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void move(QVector<QPoint> v);
private:
    QColor brushColor;
};

#endif // MOVEMAN_H
