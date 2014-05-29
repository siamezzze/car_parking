#ifndef CAR_H
#define CAR_H

#include <QRect>

class car
{
private:
    //QPainter * mypainter;
    int width = 40;
    int height = 80;
    int x, y;
    qreal angle;
    int rad;
    qreal d_rotate;
public:
    car(int x0, int y0, int angle0, int rad0):x(x0),y(y0),angle(angle0), rad(rad0){ }

    int getX();
    int getY();
    qreal getAngle();
    QRect getCar();
    int getRad();

    void moveForward(int step = 5);
    void turn(qreal angle);



};

#endif // CAR_H
