#include <QtWidgets/QApplication>
#include <QApplication>
#include <QGraphicsScene.h>
#include <QGraphicsView>
#include <QTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Create scene
    QGraphicsScene* scene = new QGraphicsScene();

    // Add view
    QGraphicsView* view = new QGraphicsView(scene);
    view->show();
    view->setFixedSize(200, 200);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);


    return a.exec();
}
