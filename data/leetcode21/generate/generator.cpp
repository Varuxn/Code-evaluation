#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;
// Function to generate a random word of given length
std::string generateRandomWord(int length) {
    std::string word;
    for (int i = 0; i < length; ++i) {
        word += 'a' + rand() % 26; // Random lowercase letter
    }
    return word;
}

// Function to generate a random dictionary
std::vector<std::string> generateDictionary(int dictSize, int maxWordLength) {
    std::vector<std::string> dictionary;
    for (int i = 0; i < dictSize; ++i) {
        int wordLength = 1 + rand() % maxWordLength; // Random word length between 1 and maxWordLength
        dictionary.push_back(generateRandomWord(wordLength));
    }
    return dictionary;
}

// Function to generate a random sentence
std::string generateSentence(int numWords, int maxWordLength, const std::vector<std::string>& dictionary) {
    std::string sentence;
    for (int i = 0; i < numWords; ++i) {
        int useDictionary = rand() % 2; // 50% chance to use a word from the dictionary
        if (useDictionary && !dictionary.empty()) {
            sentence += dictionary[rand() % dictionary.size()];
        } else {
            int wordLength = 1 + rand() % maxWordLength;
            sentence += generateRandomWord(wordLength);
        }
        if(rand()&1) sentence+="ing";
        else if(rand()&1) sentence+="ed";
        else if(rand()&1) sentence+="es";
        else if(rand()&1) sentence+="qwerqwe";
        if (i < numWords - 1) {
            sentence += " "; // Add space between words
        }
    }
    return sentence;
}

int main(int argc, char* argv[]) {
    int data = std::atoi(argv[1]);
    // int data=20;
    srand(static_cast<unsigned>(time(0)));

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