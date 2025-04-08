#include <iostream>
#include <ctime>

using namespace std;

int main() {
    // Define birth date (Year, Month, Day)
    int birthYear, birthMonth, birthDay;
    
    // Get current date
    time_t now = time(0);
    tm *ltm = localtime(&now);

    // Input birth date
    cout << "Enter your birth year: ";
    cin >> birthYear;
    cout << "Enter your birth month (1-12): ";
    cin >> birthMonth;
    cout << "Enter your birth day (1-31): ";
    cin >> birthDay;

    // Calculate age
    int age = ltm->tm_year + 1900 - birthYear;
    
    // Check if birthday has passed this year
    if (ltm->tm_mon + 1 < birthMonth || (ltm->tm_mon + 1 == birthMonth && ltm->tm_mday < birthDay)) {
        age--;
    }

    cout << "Your age is: " << age << " years." << endl;

    return 0;
}
