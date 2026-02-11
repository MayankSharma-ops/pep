#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *end = head;
        for(int i=0;i<k;i++){
            if (end==nullptr) return head;
            end=end->next;
        }

        ListNode *curr = head;
        ListNode *pre = nullptr;
        while(curr!=end){
            ListNode *forv = curr->next;
            curr->next=pre;
            pre=curr;
            curr=forv;
        }
        head->next = reverseKGroup(end,k);
        return pre;
    }
};
int main() {
    // Create linked list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    int k = 2; // Group size

    Solution solution;
    ListNode* reversedHead = solution.reverseKGroup(head, k);

    // Print reversed linked list
    ListNode* current = reversedHead;
    while (current != nullptr) {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;

    return 0;
}