#include "test.h"

test::test(QObject *parent) : QObject(parent)
{
    qInfo() << this << "Test Constructed";
}

test::~test()
{
    qInfo() << this << "Test Decsontrcuted";
}
