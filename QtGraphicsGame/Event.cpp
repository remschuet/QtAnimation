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
    timer->start(FRAMES_PER_SECOND);
}

void Event::timerOutEvent()
{
    this->timerCall += FRAMES_PER_SECOND;

    if (this->timerCall % 1000 == 0)
    {
        gameplay->CreateSoldier();
        gameplay->shootWithTower();
        this->shootTowerTimerImage = this->timerCall;
        this->firstShoot = true;
    }
    if (this->timerCall % 50 == 0)
        gameplay->managementBullets();
    if (this->timerCall % 100 == 0)
    {
        gameplay->moveSoldier();
    }
    if (this->firstShoot && this->timerCall % (this->shootTowerTimerImage + 100) == 0)
    {
        gameplay->changeImage();
    }
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