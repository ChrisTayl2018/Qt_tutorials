#include <QCoreApplication>
#include <QDebug>
#include <iostream>
#include <QTextStream>

void printToScreen(QString value){
    qInfo() << value;
}

void printListToScreen(QList<QString> value){
    qInfo() << value;
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<QString> list;

    QTextStream s(stdin);
    QString inputValue;

    bool ok = true;

    do{

        // Get the users input
        printToScreen("Enter age: ");
        inputValue = s.readLine();
//        printToScreen(inputValue); //debugging output

        // if the string has a null value or value = 0 then break the loop
        if(inputValue == QString("0") || inputValue.isEmpty()){
            printToScreen("Error! Incorrect value entered");
            ok = false;
            break;
        }
        // Append the value in a QList
        list.append(inputValue);
//        printToScreen("Value added to list"); // debugging output

    }while(&ok);
//    printToScreen("Exited while loop"); // debugging output

    // Print list to screen
    printToScreen("Ages Entered: ");
    printListToScreen(list);
    printToScreen("Finished");
    printToScreen(" ");

//    // Another method of printing to screen
//    foreach(QString str, list){
//        printToScreen(str);
//    }
//    printToScreen("Finished");
    return a.exec();
}
