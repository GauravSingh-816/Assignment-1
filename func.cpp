#include "func.h"
#include <iostream>
#include <string>
#include <limits>

using namespace std;

char userchoice() {
    cout << endl;
    cout << "\t\tWELCOME MENU\n";
    cout << "1 - Check Interger\n";
    cout << "2 - Modify an interger at an index\n";
    cout << "3 - Add value\n";
    cout << "4 - Remove an index\n";
    cout << "5 - Quit\n";
    cout << "Enter your choice: ";
    cout << endl;
    char user_choice;
    string menu = "12345";
    while (true) {
        cin >> user_choice;
        if (cin.fail()) {
            cin.clear();
            continue;
        }
        try {
            if (menu.find(toupper(user_choice)) == string::npos)
                throw(runtime_error("Invalid input\n"));
        }
        catch (runtime_error(except)) {
            cout << except.what() << endl;
            continue;
        }
        cin.ignore(256, '\n');
        return toupper(user_choice);
    }
}

void findindex(int arr[], int len, int n) {
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == n) {
            cout << " Value found at index: " << i << endl;
            break;
        }
        if (i == len - 1) {
            cout << " Value was not found." << endl;
        }
    }
    cout << endl;
}

void modify(int arr[], int n, int len) {
    int old = arr[n];
    int newVal = 0;
    cout << "Enter new index to modify: " << endl;
    cin >> newVal;
    arr[n] = newVal;
    cout << "The new value is " << newVal << endl;
    cout << "The old value is " << old << endl;
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";

        if ((i + 1) % 10 == 0) {
            cout << endl;
        }
    }
}

int* add(int arr[], int len, int n) {
    int* newArray = new int[len + 1];
    for (int i = 0; i < len; i++) {
        newArray[i] = arr[i];
    }
    newArray[len] = n;
    return newArray;
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";

        if ((i + 1) % 10 == 0) {
            cout << endl;
        }
    }
}

void remove(int arr[], int n, int len) {
    arr[n] = NULL;
    cout << arr[n];
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";

        if ((i + 1) % 10 == 0) {
            cout << endl;
        }
    }
}