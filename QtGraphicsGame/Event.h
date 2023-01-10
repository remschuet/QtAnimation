#ifndef EVENT_H
#define EVENT_H

#include <QGraphicsRectItem>
#include <QObject>
#include <List>

#include "ShooterTower.h"
#include "event.h"

class Event : public QObject, public QGraphicsRectItem // QObject for timer
{
    Q_OBJECT
public:
    Event(ShooterTower*);
    void keyPressEvent(QKeyEvent* event);
    void keyReleaseEvent(QKeyEvent* e);

    QMap<int, bool> keys;

private slots:
    void timerOutEvent();

private:
    ShooterTower* shooterTower;

};

#endif // EVENT_H