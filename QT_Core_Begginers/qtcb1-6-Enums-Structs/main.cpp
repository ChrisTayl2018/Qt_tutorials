#include <QCoreApplication>
#include <QDebug>

#include <string>
// Enums can only be int, unsigned int, long, unsigned long, long long, or unsigned long long
enum Colours { orange, blue, green , purple , yellow  }; // similiar to a zero based array

struct Product {
    std::string name;
    int version;
    double weight;
    double height;
    double length;
    Colours color;
};


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Colours color1= Colours::yellow;
    Colours color2 = yellow;
    Colours color3 = (Colours)4;

    Product product1;
    qInfo() << "Size of the product" << sizeof (product1);

    product1.name = "Underground Articulated Truck";
    product1.version =1;
    product1.weight = 344.5;
    product1.height = 3.00;
    product1.length = 9.0;
    product1.color = color1;
    // TO DO: Figure out how to reference the actual value inside an enum and not the index. E.g. the colour returns the value 4 as yellow is the 4th index.


    qInfo() << "Product Name: " << QString::fromStdString(product1.name);
    qInfo() << "Product version: " << product1.version;
    qInfo() << "Product weight: " << product1.weight << "kg";
    qInfo() << "Product height: " << product1.height << "m";
    qInfo() << "Product length: " << product1.length << "m";
    qInfo() << "Product colour: " << product1.color;





    return a.exec();
}
