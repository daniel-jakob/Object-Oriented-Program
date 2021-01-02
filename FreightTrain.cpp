#include <iostream>
using namespace std;

#include "Vehicle.h"
#include "Asset.h"

#include "Train.h"
#include "FreightTrain.h"

FreightTrain::FreightTrain(int vid, float v, int y) : Train(vid, v, y) {
    noOfWagons = 20;
}

void FreightTrain::set_wagons(int n) {
    noOfWagons = n;
}

int FreightTrain::operator+(FreightTrain b) {
    return noOfWagons + b.noOfWagons;
}

void FreightTrain::print_details()
{
    cout << "Freight Train ID: " << get_vehicle_id() << " No. of Locomotives: " << get_train_locomotives() << " No. of Wagons: " << noOfWagons << " Year Acquired: " << getYear() << " Value: " << getValue();
    if (get_v_registered())
        cout << "\nThis Freight Train has been registered\n\n";
    else
        cout << "\nThis Freight Train has not been registered\n\n";
}

void FreightTrain::depreciateAsset() {
    setValue(getValue() * 0.92);
}
