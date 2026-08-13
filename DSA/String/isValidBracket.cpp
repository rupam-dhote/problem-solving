// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket of the same type.

// --------------  SOLVED -----------------
#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isValidBracket(string s)
{
     if (s.size() == 1)
     {
          return false;
     }

     if (s[0] == ']' || s[0] == '}' || s[0] == ')')
     {
          return false;
     }

     stack<char> st;

     for (int i = 0; i < s.size(); i++)
     {
          if (s[i] == '(' || s[i] == '[' || s[i] == '{')
          {
               st.push(s[i]);
          }
          else
          {
               char ch = 'a';
               if (!st.empty())
                    ch = st.top();
               if (s[i] == ')' && ch == '(' || s[i] == ']' && ch == '[' || s[i] == '}' && ch == '{')
               {
                    st.pop();
               }
               else
               {
                    st.push(s[i]);
               }
          }
     }
     if (st.empty())
     {
          return true;
     }

     return false;
}

int main()
{
     string s = "([])";
     cout << isValidBracket(s);

     return 0;
}