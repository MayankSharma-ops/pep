#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *t1 = list1;
        ListNode *t2 = list2;
        ListNode *dummy = new ListNode(0);
        ListNode *temp = dummy;

        while(t1!=NULL && t2!=NULL){
            if(t1->val<t2->val){
                temp->next = t1;
                temp = t1;
                t1 = t1->next;
            }
            else{
                temp ->next = t2;
                temp = t2;
                t2= t2->next;
            }
        }

        if(t1){
            temp->next = t1;
        }else{
            temp->next = t2;
        }
        
        return dummy->next;
    }
};
int main() {
    // Create first linked list: 1 -> 2 -> 4
    ListNode* list1 = new ListNode(1);
    list1->next = new ListNode(2);
    list1->next->next = new ListNode(4);

    // Create second linked list: 1 -> 3 -> 4
    ListNode* list2 = new ListNode(1);
    list2->next = new ListNode(3);
    list2->next->next = new ListNode(4);

    Solution solution;
    ListNode* mergedHead = solution.mergeTwoLists(list1, list2);

    // Print the merged linked list
    ListNode* current = mergedHead;
    while (current != nullptr) {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;

    return 0;
}
