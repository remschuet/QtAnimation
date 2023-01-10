#include <QApplication>
#include <QGraphicsScene.h>
#include <QGraphicsView>

#include "GraphicObject.h"

GraphicObject::GraphicObject() : QObject(), QGraphicsPixmapItem()
{

}

void GraphicObject::setPositionXY(GraphicObject* object, int x, int y)
{
	object->setPos(object->x() + x, object->y() + y);
}
