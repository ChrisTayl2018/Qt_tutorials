#include <QCoreApplication>
#include <QDebug>
#include "appliance.h"


// Interfaces use inheritance but they are not proper inheritence. This is a difficult subject

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    appliance Baristor4000;
    qInfo() << "Does it cook:" << Baristor4000.cook();
    qInfo() << "Does it toast: " << Baristor4000.toasts();
    qInfo() << "Does it freeze: " << Baristor4000.freeze();

    return a.exec();
}
