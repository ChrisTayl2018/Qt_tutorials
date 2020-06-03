#include "source.h"

source::source(QObject *parent) : QObject(parent)
{

}

source::~source()
{

}

void source::test()
{
    // Test function that actually emits the signal
    QString stringVal = QString("Hello world");
    emit mySignal(stringVal);
}
