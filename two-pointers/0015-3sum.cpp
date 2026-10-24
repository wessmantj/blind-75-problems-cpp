/*
 * 15. 3Sum
 * https://leetcode.com/problems/3sum/
 * Difficulty: Medium | Pattern: Two Pointers
 * Status: Solved | Solved without outside help: No
 *
 * Problem (in my own words):
 * The step up from twoSum problem. To break it down, we can say the following: we are returning ALL triplet, returning values not indices, and the 
 * target is now always 0, not given.
 *
 * Brute:   Time O(n^3)  Space O(n)
 *   Idea: Use 3 nested loops to check for all 3 elements, sort the array, and insert previous elements into a set.
 *
 * Better:  Time O(n^2)  Space O(n)
 *   Idea: Two nested loops, utilizing two pointers.
 *
 * Optimal: Time O(n^2)  Space O(1)
 *   Idea: Get rid of set to take down space.
 *
 * Comparison with other solutions:
 *  We brought it down from 3 nested for loops to a single loop + two pointers to reach targets without set.
 *
 * Takeaways:
 *  This was a hard problem IMO. I would say that realizing two pointer was easiest, but figuring out the conditionals really challenged me so continuing these 
 * will help with that.
 */

#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;

// ---------- Brute ----------
vector<vector<int>> brute(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    set<vector<int>> set;
    vector<vector<int>> output;

    for (int i = 0; i < n-2; i++) {
        for (int j = i+1; j < n-1; j++) { // starts after i
            for (int k = j+1; k < n; k++) { // starts after j
                if (nums[i] + nums[j] + nums[k] == 0) {
                    set.insert({nums[i], nums[j], nums[k]});
                }
            } 
        }
    }
    for(auto it : set) {
        output.push_back(it);
    }
    return output;
}

// ---------- Better ----------
vector<vector<int>> better(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    set<vector<int>> set;
    vector<vector<int>> output;
    for(int i=0; i<n-2; i++){
        int l = i+1, r = n-1;
        while(l < r){ // two pointer
            if(nums[i] + nums[l] + nums[r] < 0){ 
                l++;
            }
            else if(nums[i] + nums[l] + nums[r] > 0){
                r--;
            }
            else{
                set.insert({nums[i], nums[l], nums[r]});
                l++;
                r--;
            }
        }
    }
    for(auto it : set){
        output.push_back(it);
    }
    return output;
}

// ---------- Optimal ----------
vector<vector<int>> optimal(vector<int>& nums) {
    int n = nums.size(); 
    sort(nums.begin(), nums.end()); // sort array; smallest to largest output
    set<vector<int>> set;


    // iterate first time, appending 
    for (int i = 1; i < n-1; i++) {
        int l = i - 1;
        int r = i + 1;
        while (l > -1 && r <= n -1) {
            int total = nums[l] + nums[r] + nums[i];
            if (total == 0) {
                set.insert({nums[l], nums[r], nums[i]});
                l--;
                r++;
            }
            else if (total > 0) {
                l--;
            }
            else {
                r++;
            }
        }

    }

    vector<vector<int>> output(set.begin(), set.end());
    return output;
}

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    for (auto& t : optimal(nums)) {
        cout << "[ ";
        for (int x : t) cout << x << ' ';
        cout << "] ";
    }
    cout << "(expected: [ -1 -1 2 ] [ -1 0 1 ])\n";
}
