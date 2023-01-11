#ifndef BACKGROUND_H
#define BACKGROUND_H

#include <QObject>

#include "GraphicObject.h"

class Background : public GraphicObject
{
	Q_OBJECT
public:
	Background(int, int);
};

#endif // BACKGROUND_H