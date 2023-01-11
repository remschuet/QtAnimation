#ifndef SCENE_H
#define SCENE_H

#include <QGraphicsRectItem>
#include <QObject>
#include <QGraphicsPixmapItem>


class Gameplay : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Gameplay(int, int);
    void createFirstWorld();
    void CreateSoldier();

};

#endif // SCENE_H