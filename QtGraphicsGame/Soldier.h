#ifndef SOLDIER_H
#define SOLDIER_H

#include <QObject>

#include "GraphicObject.h"

class Soldier : public GraphicObject
{
	Q_OBJECT
public:
	Soldier(int, int);
public slots:
	void move();
};

#endif // Soldier