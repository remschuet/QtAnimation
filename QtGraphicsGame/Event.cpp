#include <QApplication>
#include <QGraphicsScene.h>
#include <QGraphicsView>
#include <QList>
#include <QTimer>
#include <QKeyEvent>

#include "Tower.h"
#include "Event.h"

Event::Event(Tower* tower) : QGraphicsRectItem()
{
    this->tower = tower;
    setRect(0, 0, 1, 1);
    setPos(0, 0);
    // Access the key event
    setFlag(QGraphicsItem::ItemIsFocusable);
    setFocus();

    // Timer for the soldier movement
    QTimer* timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(timerOutEvent()));
    timer->start(1000);
}

void Event::timerOutEvent()
{
    tower->createSoldier();
}

void Event::keyReleaseEvent(QKeyEvent* event)
{
    keys[event->key()] = false;
}

void Event::keyPressEvent(QKeyEvent* event)
{
    if (event->key() == Qt::Key_Space && (!(event->isAutoRepeat())))
        printf("\nSpace press");

    if (event->key() == Qt::Key_Left)
        printf("\nleft press");
    if (event->key() == Qt::Key_Right)
        printf("\nright press");
    if (event->key() == Qt::Key_Up)
        printf("\nup press");
    if (event->key() == Qt::Key_Down)
        printf("\ndown press");

    keys[event->key()] = true;
}