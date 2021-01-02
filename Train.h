class Train : public Vehicle, public Asset{
    private:
    int noOfLocomotives;

    public:
        Train(int vid, float v, int y);
        void set_locomotives(int n);
        int get_train_locomotives();
        void print_details();
        void depreciateAsset();
};
