#include <iostream>
using namespace std;

string mergeAlternately(string word1, string word2);
string getStringWithoutSpaces(string word);

int main() {
	// You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. 
	// If a string is longer than the other, append the additional letters onto the end of the merged string.
	// Return the merged string.
	
	cout << mergeAlternately("abc", "pqr");
	
	return 0;
}

string mergeAlternately(string word1, string word2) {
	// Edge Cases
	if (word1.empty()) { return word2; }
	if (word2.empty()) { return word1; }

	// Remove all spaces from both strings
	word1 = getStringWithoutSpaces(word1);
	word2 = getStringWithoutSpaces(word2);

	// Alternate letters from both words and build merged string
	string temp = "";
	int repeats = word1.length() >= word2.length() ? word1.length() : word2.length();
	for (int i = 0; i < repeats; ++i) {
		if (i < word1.length()) {
			temp += word1[i];
		}
		if (i < word2.length()) {
			temp += word2[i];
		}
	}

	return temp;
}

string getStringWithoutSpaces(string word) {
	string temp = "";
	int wordLen = word.length();

	for (int i = 0; i < wordLen; ++i) {
		if (word[i] != ' ') {
			temp += word[i];
		}
	}

	return temp;
}