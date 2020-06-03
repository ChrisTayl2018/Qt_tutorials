#include <QCoreApplication>

#include <iostream> // input and output stream
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    std::cout << "Hello" << endl;
    qInfo() << "hello";

    // Different output methods
    int age = 44;
    std::cout << "\n" << age;
    std::cout << std::endl;
    std::cout << std::flush;

    // Different input methods
    int agenumber;
    qInfo() << "Please enter an age: ";
    std::cin >> agenumber;
    qInfo() << "You entered " << agenumber;

    // Cerror output
    std::cout << "  " << std::endl;
    std::cout << "Standard output " << std::endl;
    std::cerr << "Error out" << std::endl;

    // QDebug vs Cout
    // Different types of outputs include qInfo(), qDebug(), qCritical() and qFatal().
    // These are all used for different test cases. notably qCritical and qFatal are used
    // for error checking etc.


    return a.exec();
}
