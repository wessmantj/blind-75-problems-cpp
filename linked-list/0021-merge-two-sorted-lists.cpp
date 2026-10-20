/*
 * 21. Merge Two Sorted Lists
 * https://leetcode.com/problems/merge-two-sorted-lists/
 * Difficulty: Easy | Pattern: Linked List
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
ListNode* brute(ListNode* list1, ListNode* list2) {
    // TODO
    return nullptr;
}

// ---------- Better ----------
ListNode* better(ListNode* list1, ListNode* list2) {
    // TODO
    return nullptr;
}

// ---------- Optimal ----------
ListNode* optimal(ListNode* list1, ListNode* list2) {
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
    print(optimal(build({1, 2, 4}), build({1, 3, 4})));
    cout << "(expected: 1 1 2 3 4 4)\n";
}
