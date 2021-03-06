//
// Created by student on 4/29/20.
//

#ifndef CARRENTAL_MOTORVEHICLE_H
#define CARRENTAL_MOTORVEHICLE_H
#include "Vehicle.h"


class MotorVehicle : public Vehicle
{
private:
    int engineDisplacement;

public:
    MotorVehicle(const std::string &plateNumber, const unsigned int &basePrice, const int engineDisplacement);
    virtual ~MotorVehicle()=0;
    virtual int get_engineDisplacement() const;
    virtual void set_engineDisplacement(int eD);
    unsigned int getActualRentalPrice();
    std::string getVehicleInfo();

};


#endif //CARRENTAL_MOTORVEHICLE_H
