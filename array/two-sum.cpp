#include<bits/stdc++.h>
uisng namespace std;
vector<int> twoSum(vector<int>&nums, int target){
    unordered_map<int, int>mp;
    for(int i=0; i<nums.size(); i++){
        int c=target-nums[i];
        if(mp.find(c)!=mp.end()){
            return {mp[c], i};
        }
        mp[nums[i]]=i;
    }
    return {}
}
int main(){
    int n;
    cin>>n;
    vector<int> nums;
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    int target;
    cin>>target;
    vector<int> ans=twoSum(nums, target);
    cout<<ans[0]<<" "<<ans[1]<<endl;
}