#ifndef GAMEITEM_H
#define GAMEITEM_H

#include <Box2D/Box2D.h>
#include <QGraphicsPixmapItem>
#include <QPainter>
#include <QTransform>
#include <QtMath>
#include <QTime>
#include <QApplication>
#include <qwaitcondition.h>

class GameItem : public QObject
{
    Q_OBJECT
public:
    GameItem(b2World *world);
    ~GameItem();
    static void setGlobalSize(QSizeF worldsize, QSizeF windowsize);
    QGraphicsPixmapItem g_pixmap;
    void setId(char id);
    char getId();
    void collide();
public slots:
    void paint();
    // TODO virtual void collide();

protected:
    b2Body *g_body;

    QSizeF g_size;
    b2World *g_world;
    static QSizeF g_worldsize, g_windowsize;
    char theid;
private:
    void delay(int);
};

#endif // GAMEITEM_H
