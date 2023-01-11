#include <QApplication>
#include <QTimer>
#include <QGraphicsScene.h>


#include "GraphicObject.h" // parent
#include "Soldier.h"

#include "ShooterTower.h"


ShooterTower::ShooterTower(int posX, int posY) : GraphicObject(posX, posY)
{
	QPixmap picture("C:/Users/remsc/OneDrive/Documents/Visual Studio Projet/QtGraphicsGame/QtGraphicsGame/Image/ShooterTower1.png");

	this->picture = picture;

	if (!(this->picture))
		printf("\n -- ERROR loading ShooterTower1 image");

	setPixmap(this->picture);

	setImageSize(this->picture.height(), this->picture.width());
}

void ShooterTower::changePicture()
{
	
	if (this->firstImage)
	{
		QPixmap picture("C:/Users/remsc/OneDrive/Documents/Visual Studio Projet/QtGraphicsGame/QtGraphicsGame/Image/ShooterTower1.png");
		this->picture = picture;
		setPixmap(this->picture);
		this->firstImage = false;
	}
	else
	{
		QPixmap picture("C:/Users/remsc/OneDrive/Documents/Visual Studio Projet/QtGraphicsGame/QtGraphicsGame/Image/ShooterTower2.png");
		this->picture = picture;
		setPixmap(this->picture);
		this->firstImage = true;
	}
}
