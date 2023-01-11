#ifndef SOLDIER_H
#define SOLDIER_H

#include <QObject>

#include "GraphicObject.h"

class Soldier : public GraphicObject
{
	Q_OBJECT
public:
	Soldier(int, int);
	void move(int, int);
	void destroy();
};

#endif // Soldier