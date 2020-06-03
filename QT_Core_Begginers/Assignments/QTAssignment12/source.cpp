#include "source.h"

source::source(QObject *parent) : QObject(parent)
{

}

void source::sayHello()
{
    qInfo() << "Hello World message sent";
}

void source::doTest()
{
    emit test(); // source emits the test signal

}
