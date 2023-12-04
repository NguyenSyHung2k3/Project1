#include <iostream>
#include <string>
#include <sstream>

int countWords(const std::string& text) {
    std::stringstream ss(text);
    std::string word;
    int wordCount = 0;

    while (ss >> word) {
        wordCount++;
    }

    return wordCount;
}

int main() {
    std::string inputText;
    std::getline(std::cin, inputText);

    int numberOfWords = countWords(inputText);
    std::cout << numberOfWords << std::endl;

    return 0;
}

