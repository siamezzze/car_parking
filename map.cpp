#include "map.h"

map::map(QRect goal0, int nmbObstacles, int width, int height)
{
    this->goal = goal0;
    for (int i = 0; i < nmbObstacles; ++i)
    {
        int x0 = rand()%width;
        int y0 = rand()%height;
        this->obstacles+=QRect(x0, y0, rand()%(width - x0), rand()%(height - y0));
    }
}
QVector<QRect> map::getObstacles()
{
    return this->obstacles;
}

QRect map::getGoal()
{
    return this->goal;
}
