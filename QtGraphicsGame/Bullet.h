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
	int GetNumberOfTimeMove();
private:
	std::string direction;
	int numberOfTimeMove = 0;
};

#endif // BULLET_H