#include<bits/stdc++.h>
using namespace std;
int RemoveDup(vector<int>& nums){
    if(nums.empty()) return 0;
    int i=0;
    for(int j=1; j<nums.size(); i++){
        if(nums[i]!=nums[j]){
            i++;
            nums[i]=nums[j];
        }
    }
    return i+1;
}
int main(){
    vector<int> arr={1,1,2,3,4,4,5};
    int ans=RemoveDup(arr);
    cout<<ans<<endl;
    return 0;
}