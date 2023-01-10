#include <QApplication>
#include <QTimer>
#include <QGraphicsScene.h>


#include "GraphicObject.h" // parent
#include "Soldier.h"

#include "ShooterTower.h"


ShooterTower::ShooterTower()
{
	printf("\n ShooterTower create");
	QPixmap picture("C:/Users/remsc/OneDrive/Documents/Visual Studio Projet/QtGraphicsGame/QtGraphicsGame/Image/ShooterTower.png");

	if (!(picture))
		printf("\n -- ERROR loading ShooterTower image");

	setPixmap(picture);
	setPositionXY(this, 700, 230);
}

void ShooterTower::createSoldier()
{
	Soldier* soldier = new Soldier();
	scene()->addItem(soldier);
}
