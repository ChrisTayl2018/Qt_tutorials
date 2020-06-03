#include "feline.h"
#include <QDebug>

feline::feline(QObject *parent) : QObject(parent)
{

}

void feline::speak(){
    qDebug() << "Meow";
}
