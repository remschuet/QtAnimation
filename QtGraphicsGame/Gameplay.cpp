#include <QApplication>
#include <QGraphicsScene.h>	// scene()
#include <QGraphicsView>
#include <QGraphicsPixmapItem>

#include "Gameplay.h" // Class

#include "Tower.h"
#include "ShooterTower.h"
#include "Background.h"
#include "Soldier.h"
#include "Bullet.h"


Gameplay::Gameplay(int SCENE_SIZE_X, int SCENE_SIZE_Y) : QObject(), QGraphicsPixmapItem()
{
	this->SCENE_SIZE_X = SCENE_SIZE_X;
	this->SCENE_SIZE_Y = SCENE_SIZE_Y;

	// Access the key event
	setFlag(QGraphicsItem::ItemIsFocusable);
	setFocus(); // Can create in scene
}

void Gameplay::createFirstWorld()
{
	// Add background
	Background* background = new Background(0, 0);
	scene()->addItem(background);

	ShooterTower* shooterTower = new ShooterTower(700, 200);
	scene()->addItem(shooterTower);
	this->ShooterTowerlist.push_back(shooterTower);

	Tower* tower1 = new Tower(100, 250);
	scene()->addItem(tower1);
	this->Towerlist.push_back(tower1);
}

void Gameplay::CreateSoldier()
{
	for (auto const& tower : this->Towerlist)	// Work with 2 Tower
	{
		auto [imageX, imageY] = tower->getImageSize();
		Soldier* soldier = new Soldier(tower->getPosX(tower) + imageX / 2, tower->getPosY(tower) + imageY / 2);
		scene()->addItem(soldier);
		this->Soldierlist.push_back(soldier);
	}
}

void Gameplay::moveSoldier()
{
	for (auto const& soldier : this->Soldierlist)
	{
		if (soldier->getPosX(soldier) > this->SCENE_SIZE_X || soldier->getPosX(soldier) < 0 ||
			soldier->getPosY(soldier) > this->SCENE_SIZE_Y || soldier->getPosY(soldier) < 0)
		{
			soldier->destroy();
			this->Soldierlist.remove(soldier);
			printf("\n Soldier destroy");
			break;
		}
		for (auto const& shooterTower : this->ShooterTowerlist)	// work with just one ShooterTower
		{	// calcul the closer
			int moveX = 0;
			int moveY = 0;
			auto [shooterTowerImageX, shooterTowerImageY] = shooterTower->getImageSize();
			auto [soldierImageX, soldierImageY] = soldier->getImageSize();

			int directionX = shooterTower->getPosX(shooterTower) + shooterTowerImageX / 2 - 30;
			int directionY = shooterTower->getPosY(shooterTower) + shooterTowerImageY / 2 - 30;

			if (soldier->getPosX(soldier) < directionX)
				moveX += 10;
			else if (soldier->getPosX(soldier) > directionX)
				moveX -= 10;
			if (soldier->getPosY(soldier) < directionY)
				moveY += 10;
			else if (soldier->getPosY(soldier) > directionY)
				moveY -= 10;
			
			soldier->move(moveX, moveY);
		}
	}
}

void Gameplay::moveBullet()
{
	for (auto const& bullet : this->Bulletlist)
	{
		if (bullet->getPosX(bullet) > this->SCENE_SIZE_X || bullet->getPosX(bullet) < 0 ||
			bullet->getPosY(bullet) > this->SCENE_SIZE_Y || bullet->getPosY(bullet) < 0)
		{
			bullet->destroy();
			this->Bulletlist.remove(bullet);
			printf("\n bullet destroy");
			break;
		}
		bullet->move();
	}
}

void Gameplay::shootWithTower()
{
	for (auto const& shooterTower : this->ShooterTowerlist)
	{
		auto [shooterTowerImageX, shooterTowerImageY] = shooterTower->getImageSize();

		int posX = shooterTower->getPosX(shooterTower);
		int posY = shooterTower->getPosY(shooterTower) + shooterTowerImageY / 2;
		
		Bullet* bullet = new Bullet(posX, posY, "left");
		scene()->addItem(bullet);
		this->Bulletlist.push_back(bullet);

		shooterTower->changePicture();
	}
}