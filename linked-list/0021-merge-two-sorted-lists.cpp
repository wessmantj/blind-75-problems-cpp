/*
 * 21. Merge Two Sorted Lists
 * https://leetcode.com/problems/merge-two-sorted-lists/
 * Difficulty: Easy | Pattern: Linked List
 * Status: Solved | Solved without outside help: Yes
 *
 * Problem (in my own words):
 * We need to merge two sorted linked lists, while maintaining order. One thing to also note,
 * we are not creating new nodes here, instead we are taking the smaller element of the two and pointing at it from the previous element.
 *
 * Recursive:   Time O(n + m)  Space O(n + m) where n & m are list lengths
 *   Idea: So each step we will compare the two heads, the smaller head becomes the head of the merge result and its .next points to the result of merging the rest of that
 * list with the other list. 
 *
 * Iterative:  Time O(n + m)  Space O(1)
 *   Idea: Using a dummy node, we compare heads, take the smaller one and append to tail, advance the pointer.
 *
 * Comparison of solutions & takeaway:
 *  So either way works with little difference, I would say the Iterative was my first thought,
 *  and handles the problem more cleanly so will impliement this way.
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

// ---------- Recursive Solution ----------
ListNode* recursive(ListNode* list1, ListNode* list2) {
    // base case if either is empty, return the other
    if (!list1) return list2;
    if (!list2) return list1;

    // pick the smaller head and recursively merge the rest 
    if (list1->val <= list2->val) {
        list1->next = recursive(list1->next, list2);
        return list1;
    } else {
        list2->next = recursive(list1, list2->next);
        return list2;
    }
}

// ---------- Iterative Solution ----------
ListNode* iterative(ListNode* list1, ListNode* list2) {
    // no base case since dummy handles first node
    ListNode* dummy(0);
    ListNode* tail = &dummy;

    while(list1 && list2) {
        if (list1->val <= list2->val) {
            tail->next = list1;
            list1 = list1->next;
        } else {
            tail->next = list2;
            list2 = list2->next;
        }
        tail = tail->next;
    }

    // attach remaining nodes (if any)
    tail->next = list1 ? list1 : list2; // tail->next = list1 if list1, else list2

    return dummy->next;
    
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
    print(recursive(build({1, 2, 4}), build({1, 3, 4})));
    cout << "(expected: 1 1 2 3 4 4)\n";
}
