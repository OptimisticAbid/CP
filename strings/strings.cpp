#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

string sortWordsByLength(const string &input)
{
    istringstream stream(input);
    vector<string> words;
    string word;

    // Split the input string into words
    while (stream >> word)
    {
        words.push_back(word);
    }

    // Sort words by length
    sort(words.begin(), words.end(), [](const string &a, const string &b)
         { return a.length() < b.length(); });

    // Combine sorted words into a single string
    string result;
    for (const auto &w : words)
    {
        result += w + " ";
    }

    // Remove the trailing space
    if (!result.empty())
    {
        result.pop_back();
    }

    return result;
}

int main()
{
    string input;

    // Prompt the user for input
    cout << "Enter a string: ";
    getline(cin, input); // Use getline to allow spaces in the input

    string output = sortWordsByLength(input);
    cout << "Output: \"" << output << "\"" << endl;

    return 0;
}
