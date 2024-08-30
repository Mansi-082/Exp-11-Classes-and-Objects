#include <iostream>
using namespace std;
class Car {
public:
    string model;
    string company;
    int year = 82;
void userInput(){
    cout<<"Enter car model: ";
    cin>>model;
    cout<<"Enter company name: ";
    cin>>company;
    cout<<"Enter year of manufacturing: ";
    cin>>year;
}
void displayInfo(){
    cout << "CAR DETAILS: " << model <<" " << company <<" (" << year<<")" <<endl;
    }
};
int main(){
    Car myCar;
    myCar.userInput();
    myCar.displayInfo();
    return 0;
}