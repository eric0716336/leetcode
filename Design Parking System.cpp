class ParkingSystem {
    int values[3];
public:
    ParkingSystem(int big, int medium, int small) {
        values[0]=big;
        values[1]=medium;
        values[2]=small;
    }
    
    bool addCar(int carType) {
        if(values[carType-1]>0){
            values[carType-1]--;
            return true;
        }
        else{
            return false;
        }
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
