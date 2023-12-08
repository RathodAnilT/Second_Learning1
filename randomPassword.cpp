#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to generate a random password
string generateRandomPassword(int length) {
    const string charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()-_=+";

    srand(static_cast<unsigned int>(time(0)));  // Seed for random number generation

    string password;
    for (int i = 0; i < length; ++i) {
        int randomIndex = rand() % charset.length();
        password += charset[randomIndex];
    }

    return password;
}

int main() {
    int passwordLength;

    // Get user input for password length
    cout << "Enter the length of the password: ";
    cin >> passwordLength;

    // Check if the length is valid
    if (passwordLength <= 0) {
        cerr << "Invalid password length. Please enter a positive integer." << endl;
        return 1;  // Return error code
    }

    // Generate and display the random password
    string password = generateRandomPassword(passwordLength);
    cout << "Generated Password: " << password << endl;

    return 0;  // Return success code
}
