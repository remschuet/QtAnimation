#ifndef EVENT_H
#define EVENT_H

#include <QGraphicsRectItem>
#include <QObject>
#include <List>

#include "Tower.h"
#include "event.h"

class Event : public QObject, public QGraphicsRectItem // QObject for timer
{
    Q_OBJECT
public:
    Event(Tower* tower);
    void keyPressEvent(QKeyEvent* event);
    void keyReleaseEvent(QKeyEvent* e);

    QMap<int, bool> keys;

private slots:
    void timerOutEvent();

private:
    Tower* tower;

};

#endif // EVENT_H