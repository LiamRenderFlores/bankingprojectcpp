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
    // Unique transaction ID
    int id;

    // Amount of money
    double amount;

    // Type of transaction
    std::string type;

    // Constructor
    Transaction(double amount, std::string type, int id) : amount(amount), type(type), id(id) {}
};

// Node for TransactionList
class Node {
public:
    // Transaction object
    Transaction transaction;

    // Pointer to next node
    Node* next;

    // Constructor
    Node(const Transaction& transaction) : transaction(transaction), next(nullptr){}
};

// Class for Transaction List
class TransactionList {
    // Head pointer in Linked List
    Node* head;

    // Constructor
    TransactionList() : head(nullptr) {}

    // Function to add transactions to the list
    void addTransaction(const Transaction& transaction) {
        Node* newNode = new Node(transaction);
        newNode->next = head;
        head = newNode;
    }

    // Function to delete a transaction from the list
    void deleteTransaction(int id) {
        Node* current = head;
        Node* previous = nullptr;

        while (current != nullptr) {
            if (current->transaction.id == id) {
                if (previous == nullptr) {
                    head = current->next;
                }
                else {
                    previous->next = current->next;
                }
                delete current;
                return;
            }
            previous = current;
            current = current->next;
        }
    }
    // Function to search for a single transaction by ID
    Transaction* searchTransactions(int id) {
        Node* current = head;

        while (current != nullptr) {
            if (current->transaction.id == id) {
                return &(current->transaction);
            }
            current = current->next;
        }
        return nullptr;
    }

    // Function to update a transaction
    void updateTransaction(int id, double amount, std::string type) {
        Node* current = head;

        while (current != nullptr) {
            if (current->transaction.id == id) {
                current->transaction.amount = amount;
                current->transaction.type = type;
                return;
            }
            current = current->next;
        }
    }

    // Function to display all transactions
    void displayTransactions() {
        Node* current = head;

        while (current != nullptr) {
            std::cout << "Transaction ID: " << current->transaction.id << "Type: " << current->transaction.type << "Amount: " << current->transaction.amount << "\n";
            current = current->next;
        }
    }
};


// Class for calculating interest
class InterestCalculation {
// Private for encapsulation
private:
   // Annual interest rate
   double annualInterestRate;

public:
    // Interest earned for a period
    double interestEarned;

    // Function to get the interest rate from private (encapsulation)
    double getAnnualInterestRate() const {
        return annualInterestRate;
    }

    // Constructor
    InterestCalculation(double annualInterestRate, double interestEarned) : annualInterestRate(annualInterestRate), interestEarned(interestEarned) {}

    // Function to calculate interest
    double calculateInterest(double balance) {
        // Calculates only interest earned
        return interestEarned = balance * (annualInterestRate);
        balance += interestEarned;
    }
};

class OverdraftProtection {
// Private for encapsulation
private:
    // Overdraft Limit
    double overdraftLimit;

public:

    // Constructor
    OverdraftProtection(double overdraftLimit) : overdraftLimit(overdraftLimit) {}

    // Function to get the overdraft limit from private (encapsulation)
    double getOverdraftLimit() const {
        return overdraftLimit;
    }

    // Function to check if a withdraw would cause an overdraft
    bool checkOverdraft(double balance, double amount) {
        return (balance - amount >= -overdraftLimit);
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
