#include "watcher.h"
#include <QDebug>

watcher::watcher(QObject *parent) : QObject(parent)
{

}

void watcher::messageChanged(QString message)
{
    qInfo() << message;
}
