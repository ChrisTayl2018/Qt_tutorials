#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    // Creating an enum
    enum Colour{red, yellow, blue}; // Zero enumerator

    Colour choiceColour = Colour::red;
    qInfo() << "Colour Choice:";
    qInfo() << choiceColour ;

    enum Person{Emily=27, Chris=29, Alena=24, Brett=31};
    Person personObj = Person::Alena;
    qInfo() << personObj;

    // Creating a struct






    return a.exec();
}
