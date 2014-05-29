#ifndef MAP_H
#define MAP_H

#include <QRect>
#include <QVector>

class map
{
    QVector<QRect> obstacles;
    QRect goal;
    QRect border;

public:
    map(QRect goal0, int width = 1011, int height = 631):goal(goal0), border(0,0,width,height) {}
    map(QVector<QRect> obstacles0, QRect goal0, int width = 1011, int height = 631):obstacles(obstacles0),goal(goal0), border(0,0,width,height){ }
    map(QRect goal0, int nmbObstacles, int width = 1011, int height = 631);
    QVector<QRect> getObstacles();
    QRect getGoal();
};

#endif // MAP_H
