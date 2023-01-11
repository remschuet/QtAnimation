#include <QApplication>
#include <QTimer>
#include <iostream>			// Error message
#include <QGraphicsScene.h>	// scene()

#include "GraphicObject.h"	// parent

#include "Tower.h"

Tower::Tower(int posX, int posY) : GraphicObject(posX, posY)
{
	QPixmap picture("C:/Users/remsc/OneDrive/Documents/Visual Studio Projet/QtGraphicsGame/QtGraphicsGame/Image/Tower.png");
	if (!(picture))
		printf("\n -- ERROR loading Tower image");
	setPixmap(picture);

	setImageSize(picture.height(), picture.width());
}