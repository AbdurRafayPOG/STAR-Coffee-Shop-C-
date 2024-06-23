#include <iostream>
using namespace std;
int main() {
    int item, quantity, size, customization, price, total = 0, tip, orderOption;
    char again;
    string itemName;
    while (true) {
        cout << "---------------------------------------------" << endl;
        cout << "Welcome to STAR COFFEE SHOP! Here is our menu:" << endl;
        cout << "---------------------------------------------" << endl;
        cout << "1. Espresso (Rs.750)" << endl;
        cout << "2. Caffe Latte (Rs.900)" << endl;
        cout << "3. Caffe Mocha (Rs.1000)" << endl;
        cout << "4. Cappuccino (Rs.1100)" << endl;
        cout << "5. Frappuccino (Rs.950)" << endl;
        cout << "6. Americano (Rs.800)" << endl;
        cout << "7. Caramel Macchiato (Rs.1200)" << endl;
        cout << "8. Vanilla Latte (Rs.1050)" << endl;
        cout << "9. Iced Coffee (Rs.650)" << endl;
        cout << "10. Iced Americano (Rs.780)" << endl;
        cout << "11. Iced Mocha (Rs.1060)" << endl;
        cout << "12. Hazelnut latte (Rs.845)" << endl;
        cout << "13. Green tea (Rs.500)" << endl;
        cout << "14. Irish cream latte (Rs.890)" << endl;
        cout << "15. Hot Chocolate (Rs.920)" << endl;
        cout << "Which item would you like to order? Please enter the number of the item: ";
        cin >> item;
        switch (item) {
        case 1:
            itemName = "Espresso";
            price = 750;
            break;
        case 2:
            itemName = "Caffe Latte";
            price = 900;
            break;
        case 3:
            itemName = "Caffe Mocha";
            price = 1000;
            break;
        case 4:
            itemName = "Cappuccino";
            price = 1100;
            break;
        case 5:
            itemName = "Frappuccino";
            price = 950;
            break;
        case 6:
            itemName = "Americano";
            price = 800;
            break;
        case 7:
            itemName = "Caramel Macchiato";
            price = 1200;
            break;
        case 8:
            itemName = "Vanilla Latte";
            price = 1050;
            break;
        case 9:
            itemName = "Iced Coffee";
            price = 650;
            break;
        case 10:
            itemName = "Iced Americano";
            price = 780;
            break;
        case 11:
            itemName = "Iced Mocha";
            price = 1060;
            break;
        case 12:
            itemName = "Hazelnut latte";
            price = 845;
            break;
        case 13:
            itemName = "Green tea";
            price = 500;
            break;
        case 14:
            itemName = "Irish cream latte";
            price = 890;
            break;
        case 15:
            itemName = "Hot Chocolate";
            price = 920;
            break;
        default:
            cout << "\nInvalid selection, Please try again." << endl;
            continue;
        }
        cout << "You have selected: " << itemName << " for Rs." << price << endl;
        cout << "Would you like to order a single or multiple drinks?\n1. Single\n2. Multiple\n";
        cin >> orderOption;
        if (orderOption == 1) {
            quantity = 1;
        }
        else if (orderOption == 2) {
            cout << "How many drinks would you like to order? ";
            cin >> quantity;
        }
        else {
            cout << "\nInvalid selection, Please try again." << endl;
            continue;
        }
        cout << "Select a size:" << endl;
        cout << "1. Tall" << endl;
        cout << "2. Grande" << endl;
        cout << "3. Venti" << endl;
        cin >> size;
        switch (size) {
        case 1:
            cout << "You have selected a Tall size for Rs." << price << endl;
            break;
        case 2:
            price += 112;
            cout << "You have selected a Grande size for Rs." << price << endl;
            break;
        case 3:
            price += 225;
            cout << "You have selected a Venti size for Rs." << price << endl;
            break;
        default:
            cout << "\nInvalid selection, Please try again." << endl;
            continue;
        }
        total += price * quantity;
        cout << "\nYour total is Rs." << total << endl;
        cout << "\nWould you like to customize your order? (Y/N) ";
        cin >> again;
        if (again == 'Y' || again == 'y') {
            cout << "1. Add Extra Espresso Shot (Rs.100)" << endl;
            cout << "2. Add Syrup (Rs.50)" << endl;
            cout << "3. Add Java Chips (Rs.75)" << endl;
            cout << "4. Add Whipped Cream (Rs.50)" << endl;
            cout << "5. No customization" << endl;
            cout << "Enter your choice: ";
            cin >> customization;
            switch (customization) {
            case 1:
                total += 100 * quantity;
                break;
            case 2:
                total += 50 * quantity;
                break;
            case 3:
                total += 75 * quantity;
                break;
            case 4:
                total += 50 * quantity;
                break;
            case 5:
                break;
            default:
                cout << "\nInvalid selection, Please try again." << endl;
                continue;
            }
        }
        cout << "Would you like to leave a tip? (Y/N) ";
        cin >> again;
        if (again == 'Y' || again == 'y') {
            cout << "Enter the tip amount: Rs.";
            cin >> tip;
            total += tip;
        }
        cout << "\nYour final total is Rs." << total << endl;
        cout << "\nWould you like to order again? (Y/N) ";
        cin >> again;
        if (again == 'N' || again == 'n') {
            break;
        }
    }
    cout << "\n--------------------------------------------" << endl;
    cout << "Thank you for ordering from STAR COFFEE SHOP!" << endl;
    cout << "--------------------------------------------" << endl;
    cout << "\n-----------------------" << endl;
    cout << "Credits: \n";
    cout << "Made by-\n";
    cout << "// ABDUR RAFAY //\n";
    cout << "-----------------------" << endl;
    return 0;
}