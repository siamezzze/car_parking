#include <car.h>
#include <cmath>


inline double degreeToRads(double degree)
{
    return degree*M_PI/180;
}

int car::getX(){
    return static_cast<int>(this->x);
}

int car::getY(){
    return static_cast<int>(this->y);
}

qreal car::getAngle(){
    return this->angle;
}

QRect car::getCar()
{
    return QRect(QPoint(-this->width/2, -this->height/2), QPoint(this->width/2, this->height/2));
}

int car::getRad()
{
    return this->rad;
}

void car::moveForward(int step)
{
    this->rad += step;
    this->x += step*sin(degreeToRads(this->getAngle()));
    this->y -= step*cos(degreeToRads(this->getAngle()));

}

void car::turn(qreal angle)
{
    this->angle +=angle;
}
