#include "qpaintwidget.h"

#include <QPainter>
#include <car.h>
#include <QDebug>
#include <cmath>

QPaintWidget::QPaintWidget(QWidget * parent) : QWidget(parent),c(200,300,15,0), m(QRect(10,10,100,100),5, 500, 600){

}

void QPaintWidget::paintEvent(QPaintEvent *) {
    QPainter p(this); // Создаём новый объект рисовальщика
    p.setPen(QPen(Qt::green,3,Qt::SolidLine)); // Настройки рисования
    p.drawRect(m.getGoal());
    p.setPen(QPen(Qt::blue,3,Qt::SolidLine)); // Настройки рисования
    for (int i = 0; i < m.getObstacles().size(); ++i)
    {
        p.fillRect(m.getObstacles().at(i),Qt::blue);
    }
    p.setPen(QPen(Qt::red,3,Qt::SolidLine)); // Настройки рисования

    p.drawPoint(c.getX(),c.getY());
    p.translate(c.getX(),c.getY());
    p.rotate(c.getAngle());
    //qDebug() << c.getAngle() << " " << -c.getRad()*sin(degreeToRads(c.getAngle())) << endl;
    p.drawRect(c.getCar());

}

void QPaintWidget::keyPressEvent(QKeyEvent *e)
{
    if (e->key() == Qt::Key_Up)
    {
        c.moveForward();
        update();
    }
    if (e->key() == Qt::Key_Left)
    {
        c.turn(-5);
        c.moveForward();
        update();
    }
    if (e->key() == Qt::Key_Right)
    {
        c.turn(5);
        c.moveForward();
        update();
    }
    if (e->key() == Qt::Key_Down)
    {
        c.moveForward(-5);
        update();
    }
}
