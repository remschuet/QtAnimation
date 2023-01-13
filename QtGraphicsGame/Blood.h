#ifndef BLOOD_H
#define BLOOD_H

#include <QObject>

#include "GraphicObject.h"

class Blood : public GraphicObject
{
	Q_OBJECT
public:
	Blood(int, int);
};

#endif // BLOOD_H