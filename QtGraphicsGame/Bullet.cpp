#include <QApplication>
#include <QTimer>
#include <QGraphicsScene.h>	// scene()

#include "GraphicObject.h" // parent
#include "Bullet.h"

Bullet::Bullet(int posX, int posY, std::string direction) : GraphicObject(posX, posY)
{
	this->direction = direction;

	QPixmap picture("C:/Users/remsc/OneDrive/Documents/Visual Studio Projet/QtGraphicsGame/QtGraphicsGame/Image/Bullet.png");

	if (!(picture))
		printf("\n -- ERROR loading Bullet image");

	setPixmap(picture);

	setImageSize(picture.height(), picture.width());
}

void Bullet::move()
{
	this->numberOfTimeMove++;
	if (this->direction == "left")
		setPositionXY(this, -10, 0);
}

void Bullet::destroy()
{
	scene()->removeItem(this);
	delete this;
}

int Bullet::GetNumberOfTimeMove()
{
	return this->numberOfTimeMove;
}