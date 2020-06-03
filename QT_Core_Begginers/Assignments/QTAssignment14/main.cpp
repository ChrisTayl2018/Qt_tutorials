#include <QCoreApplication>
#include <QDebug>
#include <QTextStream>
#include <iostream>
#include "test.h"

void printToScreen(QString value){
    qInfo() << value;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QTextStream s(stdin);

    test<int> obj;

    printToScreen("Enter value 1:"); //prompt
    QString stringVal1 = s.readLine(); // read

    printToScreen("Enter value 2:"); // prompt
    QString stringVal2 = s.readLine(); // read

    // Use the template to add the two values
    int sumVal= obj.add(stringVal1.toInt(), stringVal2.toInt());

    // Print values to the screen
    printToScreen(QString("Added values = %1").arg(QString::number(sumVal)));
    return a.exec();
}


// Templates and generics assignment
// 10 minute assignment

// Assignment instructions:
// answer is 108
// make a template function that will add two values together
