/*
 * 19. Remove Nth Node From End of List
 * https://leetcode.com/problems/remove-nth-node-from-end-of-list/
 * Difficulty: Medium | Pattern: Linked List (fast/slow pointers)
 * Status: Solved | Solved without outside help: Yes
 *
 * Problem (in my own words):
 * Remove the nth node counting backward from the end of a singly linked list, then return the 
 * possibly updated head.
 *
 * Brute:   Time O(2n)  Space O(1)
 *   Idea: First count the total number of nodes, then find the position of the node to be removed.
 *  Traverse the list again and reach the previous node; change its next pounter to skip the removal node. Watch for n == length, since node to remove would be head.
 *
 * Optimal: Time O(n)  Space O(1)
 *   Idea: Use a dummy/temp node before head and start fast and slow at the dummy. Slow will end off before the target so we can unlink and delete.
 *
 * Comparison with other solutions:
 *  They both have the same asymptotic complexity, but the two-pointer  avoids the list length count first and removes the special
 *  case for deleting head. So just a clean up that avoids manual allocation.
 *
 * Takeaways:
 * To delete a node, you find the previous one. Still needed help so next linked list I hopefully solve on my own.
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
    if (head == nullptr || head->next == nullptr) return nullptr;

    int cnt = 0;
    ListNode* temp = head;

    while (temp) {
        temp = temp->next;
        cnt++;
    }

    if (n == cnt) {
        ListNode* delNode = head;
        head = head->next;
        delete delNode;

        return head;
    }
    int x = cnt - n;
    temp = head;

    while (--x) {
        temp = temp->next;
    }

    ListNode* delNode = temp->next;
    temp->next = temp->next->next;
    delete delNode;

    return head;
}

// ---------- Optimal ----------
ListNode* optimal(ListNode* head, int n) {
    ListNode* dummyNode = new ListNode(-1);
    dummyNode->next = head;
    ListNode* fast = dummyNode;
    ListNode* slow = dummyNode;

    while (n--) fast = fast->next;

    if (fast == nullptr) {
        ListNode* newNode = head->next;
        delete head;
        delete dummyNode;
        return newNode;
    }

    while (fast->next != nullptr) {
        fast = fast->next;
        slow = slow->next;
    }

    ListNode* delNode = slow->next;
    slow->next = slow->next->next;
    delete delNode;
    ListNode* newHead = dummyNode->next;
    delete dummyNode;

    return newHead;
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
