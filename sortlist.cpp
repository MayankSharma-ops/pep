#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};
class Solution {
public:

    ListNode* merge(ListNode* list1 , ListNode* list2) {
        ListNode *l1 = list1;
        ListNode *l2 = list2;
        ListNode *dummy = new ListNode(0);
        ListNode *temp =dummy;
        
        while(l1!=nullptr && l2!=nullptr){
            if(l1->val < l2->val){
                temp->next = l1;
                temp = l1;
                l1=l1->next;
            }
            else{
                temp->next = l2;
                temp = l2;
                l2=l2->next;
            }
        }
        if(l1) temp->next = l1;
        else temp->next = l2;

        return dummy->next;
    };
    ListNode* sortList(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return head;

        ListNode *fast = head;
        ListNode *slow = head;
        ListNode *prev = nullptr;

        while(fast!=nullptr && fast->next!=nullptr){
            prev= slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        prev->next=nullptr;
        ListNode *l1 = sortList(head);
        ListNode *l2 = sortList(slow);

        return merge(l1,l2);
    }
};
int main() {
    // Create linked list: 4 -> 2 -> 1 -> 3
    ListNode* head = new ListNode(4);
    head->next = new ListNode(2);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(3);

    Solution solution;
    ListNode* sortedHead = solution.sortList(head);

    // Print the sorted linked list
    ListNode* current = sortedHead;
    while (current != nullptr) {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;

    return 0;
}