// Maximum Product of Two Elements in an Array
#include<bits/stdc++.h>
using namespace std;

int main(){

    int maxProduct(vector<int>& nums){
        int n=nums.size();
        sort(nums.begin(),nums.end());
        
            int result=(nums[n-1]-1)*(nums[n-2]-1);
        return result;
        }

    }
