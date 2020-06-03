#include "station.h"

station::station(QObject *parent, int channel, QString name): QObject(parent)
{
    this->name = name;
    this->channel = channel;
}

void station::broadcast(QString message)
{
    emit sendSignal(channel, name, message);
}
