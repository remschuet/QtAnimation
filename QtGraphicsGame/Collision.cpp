#include <QApplication>
#include <QGraphicsScene.h>	// scene()
#include <QGraphicsView>
#include <QGraphicsPixmapItem>

#include "Collision.h" // Class
#include "Bullet.h"

Collision::Collision() : QObject(), QGraphicsPixmapItem() 
{
	printf("\ncreate Collision");
}

bool Collision::bulletIsCollided(Bullet* bullet, std::list<Soldier*> SoldierList)
{
	for (auto const& soldier : SoldierList)
	{
		if (bullet->getPosX(bullet) + bullet->getImageSizeX() >= soldier->getPosX(soldier) &&
			bullet->getPosX(bullet) <= soldier->getPosX(soldier) + soldier->getImageSizeX() &&
			bullet->getPosY(bullet) + bullet->getImageSizeY() >= soldier->getPosY(soldier) &&
			bullet->getPosY(bullet) <= soldier->getPosY(soldier) + soldier->getImageSizeY())
		{
			// soldier->destroy();
			// SoldierList.remove(soldier);
			return true;
		}
	}
	return false;

}