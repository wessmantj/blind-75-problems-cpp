/*
 * 1. Two Sum
 * https://leetcode.com/problems/two-sum/
 * Difficulty: Easy | Pattern: Hash Map
 * Status: Solved | Solved without outside help: No
 *
 * Problem (in my own words):
 *  Given an integer array, return the indices of two numbers that add up to a given target. Two conditionals is you cannot use
 *  the same element twice, and there is only one possible solution in given array.
 * Brute:   Time O(n^2)  Space O(1)
 *   Idea: Use two nested loops to check all pairs; outer loop selects first element, the inner loop selects the second. One thing to watch is that j doesn't count index (no repeats).
 *
 * Optimal: Time O(n)  Space O(n)
 *   Idea: Move down in time using only one pass and a hashmap. On the pass if target - current index value isn't 0, 
 *   then its valid and you return that and index. If previous condition ins't met the value is added to hashmap and loop continues.
 *
 * Comparison with other solutions:
 *  The Optimal solution uses slightly more space for way better time complexity.
 *
 * Takeaways:
 *  Hashmap is useful when searching for past elements, removed second loop/search.
 */

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>


using namespace std;

// ---------- Brute ----------
vector<int> brute(vector<int>& nums, int target) {
    int n = nums.size();
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                return {i, j};
            }
        }
    }
    return {};
}

// ---------- Optimal ----------
vector<int> optimal(vector<int>& nums, int target) {
    unordered_map<int, int> hm;
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        if (hm.count(target - nums[i]) != 0) {
            vector<int> res = {i, hm[target - nums[i]]};
            return res;
        }
        hm[nums[i]] = i;
    }
    
    return {};
}

int main() {
    // Swap optimal for brute / better to try the other approaches.
    vector<int> nums = {2, 7, 11, 15};
    for (int i : optimal(nums, 9)) cout << i << ' ';
    cout << "(expected: 0 1)\n";
    for (int i : brute(nums, 9)) cout << i << ' ';
    cout << "(expected: 0 1)\n";
}
