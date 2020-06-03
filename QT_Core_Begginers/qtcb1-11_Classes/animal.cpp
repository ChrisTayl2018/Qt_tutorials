#include "animal.h"

animal::animal(QObject *parent) : QObject(parent)
{

}

// Take the animal class and call the speak function inside class
void animal::speak(QString message){
    qDebug() << message;
}
