#include <iostream>
using namespace std;
class Student {
public:
    string name = "Mansi";   
    string batch = "ENTC-B1";  
    int prn = 82;
 void displayInfo(){
cout << "STUDENT DETAILS: " <<endl<< "Name: "<< name <<endl<<"Class: " << batch <<endl<<"PRN: " << prn <<endl;
    }
};

int main(){
    Student myself;
    myself.displayInfo();
    return 0;
}