#include <bits/stdc++.h>
using namespace std;
std::mt19937_64 rnd(std::chrono::steady_clock().now().time_since_epoch().count());

int rng(int l, int r) { // [l, r]
    return rnd() % (r - l + 1) + l;
}
// Function to generate a random word of given length
std::string generateRandomWord(int length) {
    std::string word;
    for (int i = 0; i < length; ++i) {
        word += 'a' + rnd() % 26; // Random lowercase letter
    }
    return word;
}

// Function to generate a random dictionary
std::vector<std::string> generateDictionary(int dictSize, int maxWordLength) {
    std::vector<std::string> dictionary;
    for (int i = 0; i < dictSize; ++i) {
        int wordLength = 1 + rnd() % maxWordLength; // Random word length between 1 and maxWordLength
        dictionary.push_back(generateRandomWord(wordLength));
    }
    return dictionary;
}

// Function to generate a random sentence
std::string generateSentence(int numWords, int maxWordLength, const std::vector<std::string>& dictionary) {
    std::string sentence;
    for (int i = 0; i < numWords; ++i) {
        int useDictionary = rnd() % 2; // 50% chance to use a word from the dictionary
        if (useDictionary && !dictionary.empty()) {
            sentence += dictionary[rnd() % dictionary.size()];
        } else {
            int wordLength = 1 + rnd() % maxWordLength;
            sentence += generateRandomWord(wordLength);
        }
        if(rnd()&1) sentence+="ing";
        else if(rnd()&1) sentence+="ed";
        else if(rnd()&1) sentence+="es";
        else if(rnd()&1) sentence+="qwerqwe";
        if (i < numWords - 1) {
            sentence += " "; // Add space between words
        }
    }
    return sentence;
}

int main(int argc, char* argv[]) {
    int data = std::atoi(argv[1]);
    // int data=20;

    // Parameters for data generation
    int dictSize = data;        // Number of words in the dictionary
    int maxWordLength = 50;    // Maximum length of each word
    int numWords = data;        // Number of words in the sentence
    cout<<dictSize<<' '<<numWords<<endl;
    // Generate dictionary and sentence
    std::vector<std::string> dictionary = generateDictionary(dictSize, maxWordLength);
    std::string sentence = generateSentence(numWords, maxWordLength, dictionary);

    // Output the generated data
    for (const auto& word : dictionary) {
        std::cout << word << std::endl;
    }
    std::cout << sentence << std::endl;

    return 0;
}