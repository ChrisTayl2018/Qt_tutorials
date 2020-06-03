#ifndef DESTINATION_H
#define DESTINATION_H

#include <QObject>
#include <QDebug>

#include "source.h"

class destination : public QObject
{
    Q_OBJECT
public:
    explicit destination(QObject *parent = nullptr);
    ~destination();

signals:

public slots:
    void test();
};

#endif // DESTINATION_H


// In the destination object, actually cast the signal object as a se
