#include "mammal.h"
#include <QDebug>

mammal::mammal(QObject *parent) : animal(parent)
{

}

void mammal::isAlive(){
    qDebug() << "The mammal is alive";

}
