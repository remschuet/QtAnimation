#ifndef TOWEREXPLOSION_H
#define TOWEREXPLOSION_H

#include <QObject>

#include "GraphicObject.h"

class TowerExplosion : public GraphicObject
{
	Q_OBJECT
public:
	TowerExplosion(int, int);
private slots:
	void pictureExplosion();

private:
	int explosionImage = 0;
	QPixmap picture;
	int speed = 100;
};

#endif // TOWEREXPLOSION_H