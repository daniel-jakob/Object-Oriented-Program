#include <iostream>
#include <fstream>
using namespace std;

#include "Vehicle.h"
#include "Asset.h"

#include "Train.h"
#include "FreightTrain.h"

int main()
{
    ofstream o_file;
    o_file.open ("comp20080-autumn2019-Asst8-output.txt");

    int i, ip_data[14];
    ifstream i_file;
    i_file.open("comp20080-autumn2019-Asst8-data.txt");
    if ( !i_file ) {return -1;}
    for (i=0; i_file >> ip_data[i]; i++) {}

    Train T1(ip_data[0], ip_data[1], ip_data[2]);
    FreightTrain F1(ip_data[3], ip_data[4], ip_data[5]);
    FreightTrain F2(ip_data[6], ip_data[7], ip_data[8]);

    T1.print_details();
    F1.print_details();
    F2.print_details();

    T1.register_vehicle();
    F1.register_vehicle();
    F2.register_vehicle();

    T1.set_locomotives(ip_data[9]);
    F1.set_locomotives(ip_data[10]);
    F2.set_locomotives(ip_data[11]);

    F1.set_wagons(ip_data[12]);
    F2.set_wagons(ip_data[13]);

    T1.depreciateAsset();
    F1.depreciateAsset();
    F2.depreciateAsset();

    cout << "---VALUES READ IN FROM FILE---\n\n";

    T1.print_details();
    F1.print_details();
    F2.print_details();

    o_file << "The number of wagons is: " << F1+F2;

    o_file.close();
    i_file.close();

}
