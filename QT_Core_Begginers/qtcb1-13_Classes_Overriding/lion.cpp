#include "lion.h"
#include <QDebug>
// class <lion> inherits base class <feline>
lion::lion(QObject *parent) : feline(parent)
{

}

void lion::speak(){
    qDebug() << "ROAR!!!";

    // Note, need to make sure that the lion is inheriting properties from the feline
    // This is a method of overiding the speak function so that it is called within this speak function
    feline::speak();



}
