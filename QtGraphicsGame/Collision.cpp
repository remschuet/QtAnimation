#include <QApplication>
#include <QGraphicsScene.h>	// scene()
#include <QGraphicsView>
#include <QGraphicsPixmapItem>

#include "Collision.h" // Class
#include "Bullet.h"
#include "Soldier.h"

Collision::Collision(std::list<Bullet*> Bulletlist, std::list<Soldier*> Soldierlist) : QObject(), QGraphicsPixmapItem()
{
	this->Bulletlist = Bulletlist;
	this->Soldierlist = Soldierlist;
	printf("\ncreate Collision");
}

bool Collision::bulletIsCollided(Bullet* bullet, std::list<Soldier*> & SoldierList)
{
	for (auto const& soldier : SoldierList)
	{
		if (bullet->getPosX(bullet) + bullet->getImageSizeX() >= soldier->getPosX(soldier) &&
			bullet->getPosX(bullet) <= soldier->getPosX(soldier) + soldier->getImageSizeX() &&
			bullet->getPosY(bullet) + bullet->getImageSizeY() >= soldier->getPosY(soldier) &&
			bullet->getPosY(bullet) <= soldier->getPosY(soldier) + soldier->getImageSizeY())
		{
			soldier->destroy();
			SoldierList.remove(soldier);
			return true;
		}
	}
	return false;

}

bool Collision::soldierIsCollided(Soldier* soldier, std::list<ShooterTower*>& shooterTowerList)
{
	for (auto const& shooterTower : shooterTowerList)
	{
		if (soldier->getPosX(soldier) + soldier->getImageSizeX() >= shooterTower->getPosX(shooterTower) &&
			soldier->getPosX(soldier) <= shooterTower->getPosX(shooterTower) + shooterTower->getImageSizeX() &&
			soldier->getPosY(soldier) + soldier->getImageSizeY() >= shooterTower->getPosY(shooterTower) &&
			soldier->getPosY(soldier) <= shooterTower->getPosY(shooterTower) + shooterTower->getImageSizeY())
		{
			shooterTower->destroy();
			shooterTowerList.remove(shooterTower);
			return true;
			printf("Collision soldier shooterTower");
		}
		return false;
	}
}