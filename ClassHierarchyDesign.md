Class Hierarchy Design

Base Class: Account

Attributes:
accountNumber - holds a unique number for an account
balance - holds the balance of an account

Methods:
deposit - allows money to be added to the balance of an account
withdraw - allows money to be taken from the balance of an account
display - displays the accountNumber and balance of an account

Derived Classes: SavingsAccount, CheckingAccount

SavingsAccount - 

Attributes:
withdrawLimit - holds the limit for withdraws of the SavingsAccount
interestRate - holds the interestRate for the SavingsAccount

Methods:
deposit - derived from Account, allows deposit into the SavingsAccount
withdraw - derived from Account, allows withdraw from the SavingsAccount
display - derived from Account, displays information of the SavingsAccount (accountNumber, balance, interestRate, withdrawLimit)


CheckingAccount -

Attributes:

Methods:
deposit - derived from Account, allows deposit into the CheckingAccount
withdraw - derived from Account, allows withdraw from the CheckingAccount
display - derived from Account, displays information of the CheckingAccount (accountNumber, balance)

