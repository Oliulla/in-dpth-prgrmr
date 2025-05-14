#include<iostream>
#include<string>
using namespace std;

class Car {
    string brand;
    int year;

public:
   Car(string b, int y) {
        brand = b;
        year = y;
   }

   void display() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
   }
};

int main(void) {
    Car car1("Hayabusa", 2023);
    car1.display();
}