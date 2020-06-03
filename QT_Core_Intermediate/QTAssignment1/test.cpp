#include "test.h"
#include <QDebug>

test::test(QObject *parent) : QObject(parent)
{
    qInfo() << "Constructed object" << this;
}

test::~test()
{
    qInfo() << "Deconstructed object" << this;
}
