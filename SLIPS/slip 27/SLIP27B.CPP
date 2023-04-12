#include<iostream>

using namespace std;

class Travels{
    private:
        int T_No;
        char Company_Name[30];
    public:
        
};

class Route:public Travels{
    private:
        int Route_id;
        char Source[30], Destination[30]; 
};

class Reservation:public Route{
    private:
        int Number_of_seats, Fare, Travel_Date;
        char Travels_Class[20];
     
};