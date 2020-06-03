/*
 *
 * This is a multi line comment
 */

#include <QCoreApplication>
#include <QDebug>

int function1(int a , int b);

// To do a doxygen comment, type /**, thn hit enter. This has to happen above a function

/**
 * @brief main
 * @param argc
 * @param argv
 * @return
 */
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int alpha= function1(1, 2);
//    This is a comment
    qInfo() << alpha;
    return a.exec();
}

int function1( int a, int b){
    int number1 = a;
    int number2= b;
    return number1 + number2;
}
