#include <QCoreApplication>
#include "destination.h"
#include "source.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Now we set up the main loop
    source objSource;
    destination objDestination;

    // Connect the signal to the slot
    // The general syntax is as follows
    // connect(source object, signal, destination object, slot)

    QObject::connect(&objSource, &source::mySignal, &objDestination, &destination::onMessage);

    // Now emit the signal
    objSource.test();

    return a.exec();
}
