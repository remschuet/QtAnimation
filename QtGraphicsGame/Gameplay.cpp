#include <QApplication>
#include <QGraphicsScene.h>	// scene()
#include <QGraphicsView>
#include <QGraphicsPixmapItem>

#include "Gameplay.h" // Class

#include "Tower.h"
#include "ShooterTower.h"
#include "Background.h"
#include "Soldier.h"


Gameplay::Gameplay(int SCENE_SIZE_X, int SCENE_SIZE_Y) : QObject(), QGraphicsPixmapItem()
{
}

void Gameplay::createFirstWorld()
{
	// Add background
	Background* background = new Background(0, 0);
	scene()->addItem(background);

	ShooterTower* shooterTower = new ShooterTower(700, 230);
	scene()->addItem(shooterTower);

	Tower* tower = new Tower(20, 200);
	scene()->addItem(tower);
}

void Gameplay::CreateSoldier()
{
	// auto [imageX, imageY] = this->getImageSize();

	Soldier* soldier = new Soldier(100, 100);
	scene()->addItem(soldier);
}