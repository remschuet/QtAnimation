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
	void pictureExplosion();
	void destroy();
private:
	QPixmap picture;
	bool firstImage = false;
	int explosionImage = 0;
};

#endif // SHOOTERTOWER_H