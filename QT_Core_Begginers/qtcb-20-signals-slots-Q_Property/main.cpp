#include <QCoreApplication>
#include "watcher.h"
#include "test.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Create objects
    test tester;
    watcher destination;


    QObject::connect(&tester, &test::messageChanged, &destination, &watcher::messageChanged);

    tester.setProperty("message", "hello world");
    tester.setMessage("Testing");


    return a.exec();
}


// Quiz for this section

//Q1. What is signal?
// A means to notify another object that an event occured

//Q2. What is a slot?
// A special function that can be connected to signals

//Q3. What happens when you connect a signal to a slot?
// Slots will get called by Qt when a connected signal is emitted

//Q4. What macro makes signals and slots possible ?
// Q_Object makes this possible
