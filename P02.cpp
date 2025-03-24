#include <iostream>
using namespace std;

int main() {
    string text = "In the quiet strength of a single step mountains learn to move";
    string reversed_text = text;
    reverse(reversed_text.begin(), reversed_text.end());
    cout << "Reversed Text: " << reversed_text << endl;

    int vowels = 0, consonants = 0;
    string vowel_chars = "aeiouAEIOU";

    for (char ch : text) {
        if (isalpha(ch)) {
            if (vowel_chars.find(ch) != string::npos)
                vowels++;
            else
                consonants++;
        }
    }
    cout << "Vowels: " << vowels << ", Consonants: " << consonants << endl;

    string upper_text = text, lower_text = text;
    transform(upper_text.begin(), upper_text.end(), upper_text.begin(), ::toupper);
    transform(lower_text.begin(), lower_text.end(), lower_text.begin(), ::tolower);

    cout << "Uppercase: " << upper_text << endl;
    cout << "Lowercase: " << lower_text << endl;

    return 0;
}