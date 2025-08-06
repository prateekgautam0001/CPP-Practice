#include <iostream>
using namespace std;

int countVowels(const string &str) {
    int count = 0;
    for (char ch : str) {
        char lower = tolower(ch);
        if (lower == 'a' || lower == 'e' || lower == 'i' ||
            lower == 'o' || lower == 'u')
            count++;
    }
    return count;
}

int main() {
    string line = "OpenAI is amazing!";
    cout << "Vowels: " << countVowels(line);
    return 0;
}
