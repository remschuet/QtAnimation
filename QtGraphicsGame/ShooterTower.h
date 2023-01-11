#ifndef SHOOTERTOWER_H
#define SHOOTERTOWER_H

#include <QObject>

#include "GraphicObject.h"

class ShooterTower : public GraphicObject
{
	Q_OBJECT
public:
	ShooterTower(int, int);
	void changePicture();
private:
	QPixmap picture;
	bool firstImage = false;
};

#endif // SHOOTERTOWER_H