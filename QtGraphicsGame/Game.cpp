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

    // Add background
    Background* background = new Background(0, 0);
    scene->addItem(background);


    Tower* tower = new Tower(20, 200);
    scene->addItem(tower);

    ShooterTower* shooterTower = new ShooterTower(700, 230);
    scene->addItem(shooterTower);

    // Add Event management
    Event* event = new Event(tower);
    scene->addItem(event);

}