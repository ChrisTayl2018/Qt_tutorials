#include <QCoreApplication>
#include "source.h"
#include "destination.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Now we set up the main loop
    source objSource;
    destination objDestination;

    QObject::connect(&objSource, &source::test, &objDestination, &destination::test);

    objSource.doTest();

    return a.exec();
}




/*
 * Assignment Instructions:
 * Source emits the test signal
 * Slot on the destination object cast the sender object
 * Destination class cast the sender object into a source object
 * Call the say hello method using this object
 */
