class FreightTrain : public Train {
    private:
        int noOfWagons;

    public:
        FreightTrain(int vid, float v, int y);
        void set_wagons(int n);
        int operator+(FreightTrain b);
        void print_details();
        void depreciateAsset();
};
