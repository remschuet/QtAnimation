#include <QApplication>
#include <QTimer>
#include <iostream>
#include <QGraphicsScene.h>	// scene()

#include "GraphicObject.h" // parent
#include "Soldier.h"

#include "Tower.h"

Tower::Tower(int posX, int posY) : GraphicObject(posX, posY)
{
	QPixmap picture("C:/Users/remsc/OneDrive/Documents/Visual Studio Projet/QtGraphicsGame/QtGraphicsGame/Image/Tower.png");
	if (!(picture))
		printf("\n -- ERROR loading Tower image");
	setPixmap(picture);

	setImageSize(picture.height(), picture.width());
}

void Tower::createSoldier()
{
	int posX = getPosX(this);
	int posY = getPosY(this);
	auto [imageX, imageY] = this->getImageSize();

	Soldier* soldier = new Soldier(posX + imageX / 2, posY + imageY / 2);
	scene()->addItem(soldier);
}