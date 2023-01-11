#ifndef TOWER_H
#define TOWER_H

#include <QObject>

#include "GraphicObject.h"

class Tower : public GraphicObject
{
	Q_OBJECT
public:
	Tower(int, int);
	void createSoldier();

};

#endif // TOWER_H