#include "destination.h"
destination::destination(QObject *parent) : QObject(parent)
{

}

destination::~destination()
{

}

void destination::onMessage(QString message)
{
    qInfo() << "Message received" << message;
}
