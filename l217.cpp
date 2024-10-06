/* Method 1 */

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
            for(int i =0;i<nums.size() - 1;i++){
                    if(nums[i] == nums[i+1]) return true;
                }
            return false;}
    };


/*Method 2 */

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> mp;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        map<int,int> ::iterator it = mp.begin();
        while(it != mp.end()){
            if(it -> second > 1)
                return true;
            it++;
        }
        return false;
    }
};
