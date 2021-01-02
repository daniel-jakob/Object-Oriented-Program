#include <iostream>
using namespace std;

#include "Vehicle.h"
#include "Asset.h"
#include "Train.h"

Train::Train(int vid, float v, int y) : Vehicle(vid), Asset(v, y) {
    noOfLocomotives = 2;
}

void Train::set_locomotives(int n) {
    noOfLocomotives = n;
}

int Train::get_train_locomotives() {
    return noOfLocomotives;
}

void Train::print_details() {
    cout << "Train ID: " << get_vehicle_id() << " No. of Locomotives: " << noOfLocomotives << " Year Acquired: " << getYear() << " Value: " << getValue();
    if (get_v_registered())
        cout << "\nThis Train has been registered\n\n";
    else
        cout << "\nThis Train has not been registered\n\n";
}

void Train::depreciateAsset() {
    setValue(getValue() * 0.85);
}
