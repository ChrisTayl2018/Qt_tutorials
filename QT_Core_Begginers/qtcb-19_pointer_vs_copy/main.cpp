#include <QCoreApplication>
#include <QDebug>

void test(QString *value){
    qInfo() << value << "memory location with the value: " << *value;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString *data = new QString("anfvinifvimrandomanfineinvariable");

    qInfo() << " Actual Value: " << data->length();
    qInfo() << " Pointer size: " << sizeof(data);
    qInfo() << " Data: " << *data;
    qInfo() << " Sizeof: " << sizeof (*data);

    test(data);

    // Pointers use 8 bits so it is better t =o use a pointer to the value

    // After workng with a pointer, pointers should be deleted
    delete data;
    test(data);

    return a.exec();
}
