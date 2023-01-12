#ifndef COLLISION_H
#define COLLISION_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <List>

#include "Bullet.h"
#include "Soldier.h"
#include "ShooterTower.h"

class Collision : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Collision();
    bool bulletIsCollided(Bullet*, std::list<Soldier*>);

};

#endif // COLLISION_H