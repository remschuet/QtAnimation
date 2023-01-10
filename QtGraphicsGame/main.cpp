#include <QApplication>
#include <iostream>

#include "Game.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    const int SCENE_SIZE_X = 1000;
    const int SCENE_SIZE_Y = 600;

    Game* game = new Game(SCENE_SIZE_X, SCENE_SIZE_Y);

    return a.exec();
}
