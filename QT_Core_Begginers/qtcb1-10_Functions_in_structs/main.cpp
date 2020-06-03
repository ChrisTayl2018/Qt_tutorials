#include <QCoreApplication>
#include <QDebug>

struct laptop{
    int weight;

    double asKilograms(){
        return weight * 0.453592;
    };
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    laptop dellXps;
    dellXps.weight = 5;
    double weightInKg = dellXps.asKilograms();
    qInfo() << "Dell Xps in Kg weighs: " << weightInKg;

    return a.exec();
}

// This tutorial is displaying a way to use functions within structs. This is however not the best way to do this
// As classes make this redundant given classes are a better way of structuring functions for a certain object to hav
