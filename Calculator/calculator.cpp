// using switch

#include <iostream>
#include <cmath>  // for advanced operations
using namespace std;

int main() {
    double num1, num2, result;
    int choice;
    char continueCalc;
    
    cout << "====================================\n";
    cout << "     🧮 SIMPLE CALCULATOR          \n";
    cout << "====================================\n\n";
    
    do {
        // Display menu
        cout << "----- OPERATIONS MENU -----\n";
        cout << "1. Addition (+)\n";
        cout << "2. Subtraction (-)\n";
        cout << "3. Multiplication (*)\n";
        cout << "4. Division (/)\n";
        cout << "5. Power (^)\n";
        cout << "6. Remainder (%)\n";
        cout << "7. Exit\n";
        cout << "---------------------------\n";
        cout << "Enter your choice (1-7): ";
        cin >> choice;
        
        // If user wants to exit
        if (choice == 7) {
            cout << "\nThank you for using the calculator! Goodbye! 👋\n";
            break;
        }
        
        // Get numbers from user
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
        
        // Process calculation using switch
        switch(choice) {
            case 1:  // Addition
                result = num1 + num2;
                cout << "\n✅ " << num1 << " + " << num2 << " = " << result << "\n\n";
                break;
                
            case 2:  // Subtraction
                result = num1 - num2;
                cout << "\n✅ " << num1 << " - " << num2 << " = " << result << "\n\n";
                break;
                
            case 3:  // Multiplication
                result = num1 * num2;
                cout << "\n✅ " << num1 << " × " << num2 << " = " << result << "\n\n";
                break;
                
            case 4:  // Division
                if (num2 != 0) {
                    result = num1 / num2;
                    cout << "\n✅ " << num1 << " ÷ " << num2 << " = " << result << "\n\n";
                } else {
                    cout << "\n❌ ERROR: Cannot divide by zero!\n\n";
                }
                break;
                
            case 5:  // Power
                result = pow(num1, num2);
                cout << "\n✅ " << num1 << " ^ " << num2 << " = " << result << "\n\n";
                break;
                
            case 6:  // Remainder (only works with integers)
                if ((int)num2 != 0) {
                    int remainder = (int)num1 % (int)num2;
                    cout << "\n✅ " << (int)num1 << " % " << (int)num2 << " = " << remainder << "\n\n";
                } else {
                    cout << "\n❌ ERROR: Cannot divide by zero!\n\n";
                }
                break;
                
            default:  // Invalid choice
                cout << "\n❌ Invalid choice! Please select 1-7\n\n";
                break;
        }
        
        // Ask if user wants to continue
        if (choice >= 1 && choice <= 6) {
            cout << "Do another calculation? (y/n): ";
            cin >> continueCalc;
            cout << "\n";
        }
        
    } while (continueCalc == 'y' || continueCalc == 'Y');
    
    return 0;
}