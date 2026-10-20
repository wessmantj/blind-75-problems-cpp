/*
 * 15. 3Sum
 * https://leetcode.com/problems/3sum/
 * Difficulty: Medium | Pattern: Two Pointers
 * Status: Solved | Solved without outside help: Yes
 *
 * Problem (in my own words):
 *
 *
 * Brute:   Time O(?)  Space O(?)
 *   Idea:
 *
 * Better:  Time O(?)  Space O(?)
 *   Idea:
 *
 * Optimal: Time O(?)  Space O(?)
 *   Idea:
 *
 * Comparison with other solutions:
 *
 *
 * Takeaways:
 *
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// ---------- Brute ----------
vector<vector<int>> brute(vector<int>& nums) {
    // TODO
    return {};
}

// ---------- Better ----------
vector<vector<int>> better(vector<int>& nums) {
    // TODO
    return {};
}

// ---------- Optimal ----------
vector<vector<int>> optimal(vector<int>& nums) {
    // TODO
    return {};
}

int main() {
    // Swap optimal for brute / better to try the other approaches.
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    for (auto& t : optimal(nums)) {
        cout << "[ ";
        for (int x : t) cout << x << ' ';
        cout << "] ";
    }
    cout << "(expected: [ -1 -1 2 ] [ -1 0 1 ])\n";
}
