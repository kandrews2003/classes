#include <iostream>

using namespace std;

class car {

   public:

    string carMake;
    string carModel;
    int year;
    int mpg;


   private:

     int serialNumber;

};


int main() {

   car myCar;
   myCar.carMake = "honda";
   myCar.carModel = "civic";
   myCar.year = 2007;
   myCar.mpg = 180;

   car myCarsec;
   myCarsec = myCar;
   myCarsec.mpg = myCar.mpg * 2;
   



   cout << myCar.mpg << endl;

}
