#include "yellowb.h"

yellowb::yellowb(float x, float y, float radius, QTimer *timer, QPixmap pixmap, b2World *world, QGraphicsScene *scene):Bird(x, y,radius,timer,pixmap,world,scene){}

int yellowb::special(){return 1;}
