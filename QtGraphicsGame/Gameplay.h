#ifndef SCENE_H
#define SCENE_H

#include <QGraphicsRectItem>
#include <QObject>

class Gameplay : public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Gameplay();
};

#endif // SCENE_H