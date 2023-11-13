
#include "lib.h"

using namespace std;

int main() {
    const int bufferSize = 100; 

    char str1[bufferSize];
    char str2[bufferSize];

    cout << "Enter the first string: ";
    cin.getline(str1, bufferSize);

    cout << "Enter the second string: ";
    cin.getline(str2, bufferSize);

    int choice;
    cout << "Choose an operation:\n";
    cout << "1. Calculate the length of a string\n";
    cout << "2. Copy a string\n";
    cout << "3. Concatenate two strings\n";
    cout << "4. Search for a character in a string\n";
    cout << "5. Search for a substring in a string\n";
    cout << "Enter your choice (1-5): ";
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "Length of the first string: " << mystrlen(str1) << endl;
        break;
    case 2:
        mystrcpy(str1, str2);
        cout << "Copied string: " << str1 << endl;
        break;
  
    }

    return 0;
}
