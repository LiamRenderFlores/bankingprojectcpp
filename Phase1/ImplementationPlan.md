Implementation Plan

1. Account Management
Account read will show all the information of the account if the user is authenticated and will compare the account number to the authenticated number to show only that information. 
Account create will create a new account with information provided and needs no authentication.
Account delete will delete an account if authentication is true.
2. Transaction History
Transaction update will read the balance of the account, add transaction information to stored data, and update the balance of the account.
3. User Authentication
Auth will be true if login information matches an account in stored data.
Logout will turn auth to false.
4. Operation Overloading
The system can overload the << operator to print all of the related account and transaction information. The overloaded >> operator can be used to input account and transaction information. The overloaded == operator can be used to check if the login information matches any of the stored information for the authentication functions.
