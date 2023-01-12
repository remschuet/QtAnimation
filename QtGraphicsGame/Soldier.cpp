#include <QApplication>
#include <QTimer>
#include <QGraphicsScene.h>	// scene()
#include <iostream>

#include "GraphicObject.h" // parent

#include "Soldier.h"


Soldier::Soldier(int posX, int posY) : GraphicObject(posX, posY)
{
	printf("\n Soldier create");
	QPixmap picture("C:/Users/remsc/OneDrive/Documents/Visual Studio Projet/QtGraphicsGame/QtGraphicsGame/Image/Soldier.png");

	if (!(picture))
		printf("\n -- ERROR loading Soldier image");

	setPixmap(picture);

	setImageSize(picture.height(), picture.width());
}

void Soldier::move(int moveX, int moveY)
{
	setPositionXY(this, moveX, moveY);
}

void Soldier::destroy()
{
	scene()->removeItem(this);
	delete this;
}

void Soldier::printMessage(std::string msg)
{
	std::cout << msg;
}