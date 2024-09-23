#include <iostream>
using namespace std;
int main(){

struct car
{
    string carName;
    string carModel;
    int year;/* data */
};
car c1;
c1.carName = "BMW";
c1.carModel = "Xuang";
c1.year = 1969;

car c2;
c2.carName = "Toyata";
c2.carModel = "Huwei";
c2.year = 1992;

cout << c1.carName << " " << c1.carModel << " " << c1.year << "\n";
cout << c2.carName << " " << c2.carModel << " " << c2.year;




    return 0;
}