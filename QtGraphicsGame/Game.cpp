#include <QApplication>
#include <QGraphicsScene.h>
#include <QGraphicsView>

#include "Game.h"
#include "Gameplay.h"
#include "GraphicObject.h"
#include "Tower.h"
#include "ShooterTower.h"
#include "Background.h"
#include "Event.h"
#include "Gameplay.h"

Game::Game(int SCENE_SIZE_X, int SCENE_SIZE_Y) : QObject(), QGraphicsPixmapItem()
{
    // Create scene
    QGraphicsScene* scene = new QGraphicsScene();

    // Add view
    QGraphicsView* view = new QGraphicsView(scene);
    view->show();
    view->setFixedSize(SCENE_SIZE_X, SCENE_SIZE_Y);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    scene->setSceneRect(0, 0, SCENE_SIZE_X, SCENE_SIZE_Y);

    // Add Gameplay
    Gameplay* gameplay = new Gameplay(SCENE_SIZE_X, SCENE_SIZE_Y);
    scene->addItem(gameplay);

    // Add Event management
    Event* event = new Event(gameplay);
    scene->addItem(event);

}