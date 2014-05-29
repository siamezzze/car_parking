#include "map.h"

map::map(int nmbObstacles, int width, int height)
{
    this->border = QRect(0,0,width,height);
    int x0 = rand()%(width - 100);
    int y0 = rand()%(height - 100);
    QRect r = QRect(x0, y0, 100, 100);
    this->goal = r;
    for (int i = 0; i < nmbObstacles; ++i)
    {
        bool good_placement = false;
        while (!good_placement)
        {
            x0 = rand()%width;
            y0 = rand()%height;
            int w0 = rand()%(width - x0);
            int h0 = rand()%(height - y0);
            r = QRect(x0, y0, w0, h0);
            good_placement = !(r.intersects(this->goal)); //чтобы цель не была сразу в препятствии
        }

        this->obstacles+=r;
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

QRect map::getBorder()
{
    return this->border;
}
