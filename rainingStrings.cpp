#include <iostream>

using namespace std;

int main() {
    string *business_name;

    cout << "Enter a business name: \n";
    cin >> *business_name;

    bool flag = true;
    string choice;
    cout << "Would you like to enter another business?" << endl;
    if(choice == "y") {
    while(flag == true) {
        cout << "Enter a business name: \n";
        cin >> *business_name;
    }
    } else if(choice == "n") {
        flag = false;
    }

    return 0;
}