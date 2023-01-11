#ifndef SCENE_H
#define SCENE_H

#include <QObject>
#include <QGraphicsPixmapItem>

#include "Tower.h"
#include "Soldier.h"
#include "Bullet.h"
#include "ShooterTower.h"

class Gameplay : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Gameplay(int, int);
    void createFirstWorld();
    void CreateSoldier();
    void moveSoldier();
    void moveBullet();
    void shootWithTower();
private:
    std::list<Tower*> Towerlist;
    std::list<ShooterTower*> ShooterTowerlist;
    std::list<Soldier*> Soldierlist;
    std::list<Bullet*> Bulletlist;
    int SCENE_SIZE_X;
    int SCENE_SIZE_Y;
};

#endif // SCENE_H