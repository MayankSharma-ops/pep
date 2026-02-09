#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        //make copies of dummy
        ListNode* temp = dummy;
        ListNode* prev = dummy;

        // move temp n steps ahead
        while(n--) {
            temp = temp->next;
        }

        // move both pointers until temp reaches the end
        while(temp->next != NULL) {
            temp = temp->next;
            prev = prev->next;
        }

        // set prev's next to skip the nth node from end
        prev->next = prev->next->next;

        return dummy->next;
    }
};
int main() {
    // Create a linked list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    Solution solution;
    int n = 2; // Remove the 2nd node from the end
    ListNode* modifiedHead = solution.removeNthFromEnd(head, n);

    // Print the modified linked list
    ListNode* current = modifiedHead;
    while (current != nullptr) {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;

    return 0;
}