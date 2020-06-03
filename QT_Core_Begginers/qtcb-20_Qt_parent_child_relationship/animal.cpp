#include "animal.h"

animal::animal(QObject *parent) : QObject(parent)
{
    qInfo() << this << "Animal Constructor";
}

animal::~animal()
{
    qInfo() << this << "Animal Deconstructed" ;
}
