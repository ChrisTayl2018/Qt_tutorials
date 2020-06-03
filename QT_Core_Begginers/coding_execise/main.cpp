#include <QCoreApplication>
#include <iostream>
#include <stdio.h>
#include <QDebug>

using namespace  std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int arr[6] = {3, 6, 8, 1, 3, 6}, arr2[6];
    int arrSize = sizeof(arr)/sizeof(arr[0]), idx= 0;
    for(int i= arrSize; i > 0; i--) {
        int tempVar = arr[i];
        arr2[idx] = tempVar;
        idx++;
    }
    return a.exec();
}
