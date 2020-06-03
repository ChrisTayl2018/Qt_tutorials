#include <QCoreApplication>
#include <QDebug>

void display(QString *value){
    qInfo() << "The pointer: " << value;
    qInfo() << "The object: " << &value; // takes a copy of the value
    qInfo() << "The data: " << *value;
    qInfo(" ");
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    QString name = "Emily Herringe";
    QString* description = new QString("Chris Taylor");

    display(&name);

    display(description);

    delete description; // equivalent of destroying this pointer = 0

    display(description);



    return a.exec();
}
