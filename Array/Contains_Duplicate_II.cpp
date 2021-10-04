class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
cin.tie(NULL);
unordered_map<int,int> m;
for(int i=0;i<nums.size();i++)
{
if(m.find(nums[i]) == m.end())
{
m[nums[i]] = i;
}
else if(m.find(nums[i]) != m.end())
{
if(i-m[nums[i]] <= k)
{
return true;
break;
}
m[nums[i]] = i;
}

    }
    return false;
        
    }
};