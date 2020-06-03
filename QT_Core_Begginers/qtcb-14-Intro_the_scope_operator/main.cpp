#include "mainwindow.h"
#include <QtDebug>

#include <QApplication>

void test(int number){
    qInfo() << "2 Test number is at: " << &number << " with a value of: " << number;
}

void testRef(int &number){
    qInfo() << "4 Test number is at: " << &number << " with a value of: " << number;

}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    int number = 50;
    qInfo() << "1 Test number is at: " << &number << " with a value of: " << number;

    // As you can see from the result of this function in command window
    // This creates a copy in the memory location
    test(number);

    bool ok= true;
    if(ok) {
        // Given this was declared in this scope then it is now a new memory location and a new value
        int number = 45;
        qInfo() << "3 Test number is at: " << &number << " with a value of: " << number;
    }

    testRef(number);

    qInfo() << "5 Test number is at: " << &number << " with a value of: " << number;

    MainWindow w;
    w.show();
    return a.exec();
}
