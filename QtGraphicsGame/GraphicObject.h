#ifndef GRAPHICOBJECT_H
#define GRAPHICOBJECT_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <tuple>


class GraphicObject : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    GraphicObject(int, int);
    void setPositionXY(GraphicObject*, int, int);
    void setImageSize(int, int);
    int getPosX(GraphicObject*);
    int getPosY(GraphicObject*);
    std::tuple<int, int> getImageSize();

protected:
    int pictureHeight;
    int pictureWidth;
};

#endif // GRAPHICOBJECT_H