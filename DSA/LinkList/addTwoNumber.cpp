#include <iostream>
using namespace std;

struct ListNode
{
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
      ListNode *temp = new ListNode(0);
      ListNode *ans = temp;

      int carry = 0;

      while (l1 || l2 || carry)
      {
            int sum = carry;

            if (l1)
            {
                  sum += l1->val;
                  l1 = l1->next;
            }

            if (l2)
            {
                  sum += l2->val;
                  l2 = l2->next;
            }

            carry = sum / 10;

            ans->next = new ListNode(sum % 10);
            ans = ans->next;
      }

      return temp->next;
}

int main()
{
      ListNode *l1 = new ListNode(2);
      ListNode *l2 = new ListNode(5);
      l1->next = new ListNode(4);
      l2->next = new ListNode(6);
      l1->next->next = new ListNode(3);
      l2->next->next = new ListNode(4);

      ListNode *ans = addTwoNumbers(l1, l2);

      while (ans)
      {
            cout << ans->val;
            if (ans->next)
            {
                  cout << "->";
            }
            ans = ans->next;
      }
      return 0;
}