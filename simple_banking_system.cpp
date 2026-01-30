#include <iostream>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main() {
    double balance = 0.0;
    int choice;
    
    do {
        std::cout << "\n************************\n";    
        std::cout << "1. Check your balance\n";
        std::cout << "2. Deposit\n";
        std::cout << "3. Withdraw\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        std::cout << "\n";
        
        switch (choice) {
            case 1: 
                showBalance(balance);
                break;
                
            case 2:
                balance += deposit();
                showBalance(balance);
                break;
                
            case 3:
                balance -= withdraw(balance);
                showBalance(balance);
                break;
                
            case 4:
                std::cout << "Thanks for visiting!\n";
                break;
                
            default:
                std::cout << "Invalid choice! Please select 1-4.\n";
                break;
        }
        
    } while (choice != 4); 

    return 0;
}

void showBalance(double balance) {
    std::cout << "************************\n";
    std::cout << "Your balance is: $" << balance << "\n";
    std::cout << "************************\n";
}

double deposit() {
    double amount = 0;
    
    std::cout << "Enter the amount to deposit: $";
    std::cin >> amount;
    std::cout << "\n";
    
    if (amount > 0) {
        std::cout << "Deposit successful!\n\n";
        return amount;
    } else {
        std::cout << "Error: Amount must be greater than $0\n";
        std::cout << "Deposit cancelled.\n\n";
        return 0;
    }
}

double withdraw(double balance) {
    double amount = 0;
    
    std::cout << "Enter the amount to withdraw: $";
    std::cin >> amount;
    std::cout << "\n";
    
    if (amount <= 0) {
        std::cout << "Error: Amount must be greater than $0\n";
        std::cout << "Withdrawal cancelled.\n\n";
        return 0;
    } else if (amount > balance) {
        std::cout << "Error: Insufficient balance!\n";
        std::cout << "Available balance: $" << balance << "\n";
        std::cout << "Withdrawal cancelled.\n\n";
        return 0;
    } else {
        std::cout << "Withdrawal successful!\n\n";
        return amount;
    }
}