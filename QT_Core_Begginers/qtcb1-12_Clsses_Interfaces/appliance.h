#ifndef APPLIANCE_H
#define APPLIANCE_H

#include "toaster.h"
#include "microwave.h"
#include "freezer.h"

#include <QObject>

class appliance : public QObject, public freezer, public toaster, public microwave
{
    Q_OBJECT
public:
    explicit appliance(QObject *parent = nullptr);

signals:


    // microwave interface
public:
    bool cook();

    // toaster interface
public:
    bool toasts();

    // freezer interface
public:
    bool freeze();
};

#endif // APPLIANCE_H
