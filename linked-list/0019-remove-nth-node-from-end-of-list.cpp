/*
 * 19. Remove Nth Node From End of List
 * https://leetcode.com/problems/remove-nth-node-from-end-of-list/
 * Difficulty: Medium | Pattern: Linked List (fast/slow pointers)
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
ListNode* brute(ListNode* head, int n) {
    // TODO
    return nullptr;
}

// ---------- Better ----------
ListNode* better(ListNode* head, int n) {
    // TODO
    return nullptr;
}

// ---------- Optimal ----------
ListNode* optimal(ListNode* head, int n) {
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
    print(optimal(build({1, 2, 3, 4, 5}), 2));
    cout << "(expected: 1 2 3 5)\n";
}
