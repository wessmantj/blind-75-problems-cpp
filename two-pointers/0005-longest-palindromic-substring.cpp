/*
 * 5. Longest Palindromic Substring
 * https://leetcode.com/problems/longest-palindromic-substring/
 * Difficulty: Medium | Pattern: Two Pointers (expand around center)
 * Status: Solved | Solved without outside help: No
 *
 * Problem (in my own words):
 * In a given input string, find a substring that 1) each mirrored char is the same 2) odd or even
 *
 * Brute:   Time O(n^3)  Space O(1)
 *   Idea: Use three nested loops, first pass is start, second pass is end of window, and third pass checks all internal char
 *
 * Better:  Time O(n^2)  Space O(n^2 * n)
 *   Idea: Traverse over all substrings and check if each is a palindrome. Since there are n^2
 *  substrings and checking a substring is constant, total is O(n^2)
 *
 * Optimal: Time O(n^2)  Space O(1)
 *   Idea: Since every palindrome mirrors around a center, we no longer check every substring, we just expand with two pointers while the characters match. Check for both odd and even length palindromes.
 *
 * Comparison with other solutions:
 * This solution improves time complexity and space; it also utilizes a different approach compared to the first two.
 *
 * Takeaways:
 *  Using two pointers can also move outward, not just inward or forward as previously demonstrated.
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// ---------- Brute ----------
bool check(string &s, int i, int j) {
    while (i < j) {
        if(s[i] != s[j]) {
            return false;
        }
        i++;
        j++;
    }
    return true;
}

string brute(string s) {
    int n = s.size();
    int start = 0;
    int maxLength = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (check(s, i, j)) {
                if(j - i + 1 > maxLength) {
                    maxLength = j - i + 1;
                    start = i;
                }
            }
        }
    }
    return s.substr(start, maxLength);
}

// ---------- Better ----------
string better(string s) {
    int n = s.size();
    vector<string> substring;
    for(int i=0; i<n; i++){
        string temp = "";
        for(int j=i; j<n; j++){
            temp += s[j];
            substring.push_back(temp);
        }
    }
    int max_len = 0;
    string finalans = substring[0];
    int m = substring.size();
    for(int i=0; i<m; i++){
        int s = substring[i].size();
        if(check(substring[i], 0, s-1)){
            if(s > max_len){
                max_len = s;
                finalans = substring[i];
            }
        }       
    }
    return finalans;
}



// ---------- Optimal ----------
string optimal(string s) {
    // empty string handling
    if (s.empty()) {
        return "";
    }
    // length of string
    int n = s.length();
    // result var
    string res = "";

    // loop the string 
    for (int i = 0; i < n; i++) {
    // start and end pointers if odd palindrome
        int start = i;
        int end = i;
        while (start >= 0 && end < n && s[start] == s[end]) {
            start--;
            end++;
        } 
        // store temp and compare it to res
        string temp = s.substr(start + 1, end - start - 1);
        if (temp.size() > res.size()) res = temp;

        // start and end pointers if even palindrome
        start = i;
        end = i + 1;
        while (start >= 0 && end < n && s[start] == s[end]) {
            start--;
            end++;
        }
        // store temp and compare it to res
        temp = s.substr(start + 1, end - start - 1);
        if (temp.size() > res.size()) res = temp;

    }
    return res;
}

int main() {
    // Swap optimal for brute / better to try the other approaches.
    cout << optimal("babad") << " (expected: bab or aba)\n";
    cout << better("babad") << " (expected: bab or aba)\n";
    cout << brute("babad") << " (expected: bab or aba)\n";
}
