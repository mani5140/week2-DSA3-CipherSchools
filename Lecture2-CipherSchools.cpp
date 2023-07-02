// Merge the intervals


//#include <bits/stdc++.h>
// using namespace std;

// vector<vector<int>> merge(vector<vector<int>>& intervals) {
//         sort(intervals.begin(),intervals.end());
//         vector<vector<int>> ans;
//         vector<int> temp = intervals[0];
//         for(int i=1; i<intervals.size(); i++){
//             vector<int> temp1 = intervals[i];
//             if(temp[1] >= temp1[0] ){
//                 temp[1] = max(temp[1],temp1[1]);
//             }
//             else{
//                 ans.push_back(temp);
//                 temp = temp1;
//             }
            
//         }
//         ans.push_back(temp);
//         return ans;
//     }

// int main(){
//     vector<vector<int>> arr = {{1,3},{2,6},{8,10},{15,18}};
//     vector<vector<int>> ans = merge(arr);
//     for(int i=0; i<ans.size(); i++){
//         cout<< ans[i][0] << ","<< ans[i][1] << endl;
//     }
// }



// Top K frequent elements


#include <bits/stdc++.h>
using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        priority_queue<pair<int,int>> pq;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        vector<int> ans;
        for(auto &i : mp){
            pq.push({i.second,i.first});
        }
        while(k--){
            pair<int,int> temp = pq.top();
            ans.push_back(temp.second);
            pq.pop();
        }
        
        return ans;
    }
int main(){
    vector<int> nums = {1,1,1,2,2,3};
    vector<int> ans = topKFrequent(nums,2);
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << endl;
    }
}