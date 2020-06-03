#include "canine.h"
#include <QDebug>

canine::canine(QObject *parent) : mammal(parent)
{

}

void canine::bark(){
    qDebug() << "Woof Woof";
}
