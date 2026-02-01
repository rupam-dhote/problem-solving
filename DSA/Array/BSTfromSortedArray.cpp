// Given an integer array nums where the elements are sorted in ascending order, convert it to a height-balanced binary search tree.

#include <iostream>
#include <queue>
#include <vector>
using namespace std;
struct TreeNode
{
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode()
      {
            val = 0;
            left = nullptr;
            right = nullptr;
      }
      TreeNode(int v)
      {
            val = v;
            left = nullptr;
            right = nullptr;
      }
      TreeNode(int v, TreeNode *l, TreeNode *r)
      {
            val = v;
            left = l;
            right = r;
      }
};
TreeNode *buildBST(vector<int> &nums, int left, int right)
{
      // Base case: no elements
      if (left > right)
      {
            return nullptr;
      }

      // Middle element
      int mid = left + (right - left) / 2;

      // Create root node
      TreeNode *root = new TreeNode(nums[mid]);

      // Recursively build left and right subtrees
      root->left = buildBST(nums, left, mid - 1);
      root->right = buildBST(nums, mid + 1, right);

      return root;
}

TreeNode *sortedArrayToBST(vector<int> &nums)
{
      return buildBST(nums, 0, nums.size() - 1);
}

void print(TreeNode *root)
{
      queue<TreeNode *> q;
      q.push(root);
      q.push(NULL);

      while (!q.empty())
      {
            TreeNode *temp = q.front();
            q.pop();

            if (temp == NULL)
            {
                  cout << ",";
                  if (!q.empty())
                  {
                        q.push(NULL);
                  }
            }
            else
            {
                  cout << temp->val << " ";
                  if (temp->left)
                  {
                        q.push(temp->left);
                  }

                  if (temp->right)
                  {
                        q.push(temp->right);
                  }
            }
      }
}

int main()
{
      vector<int> nums = {-10, -3, 0, 5, 9};
      TreeNode *node = sortedArrayToBST(nums);
      print(node);
}
