// Contributed by - RajatRathore123-github

// Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

/* Example :
Input: nums = [3,0,1]
Output: 2
Explanation: n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.*/

#include<bits/stdc++.h>
using namespace std;

void missingNumber(vector<int>& nums,int n){
        sort(nums.begin(),nums.end());
        int i;
        for( i = 0; i < n; i++){
            if(nums[i] != i){
                break;
            }
        }
        cout << "Missing number is : " << i << "\n";
}

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    missingNumber(nums,n);
}
