#include <QCoreApplication>
#include <QDebug>
#include "animal.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    QString name = "Chris" ;
    qInfo() << "My name is at :" << &name  << " with a value of: " << name;

    animal cat(&a, "Fluffy");
    animal dog(&a, "Belle");
    animal person(&a, "Chris");


    person.sayHello("Hey Guys");






    return a.exec();


}
