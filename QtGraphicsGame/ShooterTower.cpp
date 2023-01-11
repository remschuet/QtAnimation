#include <QApplication>
#include <QTimer>
#include <QGraphicsScene.h>


#include "GraphicObject.h" // parent
#include "Soldier.h"

#include "ShooterTower.h"


ShooterTower::ShooterTower(int posX, int posY) : GraphicObject(posX, posY)
{
	printf("\n ShooterTower create");
	QPixmap picture("C:/Users/remsc/OneDrive/Documents/Visual Studio Projet/QtGraphicsGame/QtGraphicsGame/Image/ShooterTower.png");

	if (!(picture))
		printf("\n -- ERROR loading ShooterTower image");

	setPixmap(picture);

	setImageSize(picture.height(), picture.width());
}

