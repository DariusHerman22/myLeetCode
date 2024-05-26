// Question 412: Fizz Buzz
// Topic: Math, String, Simulation
// Difficulty: Easy

//class Solution {
//#include <vector>
//public:
//    vector<string> fizzBuzz(int n) {
//        vector<string> returnVector;
//        for (int i = 1; i <= n; i++) {
//            bool threeDivisible = i % 3 == 0;
//            bool fiveDivisible = i % 5 == 0;
//
//            if (threeDivisible == true && fiveDivisible == true) {
//                returnVector.push_back("FizzBuzz");
//            }
//            else if (threeDivisible == true && fiveDivisible == false) {
//                returnVector.push_back("Fizz");
//            }
//            else if (fiveDivisible == true && threeDivisible == false) {
//                returnVector.push_back("Buzz");
//            }
//            else {
//                returnVector.push_back(to_string(i));
//            }
//        }
//        return returnVector;
//    }
//};

// Question 1342: Number of Steps to Reduce to Zero
// Topic: Math, Bit Manipulation
// Difficulty: Easy

//class Solution {
//public:
//    int numberOfSteps(int num) {
//        //  Normal Solution (Did alone)
//             int stepCount = 0;
//             while(num != 0){
//                 if(num % 2 == 0){
//                     num /= 2;
//                     stepCount++;
//                 }else{
//                     num -= 1;
//                     stepCount++;
//                 }
//             }
//             return stepCount;
//
//
//        // Bitwise Solution (With a little help from video)
//        int stepCount = 0;
//        while (num != 0) {
//            if ((num & 1) == 0) { // (num & 1) checks to see if the bit of num and one results in zero, signaling that it's even
//                num >>= 1; // The >> shifts the bits over by 1
//            }
//            else {
//                num--;
//            }
//            stepCount++;
//        }
//        return stepCount;
//    }
//};

// Question 876: Middle of the Linked List
// Topic: Linked List, Two Pointers
// Difficulty: Easy


// // Definition for singly-linked list.
//  struct ListNode {
//      int val;
//      ListNode *next;
//      ListNode() : val(0), next(nullptr) {}
//      ListNode(int x) : val(x), next(nullptr) {}
//      ListNode(int x, ListNode *next) : val(x), next(next) {}
//  };
// 
//class Solution {
//public:
//    ListNode* middleNode(ListNode* head) {
//        int totalNodes = 0;
//        int middle = 0;
//        ListNode* temp = head;
//        while (temp->next != nullptr) {
//            temp = temp->next;
//            totalNodes++;
//        }
//
//        if ((totalNodes % 2) != 0) {
//            middle = (totalNodes / 2) + 1;
//        }
//        else {
//            middle = totalNodes / 2;
//        }
//
//        for (int i = 0; i < middle; i++) {
//            head = head->next;
//        }
//
//        return head;
//    }
//};