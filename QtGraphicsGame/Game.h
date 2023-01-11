#ifndef GAME_H
#define GAME_H

#include <QGraphicsRectItem>
#include <QObject>

class Game : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Game(int, int);
};

#endif // GAME_H