#include "destination.h"

destination::destination(QObject *parent) : QObject(parent)
{

}

destination::~destination()
{
    // Deconstructor
}

void destination::test()
{
    source* obj = qobject_cast<source*>(sender());
    if(obj){obj->sayHello();}
    qInfo() << "Hello world message received";
}
