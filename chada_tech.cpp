//LUKAS LABRIE
//MODULE 3 PROJECT 1 CHADA TECH

#include <iostream>
#include <string>

using namespace std;

// Make sure numbers look nice and tidy with two digits
string formatAsTwoDigits(int number) {
    string result = to_string(number);
    if (result.length() < 2) {
        result = "0" + result; // Slap a zero in front
    }
    return result;

    }

// Need some stars for the menu?
string repeatStar(int count) {
    string stars = "";
    for (int i = 0; i < count; i++) {
        stars += "*"; // Stars all in a row
    }
    return stars;
}

// 24-hour format
string to24HourTime(int hours, int minutes, int seconds) {
    // Combine the hours, minutes, and seconds with colons
    return formatAsTwoDigits(hours) + ":" + formatAsTwoDigits(minutes) + ":" + formatAsTwoDigits(seconds);
}

// 12-hour format
string to12HourTime(int hours, int minutes, int seconds) {
    string period = hours >= 12 ? "PM" : "AM";
    hours = hours % 12;
    if (hours == 0) hours = 12; // Midnight or noon? It's 12!
    // Stitch it together with a space before AM/PM
    return formatAsTwoDigits(hours) + ":" + formatAsTwoDigits(minutes) + ":" + formatAsTwoDigits(seconds) + " " + period;
}

// Show the user what they can do
void printMenu() {
    // Fancy menu header
    cout << repeatStar(10) + " MENU " + repeatStar(10) << "\n";
    cout << "1. Add one second\n";
    cout << "2. Add one minute\n";
    cout << "3. Add one hour\n";
    cout << "4. Display 12-hour time format\n";
    cout << "5. Display 24-hour time format\n";
    cout << "6. Quit\n";

        // And a fancy footer
    cout << repeatStar(28) << "\n";
}

// What does the user want to do? 
int processMenuChoice() {
    int choice;
    cout << "Enter your choice: ";
    cin >> choice;
    return choice;
}