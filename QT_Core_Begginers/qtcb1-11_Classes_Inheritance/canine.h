#ifndef CANINE_H
#define CANINE_H
#include "mammal.h"
#include <QObject>

class canine : public mammal
{
    Q_OBJECT
public:
    explicit canine(QObject *parent = nullptr);
    void bark();

signals:

};

#endif // CANINE_H
