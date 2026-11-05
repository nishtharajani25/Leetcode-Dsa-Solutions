<! BRUTE APPROACH !>

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>s;
        for(int val : nums){
            s.insert(val);
        }

        int k = s.size();
        int j = 0;
        
        for(int val : s){
            nums[j++] = val;
        }

        return k;
    }
};

<! OPTIMAL APPROACH !>
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for(int j=1;j<nums.size();j++){
            if(nums[i]!=nums[j]){
                i++;
                nums[i] = nums[j];
            }
        }
    return i+1;
    }
};
   
