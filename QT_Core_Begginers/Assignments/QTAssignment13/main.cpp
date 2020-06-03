#include <QCoreApplication>
#include <QDebug>
#include <QTextStream>

void printInfoToScreen(QVariant value){
    qInfo() << value;
}

void printQWarningToScreen(QString value){
    qWarning() << value;
}



bool doDivision(int input1, int input2){

    try{
        if (!input2 || !input1) throw QString("Mathematically impossible");
        if (input1 > 100) throw QString("Value1 to large");
        if (input2 > 100) throw QString("Value2 to large");
        double result = (double)input1/ (double)input2;
        printInfoToScreen(QVariant(result).toString());
    }
    catch (QString e) {
        printQWarningToScreen(e);
    }
    catch(...){
        printQWarningToScreen("Unknown Error");
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QTextStream s(stdin);
    int max = 44;

    printInfoToScreen("Enter value1: "); //prompt
    QString stringInput1= s.readLine(); //read

    printInfoToScreen("Enter value2: "); //prompt
    QString stringInput2 = s.readLine(); //read


    bool val = doDivision(stringInput1.toInt(), stringInput2.toInt());
    printInfoToScreen(val);

    return a.exec();
}
