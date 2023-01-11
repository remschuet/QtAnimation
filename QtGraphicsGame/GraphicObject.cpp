#include <QApplication>
#include <QGraphicsScene.h>
#include <QGraphicsView>
#include <string>

#include "GraphicObject.h"

GraphicObject::GraphicObject(int posX, int posY) : QObject(), QGraphicsPixmapItem()
{
	setPositionXY(this, posX, posY);
}

void GraphicObject::setPositionXY(GraphicObject* object, int x, int y)
{
	object->setPos(object->x() + x, object->y() + y);
}

void GraphicObject::setImageSize(int height, int width)
{
	this->pictureHeight = height;
	this->pictureWidth = width;
}

int GraphicObject::getPosX(GraphicObject* object)
{
	return object->x();
}

int GraphicObject::getPosY(GraphicObject* object)
{
	return object->y();
}

std::tuple<int, int> GraphicObject::getImageSize()
{
	return std::tuple(this->pictureHeight, this->pictureWidth);

	/*
	auto [imageX, imageY] = this->getImageSize();
	std::cout << imageX << imageY;
	*/
}

int GraphicObject::getImageSizeX()
{
	return this->pictureWidth;
}

int GraphicObject::getImageSizeY()
{
	return this->pictureHeight;
}