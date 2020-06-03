#include "animal.h"

animal::animal(QObject *parent, QString name)
{
    this->name = name;
    qInfo() << "Animal name is at: " << &name << "with a value of: " << name;
    qInfo() << "Animal name: " << &this->name << " value= " << this->name;
}

void animal::sayHello(QString message)
{
    qInfo() << message << " from " << name  << " at " << &name;
    qInfo() << message << " from " << this->name << " at " << &this->name;
}
