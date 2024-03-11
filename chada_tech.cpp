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