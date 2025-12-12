
### **main.cpp**
```cpp
#include <iostream>
using namespace std;

int main() {
    int choice;
    double balance = 0, amount;

    while (true) {
        cout << "\n--- Simple Bank ---\n";
        cout << "1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                if (amount > 0) balance += amount;
                else cout << "Invalid amount\n";
                break;

            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (amount > 0 && amount <= balance) balance -= amount;
                else cout << "Insufficient balance or invalid amount\n";
                break;

            case 3:
                cout << "Current Balance: " << balance << endl;
                break;

            case 4:
                return 0;

            default:
                cout << "Invalid choice\n";
        }
    }
}
