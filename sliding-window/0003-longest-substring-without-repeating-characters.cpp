/*
 * 3. Longest Substring Without Repeating Characters
 * https://leetcode.com/problems/longest-substring-without-repeating-characters/
 * Difficulty: Medium | Pattern: Sliding Window
 * Status: Solved | Solved without outside help: Yes
 *
 * Problem (in my own words):
 * Its practically two conditions: return longest substring, no repeating characters in the substring.
 *
 * Brute:   Time O(n^2)  Space O(min(n, k)) where k is the size of the charset
 *   Idea: Create a a variable to hold the max length, will return at end. Nest loop and from i -> n count the longest
 *  substring that follows two above conditions. Once inner loop finishes, compare last length to temp length, save largest and return.
 *
 *
 * Optimal: Time O(n)  Space O(1) 
 *   Idea: Combining a sliding window and set, you can keep track of used characters and compare till a repeat is found. Once its found save the new length (if longer) and move up the start of the window. Also, maxLength is updated every step, not just when a repeat is found
 *
 * Comparison with other solutions:
 *  The improvement is O(n^2) to O(n), and its just more logical. Instead of running an internal loop for each index, 
 * you can just check the same window in a single loop.
 *
 * Takeaways:
 *  Sliding window and a set is good for checking previous values while staying O(n).
 */

#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

// ---------- Brute ----------
int brute(string s) {
    int n = s.length();
    int maxLength = 0;
    for (int i = 0; i < n; i++) {
        unordered_set<char> seen;
        for(int j = i; j < n; j++) {
            if (seen.count(s[j])) break; // repeat found, so this substring can't grow
            seen.insert(s[j]);
            maxLength = max(maxLength, j - i + 1);
        }
    }
    return maxLength;
}

// ---------- Optimal ----------
int optimal(string s) {
    // create a largest length variable; start at 0
    int maxLength = 0;
    unordered_set<char> charSet;
    int j = 0;

    // loop through string
    for (int i = 0; i < s.length(); i++) {
        while (charSet.find(s[i]) != charSet.end()) {
                charSet.erase(s[j]);
                j++;
        }
        charSet.insert(s[i]);
        maxLength = max(maxLength, i - j + 1);
    }

    return maxLength;
}

int main() {
    // Swap optimal for brute / better to try the other approaches.
    cout << optimal("abcabcbb") << " (expected: 3)\n";
    cout << brute("abcabcbb") << " (expected: 3)\n";
}
