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
    Collision(std::list<Bullet*>, std::list<Soldier*>);
    bool bulletIsCollided(Bullet*, std::list<Soldier*>&);
    bool soldierIsCollided(Soldier*, std::list<ShooterTower*>&);
private:
    std::list<Bullet*> Bulletlist;
    std::list<Soldier*> Soldierlist;
};

#endif // COLLISION_H