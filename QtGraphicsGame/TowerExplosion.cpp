#include <QApplication>
#include <QTimer>
#include <String>

#include "GraphicObject.h"

#include "TowerExplosion.h"

TowerExplosion::TowerExplosion(int posX, int posY) : GraphicObject(posX, posY)
{
	printf("\n TowerExplosion create");
	QPixmap picture("C:/Users/remsc/OneDrive/Documents/Visual Studio Projet/QtGraphicsGame/QtGraphicsGame/Image/backup/explosion1.png");
	if (!(picture))
		printf("\n -- ERROR loading TowerExplosion image");
	this->picture = picture;
	setPixmap(this->picture);

	QTimer* timer = new QTimer();
	connect(timer, SIGNAL(timeout()), this, SLOT(pictureExplosion()));
	timer->start(speed);
}

void TowerExplosion::pictureExplosion()
{
	this->explosionImage++;
	if (this->explosionImage == 1)
	{
		QPixmap picture("C:/Users/remsc/OneDrive/Documents/Visual Studio Projet/QtGraphicsGame/QtGraphicsGame/Image/backup/explosion1.png");
		this->picture = picture;
		setPixmap(this->picture);
	}	
	else if (this->explosionImage == 2)
	{
		QPixmap picture("C:/Users/remsc/OneDrive/Documents/Visual Studio Projet/QtGraphicsGame/QtGraphicsGame/Image/backup/explosion2.png");
		this->picture = picture;
		setPixmap(this->picture);
	}
	else if (this->explosionImage == 3)
	{
		QPixmap picture("C:/Users/remsc/OneDrive/Documents/Visual Studio Projet/QtGraphicsGame/QtGraphicsGame/Image/backup/explosion3.png");
		this->picture = picture;
		setPixmap(this->picture);
	}
	else if (this->explosionImage == 4)
	{
		QPixmap picture("C:/Users/remsc/OneDrive/Documents/Visual Studio Projet/QtGraphicsGame/QtGraphicsGame/Image/backup/explosion4.png");
		this->picture = picture;
		setPixmap(this->picture);
	}
	else if (this->explosionImage == 5)
	{
		QPixmap picture("C:/Users/remsc/OneDrive/Documents/Visual Studio Projet/QtGraphicsGame/QtGraphicsGame/Image/backup/explosion5.png");
		this->picture = picture;
		setPixmap(this->picture);
	}
	else if (this->explosionImage == 6)
	{
		QPixmap picture("C:/Users/remsc/OneDrive/Documents/Visual Studio Projet/QtGraphicsGame/QtGraphicsGame/Image/backup/explosion6.png");
		this->picture = picture;
		setPixmap(this->picture);
	}
	else if (this->explosionImage == 7)
	{
		QPixmap picture("C:/Users/remsc/OneDrive/Documents/Visual Studio Projet/QtGraphicsGame/QtGraphicsGame/Image/backup/explosion7.png");
		this->picture = picture;
		setPixmap(this->picture);
	}
	else
	{
		printf("ERROR LOADING exposionImage");
	}
}