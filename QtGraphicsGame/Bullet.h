#ifndef BULLET_H
#define BULLET_H

#include <QObject>

#include "GraphicObject.h"

class Bullet : public GraphicObject
{
	Q_OBJECT
public:
	Bullet(int, int, std::string);
	void move();
	void destroy();
private:
	std::string direction;
};

#endif // BULLET_H