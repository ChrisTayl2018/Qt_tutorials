#include <QCoreApplication>
#include <QDebug>
#include <QString>
// Displaying variable memory allocation

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString name= "Chris";
    int age = 28;
    double height = 5.10;
    signed int houseNum =59;
    unsigned int unit = 4;

    // Display the values
    qInfo() << name ;
    qInfo() << age;
    qInfo() << height;


    qInfo() << "Displaying the sizes of the variables";
    qInfo() << sizeof(name) << "bytes string";
    qInfo() << sizeof(age)<< "bytes int";;
    qInfo() << sizeof (height)<< "bytes double";;
    qInfo() << sizeof(houseNum)<< "bytes signed int";
    qInfo() << sizeof(unit)<< "bytes unsigned int";

    return a.exec();
}
