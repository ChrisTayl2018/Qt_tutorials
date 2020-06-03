#include <QCoreApplication>
#include <QDebug>

void test(QString name){
    qInfo() << "Size of stack: " << name.length();
}

void testPointer( QString *name) {
    qInfo() << "Size of heap: " << name->length();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString name;
    name = "Emily Herringe" ;
    test(name);

    testPointer(&name);

    return a.exec();
}
