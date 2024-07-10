#include <iostream>
using namespace std;

int main() {
    int choice;
    int totalAmount = 0;
    cout << "Welcome to the Pizza Shop!" << endl;
    cout << "1. Margherita Pizza - Rs.99" << endl;
    cout << "2. Pepperoni Pizza - Rs.199" << endl;
    cout << "3. Vegetarian Pizza - Rs.99" << endl;
    cout << "4. Hawaiian Pizza - Rs.199" << endl;
    cout << "5. Exit" << endl;
    do {
        cout << "Enter your choice (1-5): ";
        cin >> choice;
        switch(choice) {
            case 1:
                totalAmount += 99;
                break;
            case 2:
                totalAmount += 199;
                break;
            case 3:
                totalAmount += 99;
                break;
            case 4:
                totalAmount += 199;
                break;
            case 5:
                cout << "Thank you for your order!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while(choice != 5);

    cout << "Total amount: Rs" << totalAmount << endl;

    return 0;
}

