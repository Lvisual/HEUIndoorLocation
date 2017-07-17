#ifndef ELECFENCEWIDGET_H
#define ELECFENCEWIDGET_H

#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QToolButton>
#include <QLabel>
#include "Maps/drawscene.h"
#include "LocateMonitor/lomoview.h"
#include <QComboBox>
#include <QGraphicsPolygonItem>
#include <QList>
#include "moveman.h"
#include "position.h"
namespace Ui {
class ElecFenceWidget;
}

class ElecFenceWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ElecFenceWidget(QWidget *parent = 0);
    ~ElecFenceWidget();

public slots:
    void jiazai();

    void setscenexlabelvalue(double);
    void setsceneylabelvalue(double);
    void setmapxlabelvalue(double);
    void setmapylabelvalue(double);
    void setbililabelvalue(double);

    void ReadFile();
    void addfence(int);
    void deletefence(int);
    void simulate();
    void setPosition();

private:
    Ui::ElecFenceWidget *ui;

    DrawScene *scene1;
    LoMoView *view1;

    QLabel *scenelocate;
    QLabel *Maplocate;
    QLabel *bilichi1;
    QLabel *sceneX;
    QLabel *sceneY;
    QLabel *MapX;
    QLabel *MapY;
    QLabel *bilichiValue;
    QString currentPath;
  //  QToolButton *setFence;
   // QToolButton *removeFence;
    QToolButton *jiazaiwenjian;
    QToolButton *jiazaiditu;
    QToolButton *location;
    QToolButton *endlocation;
    QToolButton *m_simulate;


    QLabel *xianshiweilan;
    QLabel *yincangweilan;
    QComboBox *setfence;
    QComboBox *removefence;
    QList<QGraphicsPolygonItem *> poly_vector;
    MoveMan *m_man;
    Position *m_position;
    QVector <QPoint> m_access;
};

#endif // ELECFENCEWIDGET_H
