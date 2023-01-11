#ifndef EVENT_H
#define EVENT_H

#include <QGraphicsRectItem>
#include <QObject>
#include <List>

#include "Gameplay.h"
#include "event.h"

class Event : public QObject, public QGraphicsRectItem // QObject for timer
{
    Q_OBJECT
public:
    Event(Gameplay* gameplay);
    void keyPressEvent(QKeyEvent* event);
    void keyReleaseEvent(QKeyEvent* e);

    QMap<int, bool> keys;

private slots:
    void timerOutEvent();
    void timer100Milliseconds();
    void timer50Milliseconds();

private:
    Gameplay* gameplay;

};

#endif // EVENT_H