class Vehicle {
private:
    int vehicle_id;
    bool v_registered;

public:
    Vehicle(int vid);
    void register_vehicle();
    void print_details();
    int get_vehicle_id();
    bool get_v_registered();
};
