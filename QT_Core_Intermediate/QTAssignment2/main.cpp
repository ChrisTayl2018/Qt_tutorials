#include <QCoreApplication>
#include <QDebug>
#include <QTextStream>
#include <QMap>
#include <QList>


void printToScreen(QString value){
    qInfo() << value;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QTextStream inputValue1(stdin), inputValue2(stdin);

    QMap<QString, int> map;

    bool quit = false;

    while(!quit){

        // User input 1
        printToScreen("Enter name or type quit: ");
        QString inputVal1 = inputValue1.readLine();

        if (inputVal1 == "quit"){
            quit = true;
        }
        else
        {
            // User input 2
            printToScreen("Enter age: ");
            QString inputVal2 = inputValue2.readLine();
            // insert in the list
            map.insert(inputVal1, inputVal2.toInt());
        }
    }
    // Sort the list alphabetically
    QList<QString> keys = map.keys();
    keys.sort();

    // Print all the keys and corresponding values
    foreach(QString key, keys){
        qInfo() << key << "  is" << map[key] << "years old";
    }

    return 0;
}

// Assignment Instructions:
/*
 * application loops
 * user enters name or type quit
 * if quit{ print out the entier QList with the keys
 * enter name
 * enter age
 * print name and age in the format Enter a name or type quit
 * print the values out alphabetically
 */
