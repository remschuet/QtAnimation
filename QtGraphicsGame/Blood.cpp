#include <QApplication>
#include <QTimer>

#include "GraphicObject.h"

#include "Blood.h"

Blood::Blood(int posX, int posY) : GraphicObject(posX, posY)
{
	QPixmap picture("C:/Users/remsc/OneDrive/Documents/Visual Studio Projet/QtGraphicsGame/QtGraphicsGame/Image/Blood.png");
	if (!(picture))
		printf("\n -- ERROR loading Blood image");
	setPixmap(picture);

	setImageSize(picture.height(), picture.width());
}