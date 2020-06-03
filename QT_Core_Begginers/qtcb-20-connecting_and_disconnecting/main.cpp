#include <QCoreApplication>
#include <QDebug>
#include <QTextStream>
#include <iostream>
#include "radio.h"
#include "station.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Create your objects
    radio boombox;
    station* channels[3];

    // Create some stations
    channels[0] = new station(&boombox, 106, "Mix 106");
    channels[1] = new station(&boombox, 101, "Tripple J");
    channels[2] = new station(&boombox, 87, "Raw FM");

    // Connect the signals
    // connect(reference to source obj, reference to signal, reference to destination obj, reference to slot, thread signal type)
    boombox.connect(&boombox, &radio::quit, &a, &QCoreApplication::quit, Qt::QueuedConnection);


    while(true){
        qInfo() <<  "Enter on, off, test or quit:";
        QTextStream qtInput(stdin);
        // The bellow method reads the input line, trims the white spaces and converts the input to upper case
        QString inputLine= qtInput.readLine().trimmed().toUpper();

        // Implement flow Control
        if(inputLine == "ON"){
            qInfo() << "Turning the radio on";
            for (int i = 0; i < 3; i++){
                station* channel = channels[i];
                boombox.connect(channel, &station::sendSignal, &boombox, &radio::listen);
            }
            qInfo() << "Radio is on";
        }

        if(inputLine == "OFF"){
            qInfo() << "Turning the radio off";
            for (int i = 0; i < 3; i++){
                station* channel = channels[i];
                boombox.disconnect(channel, &station::sendSignal, &boombox, &radio::listen);
            }
            qInfo() << "Radio is off";
        }

        if(inputLine == "TEST"){
            qInfo() << "Testing the radio";
            for (int i = 0; i < 3; i++){
                station* channel = channels[i];
                channel->broadcast("Broadcasting live");
            }
            qInfo() << "Testing completed";
        }

        if(inputLine == "QUIT"){
            qInfo() << "Quiting the radio";
            emit boombox.quit();
            break;
        }
    }



    return a.exec();
}
