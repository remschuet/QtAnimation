#include <QApplication>
#include <QTimer>

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

	// Timer
	QTimer* timer = new QTimer();
	connect(timer, SIGNAL(timeout()), this, SLOT(move()));

	timer->start(100);
}

void Soldier::move()
{
	setPositionXY(this, 10, 0);
}