#include <car.h>
#include <cmath>


inline double degreeToRads(double degree)
{
    return degree*M_PI/180;
}

car::car(map m){
    int x0, y0;
    bool placed = false;
    QRect c;
    while (!placed)
    {
        x0 = rand()%(m.getBorder().width() - this->width);
        y0 = rand()%(m.getBorder().height() - this->height);
        c = QRect(x0,y0, this->width, this->height);
        placed = !(c.intersects(m.getGoal()));

        for (int i = 0; i < m.getObstacles().size(); ++i)
        {
            placed = placed & (!c.intersects(m.getObstacles().at(i)));
        }
    }
    this->x = x0 + this->width/2;
    this->y = y0 + this->height/2;
    this->angle = 0;
    this->rad = 0;
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
