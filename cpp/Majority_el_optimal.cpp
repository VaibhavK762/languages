#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums){
    if (nums.empty()) return -1;

    int last = nums[0];
    int count=0;
    for (int i = 0; i < nums.size() ; i++ ){
        if (nums[i]==last){
            count++;
        }
        else{
            count--;
        }
        if(count==0){
            last=nums[i];
            count=1;
        }
    }
    count=0;
    for(int i=0;i<nums.size();i++){
        if(last==nums[i]){
            count++;
        }
    }
    if(count>nums.size()/2){
        return last;
    }
    return -1;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    int result = majorityElement(nums);
    cout<< "The majority element is: ";
    cout << result << endl; 
    return 0;
}
