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

private:
    Gameplay* gameplay;
    const int FRAMES_PER_SECOND = 10;
    int timerCall = 0;

};

#endif // EVENT_H