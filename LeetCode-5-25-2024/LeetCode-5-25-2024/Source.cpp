// Question 1480: Running Sum of 1d Array
// Topic: Array(vector), Prefix Sum
// Difficulty: Easy

//class Solution {
//#include <vector>
//public:
//    vector<int> runningSum(vector<int>& nums) {
//        vector<int> rs;
//        int sum;
//        rs.push_back(nums[0]);
//        for (int i = 1; i < nums.size(); i++) {
//            sum = nums[i] + rs[i - 1];
//            rs.push_back(sum);
//        }
//        return rs;
//    }
//};

//Question 1672: Richest Customer Wealth
//Topic: Array(vector), Matrix
//Difficulty: Easy

//class Solution {
//#include <vector>
//public:
//    int maximumWealth(vector<vector<int>>& accounts) {
//        int greatestWealth;
//        for (int i = 0; i < accounts.size(); i++) {
//            int sum = 0;
//            for (int j = 0; j < accounts[i].size(); j++) {
//                sum = sum + accounts[i][j];
//            }
//            if (sum >= greatestWealth) {
//                greatestWealth = sum;
//            }
//        }
//        return greatestWealth;
//    }
//};