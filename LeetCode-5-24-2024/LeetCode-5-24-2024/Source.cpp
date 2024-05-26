//Question 2235: Add Two Integers
//Topic: Math
//Difficulty: Easy

//class Solution {
//public:
//    int sum(int& num1, int& num2) {
//        return num1 + num2;
//    }
//};


//Question 2236: Root Equals Sum of Children
//Topic: Tree, Binary Tree
//Difficulty: Easy

 // Definition for a binary tree node.
//  struct TreeNode {
//      int val;
//      TreeNode *left;
//      TreeNode *right;
//      TreeNode() : val(0), left(nullptr), right(nullptr) {}
//      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  };
// 
//class Solution {
//public:
//    bool checkTree(TreeNode*& root) {
//        if (root->right->val + root->left->val == root->val) {
//            return true;
//        }
//        return false;
//    }
//};