#ifndef GRAPHICOBJECT_H
#define GRAPHICOBJECT_H

#include <QGraphicsPixmapItem>
#include <QObject>

class GraphicObject : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    GraphicObject();
    void setPositionXY(GraphicObject*, int, int);
};

#endif // GRAPHICOBJECT_H