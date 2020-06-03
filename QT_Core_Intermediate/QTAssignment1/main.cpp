#include <QCoreApplication>
#include <QDebug>
#include <QScopedPointer>
#include "test.h"

void assignmenTSolution_doStuff(){
    QScopedPointer<test> test2(new test());
    qInfo() << test2.data();
    // differences here being it deconstructs the test class when at the end of the scope
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Construct the object
    QScopedPointer<test> pointer1(new test()) ;
    // If object exists
    if(pointer1){qInfo() << pointer1.data();} //if pointer exists
    // call the deconstructor
    pointer1->deleteLater();


    // Assignment solution execution:
    assignmenTSolution_doStuff();

    return a.exec();
}

// Assignment Instructions:

/* Use QScopedPointer
 * Make a Test Class
 * Observe the life cycle of this object as its in memory
 * Terminal should display the following
 * Constructed  object (test ( reference to this object memory location))
 * Deconstrcuted object (test ( reference to this object memory location))
 */
