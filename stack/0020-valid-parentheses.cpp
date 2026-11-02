/*
 * 20. Valid Parentheses
 * https://leetcode.com/problems/valid-parentheses/
 * Difficulty: Easy | Pattern: Stack
 * Status: Solved | Solved without outside help: No
 *
 * Problem (in my own words):
 * Given a string s, we need to return true if it meets these requirements: 
 *  i) open brackets are followed by closing brackets
 *  ii) closed in the correct order i.e. ([]), [{}], {}
 *  iii) closed by the same type of bracket
 *
 * Brute:   Time O(n^2)  Space O(1)
 *   Idea: We can repeatedly remove adjacent matching pairs. If the final string is empty that means it was valid. So we can keep scapping the string
 * and removing pairs; replace all occurances of (), [], {} with empty string.
 * 
 * Optimal: Time O(n)  Space O(n)
 *   Idea: We can improve the time by using a stack, as long as the stack is not false and it comea in correct order, we can pop stack. If its not in the stack we push, if the stack is empty by the end we have a valid string.
 *
 * Comparison with other solutions:
 * It was honestly harder to do the brute solution, since it required c++ functions, but moving to the stack its so much 
 * easier since we can just map the opening brackets to the closing.
 *
 * Takeaways:
 *  Using a stack can durastically improve time for match searches such as this one.
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// ---------- Brute ----------
bool brute(string s) {
    // keep removing adjacent pairs until none remain
    string prev = ""; // initialize empty string
    while(s != prev) { // while the input string still holds adjacent pair
        prev = s; 
        size_t pos;
        // find middle pair and remove
        while ((pos = s.find("()")) != string::npos) s.erase(pos, 2);
        while ((pos = s.find("[]")) != string::npos) s.erase(pos, 2);
        while ((pos = s.find("{}")) != string::npos) s.erase(pos, 2);
    }
    // if empty will return true
    return s.empty();
}


// ---------- Optimal ----------
bool optimal(string s) {
    stack<char> stk;
    int n = s.length();
    if (n <= 0 || n == 1) return false; // make sure non-empty
    for (int i = 0; i < n; i++) {
        // if top of stack matches opp of current element, pop and continue, else false
        if (stk.empty() == false && s[i] == ']' && stk.top() == '[') {
            stk.pop();
        }
        else if (stk.empty() == false && s[i] == ')' && stk.top() == '(') {
            stk.pop();
        }
        else if (stk.empty() == false && s[i] == '}' && stk.top() == '{') {
            stk.pop();
        }
        else {
            stk.push(s[i]);
        }
    }
    // valid onlty if all opening brackets were matched
    return stk.empty();
}

int main() {
    // Swap optimal for brute / better to try the other approaches.
    cout << boolalpha << optimal("()[]{}") << " (expected: true)\n";
}
