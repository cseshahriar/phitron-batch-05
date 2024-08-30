#include <bits/stdc++.h>
using namespace std;

string to_lowercase(string& str) {
    string result = str;
    for (char& c : result) {
        if (c >= 'A' && c <= 'Z') {
            c += ('a' - 'A');  // to lowercase
        }
    }
    return result;
}

void max_frequent_word(const string& sentence) {
    map<string, int> word_count;  // store lowe case word counts
    map<string, string> original_words;  // store original case of the word
    stringstream ss(sentence);
    string word;

    int max_count = 0;
    string most_frequent_word;
    int first_occurrence = -1;
    int position = 0;

    while (ss >> word) {
        string lower_word = to_lowercase(word);

        // store original word count
        if (word_count.find(lower_word) == word_count.end()) {
            original_words[lower_word] = word;
        }

        // word count
        word_count[lower_word]++;

        // if it is a tie
        if (word_count[lower_word] > max_count ||
            (word_count[lower_word] == max_count && position < first_occurrence)) {
            max_count = word_count[lower_word];
            most_frequent_word = lower_word;
            first_occurrence = position;
        }

        position++;
    }
    cout << original_words[most_frequent_word] << " " << max_count << endl;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string sentence;
        getline(cin, sentence);
        max_frequent_word(sentence);
    }

    return 0;
}
