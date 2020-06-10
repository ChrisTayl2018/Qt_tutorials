#include <QCoreApplication>
#include <QDebug>
#include <QByteArray>
#include <QFile>
#include <QDir>
#include <QRandomGenerator>
#include <QTextCodec>


QString generateStringData(){
    QString data;
    for (int i = 0; i < 10; i++){
        data.append("Hello\r\n");
    }
    return data;
}

QByteArray generateASCIData(){
    QByteArray data;

    for (int i = 0; i < 10; i++){
        data.append(78);
        data.append(22);
        data.append(45);
        data.append(78);
        data.append(98);
        data.append(105);
        data.append(23);
        data.append(48);
        data.append(72);
    }
    return data;
}

QString generateUnicodeData(){
    QString data;
    data.append("Unicode test\r\n");
    for(int i=0; i<10; i++){
        int number = QRandomGenerator::global()->bounded(1112064);
        data.append(number);
    }
    data.append("\r\n");
    return data;
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /* BASE 64 Encoding/Decoding
     *
     */

    QString data = "Hello my name is Bryan";
    // Encode and decode from base 64
    QByteArray bytes(data.toLatin1());
    QByteArray encodedData = bytes.toBase64();
    QByteArray decodedData = QByteArray::fromBase64(encodedData);
    qInfo() << data << " - String data";
    qInfo() << bytes << "- to Latin";
    qInfo() << "\n";
    qInfo() << encodedData << " - Encoded data" ;
    qInfo() << decodedData << " - Decoded data \n" ;

    /* ASCII data Encoding/Decoding
     *
     */
    QByteArray dataASCII = generateASCIData();
    qInfo() << "ASCII data: " << dataASCII << "\n";
    // Write ASCII data to file
    QString path = QDir::currentPath() + QDir::separator() + "dataASCII.txt";
    QFile file(path);

    if (file.open(QIODevice::WriteOnly)){
        file.write(dataASCII);
        file.close();
    }
    qInfo() << "File written to: " << path << "\n";

    /* UTF-8 data Encoding/Decoding
     *
     */
    QString dataUTF = generateUnicodeData();
    QString path2 = QDir::currentPath() + QDir::separator() + "dataUTF.txt";
    QFile file2(path2);
    if (file2.open(QIODevice::WriteOnly)){
        QTextStream stream(&file);
        stream.setCodec("UTF-8");
        stream << dataUTF;
        stream.flush();
        file2.close();
    }

    qInfo() << "File written to: " << path2;
    qInfo() << "Unicode data: " << dataUTF;
    qInfo() << "ASCII data: " << dataUTF.toLatin1();
    qInfo() << "\n";

    /* HEX data Encoding/Decoding
     *
     */
    QString dataString = generateStringData();
    // Encode and decode from base 64
    QByteArray bytesHex(dataString.toLatin1());
    QByteArray encodedDataHex = bytesHex.toHex();
    QByteArray decodedDataHex = QByteArray::fromHex(encodedDataHex);
    qInfo() << dataString << " - String data";
    qInfo() << bytesHex << "- to Latin";
    qInfo() << encodedDataHex << " - Encoded data" ;
    qInfo() << decodedDataHex << " - Decoded data \n" ;
    qInfo() << "\n";

    /* QTextCodec data Encoding/Decoding
     *
     */

    QString dataQTextcodec = generateStringData();
    QTextCodec *codec = QTextCodec::codecForName("UTF-16");
    if(!codec){ qFatal("No code");}

    QByteArray bytesCodec = codec->fromUnicode(dataQTextcodec);
    QString stringCodec = codec->toUnicode(bytesCodec);
    qInfo() << "\n";
    qInfo() << "Bytes: " << bytesCodec;
    qInfo() << "String: " << stringCodec ;

    return 0;
}

// Assignment instructions
// Take a string "Hello my name is"
// Base 64 encode the data
// then decode the Base 65 data

// as an extension, play around with decoding and encoding ASCI, UTF-8, Base 64, HEX, QTextCodec
