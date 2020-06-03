#include <QCoreApplication>
#include <QDebug>
#include <array>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int ages[4] = {1, 2, 5, 99} ;

    qInfo() << ages; // will return the memory address of the variable array
    qInfo() << ages[0];
    qInfo() << ages[1];
    qInfo() << ages[2];
    qInfo() << ages[3];
    qInfo() << ages[4]; // Warning -- this is bad practice as this will result

    // An alternate way to define an array using the <array> library

    std::array<int,4> cars;
    cars[0] = 1;
    cars[1] = 2;
    cars[2] = 23;
    cars[3] = 101 ;



    // Comparing sizes of the arrays as a simple debuging tool
    qInfo() << "Size: " << cars.size();
    qInfo() << "Size of: " << sizeof (cars);
    qInfo() << "Ending value: " << cars.end();
    qInfo() << "Last value actualy: " << cars[cars.size()-1];

    return a.exec();
}
