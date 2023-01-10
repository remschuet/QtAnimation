#include <QApplication>
#include <QTimer>

#include "GraphicObject.h"

#include "Background.h"


Background::Background()
{
	printf("\n Background create");
	QPixmap picture("C:/Users/remsc/OneDrive/Documents/Visual Studio Projet/QtGraphicsGame/QtGraphicsGame/Image/Background.png");
	if (!(picture))
		printf("\n -- ERROR loading Background image");
	setPixmap(picture);
}