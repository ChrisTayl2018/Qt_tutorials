#include <QCoreApplication>
#include "feline.h"
#include "canine.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    animal test;


    feline kitty;
    kitty.meow();

//    canine puppy;
//    puppy.bark();

    return a.exec();
}
