#include "appliance.h"

appliance::appliance(QObject *parent) : QObject(parent)
{

}

bool::appliance::cook(){
    return true;
}


bool::appliance::freeze(){
    return true;
}

bool::appliance::toasts(){
    return true;
}
