#ifndef SHOOTERTOWER_H
#define SHOOTERTOWER_H

#include <QObject>

#include "GraphicObject.h"

class ShooterTower : public GraphicObject
{
	Q_OBJECT
public:
	ShooterTower();
	void createSoldier();
};

#endif // SHOOTERTOWER_H