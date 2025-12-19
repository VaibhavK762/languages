#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> nums){
    
    for (int i = 0; i < nums.size() ; i++ ){
        int count=0;
        for (int j = 0; j < nums.size() ; j++){
            if ( nums[i] == nums[j]){
                count++;
            }
        }
        if (count > nums.size()/2){
            return nums[i];
        }
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
