#include <QApplication>
#include <QTimer>
#include <iostream>

#include "GraphicObject.h" // parent
#include "Soldier.h"

#include "Tower.h"


Tower::Tower()
{
	printf("\n tower create");
	QPixmap picture("C:/Users/remsc/OneDrive/Documents/Visual Studio Projet/QtGraphicsGame/QtGraphicsGame/Image/Tower.png");
	if (!(picture))
		printf("\n -- ERROR loading Tower image");
	setPixmap(picture);
	setPositionXY(this, 20, 200);
	std::cout << picture.height();	// get the height of the image
	picture.scaledToHeight(12);
	std::cout << picture.height();	// get the height of the image

}
