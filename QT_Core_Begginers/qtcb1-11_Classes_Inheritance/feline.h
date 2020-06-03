#ifndef FELINE_H
#define FELINE_H
#include "mammal.h"
#include <QDebug>
#include <QObject>

class feline : public mammal
{
    Q_OBJECT
public:
    explicit feline(QObject *parent = nullptr);
    void meow() { qDebug() << "Meow Meow"; }

signals:

};

#endif // FELINE_H
