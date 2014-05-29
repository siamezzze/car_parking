#ifndef QPAINTWIDGET_H
#define QPAINTWIDGET_H

#include <QWidget>
#include <QKeyEvent>
#include "car.h"
#include "map.h"
class QPaintEvent;

class QPaintWidget : public QWidget
{
    Q_OBJECT
public:
    QPaintWidget(QWidget * parent = 0);
    void keyPressEvent(QKeyEvent *e);
protected:
    void paintEvent(QPaintEvent *);
    car c;
    map m;

};


#endif
