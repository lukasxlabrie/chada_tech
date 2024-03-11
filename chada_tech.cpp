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