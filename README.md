## Introduction

This project provides a simple C++ implementation for merging two strings alternately, a common task in string manipulation challenges. The main functionality includes merging two strings by alternatingly appending characters from each string and removing spaces from input strings before merging. This utility can be used in various applications where string formatting and manipulation are required.

## Algorithm

### **Merge Strings Alternately**

#### Logic

- The algorithm takes two strings, `word1` and `word2`, as inputs. It removes all spaces from both strings to ensure a clean merge. Then, it alternates between the characters of each string, appending one character from `word1` and one from `word2` until all characters from both strings are used. If one string is longer, the remaining characters are appended directly to the end of the merged string.

#### Complexity Analysis

- **Time Complexity:** The overall time complexity is O(N + M), where N and M are the lengths of `word1` and `word2`, respectively, due to the single pass required to remove spaces and another to merge the strings.
- **Space Complexity:** The space complexity is O(N + M), primarily due to the storage of the merged string without spaces.

### Code Snippet

```cpp
string mergeAlternately(string word1, string word2) {
	// Edge Cases
	if (word1.empty()) { return word2; }
	if (word2.empty()) { return word1; }

	// Remove all spaces from both strings
	word1 = getStringWithoutSpaces(word1);
	word2 = getStringWithoutSpaces(word2);

	// Pre-allocated the string to the maximum needed size
	int repeats = max(word1.length(), word2.length());
	string mergedStr;
	mergedStr.reserve(repeats);

	// Alternate letters from both words and build merged string
	for (int i = 0; i < repeats; ++i) {
		if (i < word1.length()) {
			mergedStr += word1[i];
		}
		if (i < word2.length()) {
			mergedStr += word2[i];
		}
	}

	return mergedStr;
}
```

## Usage

Compile the provided C++ code and execute the binary. Input the two strings when prompted (or modify the main function to include predefined strings), and the program will output the merged string without spaces, alternating between characters from each input string.