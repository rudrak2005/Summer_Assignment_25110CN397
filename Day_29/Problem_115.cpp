
#include <iostream>
#include <cstring>
using namespace std;

string str;

void inputString() {
    cout << "Enter a string: ";
    cin.ignore();
    getline(cin, str);
}

void findLength() {
    cout << "Length: " << str.length() << endl;
}

void reverseString() {
    string rev = str;
    int start = 0, end = rev.length() - 1;
    while (start < end) {
        swap(rev[start], rev[end]);
        start++;
        end--;
    }
    cout << "Reversed: " << rev << endl;
}

void toUpperCase() {
    string upper = str;
    for (int i = 0; i < (int)upper.length(); i++) {
        upper[i] = toupper(upper[i]);
    }
    cout << "Uppercase: " << upper << endl;
}

void toLowerCase() {
    string lower = str;
    for (int i = 0; i < (int)lower.length(); i++) {
        lower[i] = tolower(lower[i]);
    }
    cout << "Lowercase: " << lower << endl;
}

void checkPalindrome() {
    string clean;
    // remove spaces for fair palindrome check
    for (char c : str) {
        if (c != ' ') clean += tolower(c);
    }
    string rev = clean;
    int start = 0, end = rev.length() - 1;
    while (start < end) {
        swap(rev[start], rev[end]);
        start++;
        end--;
    }
    if (clean == rev) cout << "It is a Palindrome.\n";
    else cout << "It is NOT a Palindrome.\n";
}

void countVowelsConsonants() {
    int vowels = 0, consonants = 0;
    for (char c : str) {
        char lower = tolower(c);
        if (lower >= 'a' && lower <= 'z') {
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
                vowels++;
            else
                consonants++;
        }
    }
    cout << "Vowels: " << vowels << " | Consonants: " << consonants << endl;
}

void countWords() {
    int count = 0;
    bool inWord = false;
    for (char c : str) {
        if (c != ' ' && !inWord) {
            inWord = true;
            count++;
        } else if (c == ' ') {
            inWord = false;
        }
    }
    cout << "Word count: " << count << endl;
}

int main() {
    int choice;
    do {
        cout << "\n===== Menu-driven String Operations =====\n";
        cout << "1. Input String\n";
        cout << "2. Find Length\n";
        cout << "3. Reverse String\n";
        cout << "4. Convert to Uppercase\n";
        cout << "5. Convert to Lowercase\n";
        cout << "6. Check Palindrome\n";
        cout << "7. Count Vowels and Consonants\n";
        cout << "8. Count Words\n";
        cout << "9. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: inputString(); break;
            case 2: findLength(); break;
            case 3: reverseString(); break;
            case 4: toUpperCase(); break;
            case 5: toLowerCase(); break;
            case 6: checkPalindrome(); break;
            case 7: countVowelsConsonants(); break;
            case 8: countWords(); break;
            case 9: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 9);

    return 0;
}

