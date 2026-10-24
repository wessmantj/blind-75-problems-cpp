/*
 * 11. Container With Most Water
 * https://leetcode.com/problems/container-with-most-water/
 * Difficulty: Medium | Pattern: Two Pointers
 * Status: Solved | Solved without outside help: No
 *
 * Problem (in my own words):
 * So here we are trying to find the max length and width across a given array. So we need to check every combination of lines to see which one (limited by its smaller side) can hold the most. 
 * 
 * 
 * Optimal: Time O(n)  Space O(1)
 *   Idea: We use a two pointer method and scan the array once from the outside in. Each step moves either the left or right pointer; one thing to notice is we move the smaller
 * pointer in situations where we are trying to find a longer width, since water can't go over the height of the smaller anyway. Compare each iteration till loop completes and return.
 *
 * Takeaways:
 * Pretty simple two pointer and got the idea right after starting the problem so no brute or better. However I know it would have been O(n^2) so we save a lot on that. 
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// ---------- Optimal ----------
int optimal(vector<int>& height) {
    int res = 0;
    int n = height.size();

    int l = 0;
    int r = n - 1;


    while (l < r) {
        int currMax = 0;

        // move left and curr max update
        if (height[l] > height[r]) {
            currMax = (r - l) * height[r];
            r--;
        }
        // move right and curr max update
        else if (height[r] > height[l]) {
            currMax = (r - l) * height[l];
            l++;
        }
        else {
            currMax = (r - l) * height[r];
            l++;
            r--;
        }

        // check temp to largest
        res = max(res, currMax);
    }

    return res;
}

int main() {
    // Swap optimal for brute / better to try the other approaches.
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << optimal(height) << " (expected: 49)\n";
}
