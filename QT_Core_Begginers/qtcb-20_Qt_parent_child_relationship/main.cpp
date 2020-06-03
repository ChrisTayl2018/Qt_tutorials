#include <QCoreApplication>
#include "test.h"
#include "animal.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Create the parent
    test *parent = new test(&a);

    parent->dog = new animal(parent);

    // Delete the parent class and this will delete the child class
    delete parent;

    return a.exec();
}



// End of the seciton quiz:

// A pointer exists on the stack and points to a location on the heap


// Q4.
// How is a pointer passed?
//The pointer is passed by value but it points to an object in memory

// Q5.
