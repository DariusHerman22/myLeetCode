// Question 383: Ransom Note
// Topic: Hash Table, String, Counting
// Difficulty: Easy

//class Solution {
//#include <string>
//public:
//    bool canConstruct(string ransomNote, string magazine) {
//        for (char checkedLetter : ransomNote) {
//            size_t position = magazine.find(checkedLetter);
//            if (position != string::npos) {
//                magazine.erase(position, 1);
//            }
//            else {
//                return false;
//            }
//        }
//        return true;
//    }
//};

// Question 1: Two Sum
// Topic: Array(Vector), Hash Table
// Difficulty: Easy

//class Solution {
//#include <unordered_map>
//#include <vector>
//public:
//    vector<int> twoSum(vector<int>& nums, int target) {
//        // One Pass Hash Map, which is O(n)
//        //unordered_map<int, int> map;
//        //for (int i = 0; i < nums.size(); i++) {
//        //    int comp = target - nums[i];
//        //    if (map.find(comp) != map.end()) {
//        //        return { map[comp], i };
//        //    }
//        //    map[nums[i]] = i;
//        //}
//        //return {};
//
//        // Two Pass Hash Map, which is O(n). Doesn't pass all test cases
//        // unordered_map<int, int> map; //number, index
//
//        // for(int i = 0; i < nums.size(); i++){
//        //     map[nums[i]] = i;
//        // }
//
//        // for(int i = 0; i < nums.size(); i++){
//        //     int numberComplement = target - nums[i];
//        //     if(map[numberComplement] != i && map.find(numberComplement) != map.end()){
//        //         return {i, map[numberComplement]};
//        //     }
//        // }
//
//        // return {};
//
//        // Brute force approach, which is O(n^2)
//        // for(int i = 0; i < nums.size(); i++){
//        //     for(int j = i + 1; j < nums.size(); j++){
//        //         if(nums[i] + nums[j] == target){
//        //             return {i,j};
//        //         }
//        //     }
//        // }
//        // return {};
//    }
//};

// Question 9: Palindrome Number
// Topic: Math
// Difficulty: Easy

//class Solution {
//#include <string>
//public:
//    bool isPalindrome(int x) {
//
//        // Without turning the input into a string (with help from an outside source)
//        if (x < 0) {
//            return false;
//        }
//
//        long reverseNum = 0;
//        int copy = x;
//
//        while (x > 0) {
//            reverseNum = (reverseNum * 10) + (x % 10);
//            x /= 10;
//        }
//
//        return reverseNum == copy;
//
//        // Turning the input into a string
//        // string myString = to_string(x);
//        // string check = myString;
//
//        // reverse(myString.begin(),myString.end()); 
//        // if(myString != check){
//        //     return false;
//        // }
//
//        // return true;
//    }
//};
