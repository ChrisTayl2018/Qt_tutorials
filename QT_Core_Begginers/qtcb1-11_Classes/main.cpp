#include <QCoreApplication>
#include "animal.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Create an instance of the class
    animal cat;
    animal dog;
    animal bird;

    // Now call the functions of the class;
    cat.speak("meow");
    dog.speak("bark");
    bird.speak("tweet tweet");



    return a.exec();
}
