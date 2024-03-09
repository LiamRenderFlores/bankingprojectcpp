#include <iostream>

// Class for Account Management
class Account {
public:
    // Account Number
    int accountNumber;

    // Balance in the account
    double balance = 0;

    // Function to create an account
    virtual void createAccount() {   
    }

    // Function to delete account
    virtual void deleteAccount() {
    }

    // Function to deposit money into account
    virtual void deposit(double amount) {
    }

    // Function to withdraw money from account
    virtual void withdraw(double amount) {
    }

    // Function to display account details
    virtual void display() {
    }
};

// Class for Savings Account
class SavingsAccount: public Account {
public:
    // Interest rate for the SavingsAccount
    double interestRate;

    // Function to deposit money into the SavingsAccount
    void deposit(double amount) override {
        balance += amount;
        std::cout << "Deposited " << amount << " into savings account.\n" << "New balance: " << balance << ".\n";
    }

    // Function to withdraw money from the SavingsAccount
    void withdraw(double amount) override {
        if (balance >= amount) {
            balance -= amount;
            std::cout << "Withdrew " << amount << " from savings account.\n" << "New balance: " << balance << ".\n";
        } else {
            std::cout << "Insufficient balance.\n";
        }
    }

    // Function to display the SavingsAccount's details
    void display() override {
        std::cout << "Savings Account\n";
        std::cout << "Account Number: " << accountNumber << "\n";
        std::cout << "Balance: " << balance << "\n";
        std::cout << "Interest Rate: " << interestRate << "\n";
    }

    // Creates a SavingsAccount
    void createAccount() {
    }

    // Deletes a SavingsAccount
    void deleteAccount() {
    }
};

// Class for Checking Account
class CheckingAccount: public Account {
public:
    // Minimum balance for a CheckingAccount
    int minBalance;

    // Function to deposit money into the CheckingAccount
    void deposit(double amount) override {
        balance += amount;
        std::cout << "Deposited " << amount << " into checking account.\n" << "New balance: " << balance << ".\n";
    }

    // Function to withdraw money from the CheckingAccount
    void withdraw(double amount) override {
        if (balance >= amount) {
            balance -= amount;
            std::cout << "Withdrew " << amount << " from checking account.\n" << "New balance: " << balance << ".\n";
        } else {
            std::cout << "Insufficient balance.\n";
        }
    }

    // Function to display the CheckingAccount's details
    void display() override {
        std::cout << "Savings Account\n";
        std::cout << "Account Number: " << accountNumber << "\n";
        std::cout << "Balance: " << balance << "\n";
        std::cout << "Minimum Balance Allowed: " << minBalance << "\n";
    }

    // Creates a CheckingAccount
    void createAccount() {
    }

    // Deletes a SavingsAccount
    void deleteAccount() {
    }
};

// Class for Transaction History
class Transaction {
public:
    // Updates transaction history and balance of account
    void makeTransaction() {
    }

    // Reads and displays transaction history
    void getTransactionHistory() { 
    }
};

// Class for User Authentication
class User {
public:
    // Checks if login information matches stored information and returns true if it does
    bool authenticate() {
    }

    // Changes authenticate to false
    void logout() {  
    }
};

// Main function
int main() {
    // Create SavingsAccount
    SavingsAccount stestAccount;
    stestAccount.accountNumber = 1;
    stestAccount.interestRate = 0.06;

    // Deposit into SavingsAccount
    stestAccount.deposit(492.32);

    // Withdraw from SavingsAccount
    stestAccount.withdraw(392.13);

    // Display SavingsAccount details
    stestAccount.display();

    // Create CheckingAccount
    CheckingAccount ctestAccount;
    ctestAccount.accountNumber = 2;
    ctestAccount.minBalance = 200;

    // Deposit into CheckingAccount
    ctestAccount.deposit(293.23);

    // Withdraw from CheckingAccount
    ctestAccount.withdraw(102.37);

    // Display CheckingAccount details
    ctestAccount.display();

    return 0;
}
