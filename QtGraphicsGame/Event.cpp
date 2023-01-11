#include <QApplication>
#include <QGraphicsScene.h>
#include <QGraphicsView>
#include <QList>
#include <QTimer>
#include <QKeyEvent>

#include "Event.h"
#include "Gameplay.h"

Event::Event(Gameplay* gameplay) : QGraphicsRectItem()
{
    this->gameplay = gameplay;
    setRect(0, 0, 1, 1);
    setPos(0, 0);

    // Access the key event
    setFlag(QGraphicsItem::ItemIsFocusable);
    setFocus(); // Can create in scene

    // Create first World
    this->gameplay->createFirstWorld();

    // Timer for the soldier movement
    QTimer* timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(timerOutEvent()));
    timer->start(1000);    
    
    QTimer* timer2 = new QTimer();
    connect(timer2, SIGNAL(timeout()), this, SLOT(timer100Milliseconds()));
    timer2->start(100);
}

void Event::timerOutEvent()
{
    gameplay->CreateSoldier();

}

void Event::timer100Milliseconds()
{
    gameplay->moveSoldier();
    gameplay->shootWithTower();
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