/*
 * 23. Merge k Sorted Lists
 * https://leetcode.com/problems/merge-k-sorted-lists/
 * Difficulty: Hard | Pattern: Heap
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

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

// ---------- Brute ----------
ListNode* brute(vector<ListNode*>& lists) {
    // TODO
    return nullptr;
}

// ---------- Better ----------
ListNode* better(vector<ListNode*>& lists) {
    // TODO
    return nullptr;
}

// ---------- Optimal ----------
ListNode* optimal(vector<ListNode*>& lists) {
    // TODO
    return nullptr;
}

ListNode* build(const vector<int>& vals) {
    ListNode dummy;
    ListNode* tail = &dummy;
    for (int v : vals) tail = tail->next = new ListNode(v);
    return dummy.next;
}

void print(ListNode* head) {
    for (; head; head = head->next) cout << head->val << ' ';
}

int main() {
    // Swap optimal for brute / better to try the other approaches.
    vector<ListNode*> lists = {build({1, 4, 5}), build({1, 3, 4}), build({2, 6})};
    print(optimal(lists));
    cout << "(expected: 1 1 2 3 4 4 5 6)\n";
}
