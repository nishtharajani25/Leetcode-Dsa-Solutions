<! BRUTE APPROCH !>
  class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int N = nums.size();

        for (int i = 0; i <= N; i++) {
            int flag = 0;

            for (int j = 0; j < N; j++) {
                if (nums[j] == i) {
                    flag = 1;
                    break;
                }
            }

            if (flag == 0) {
                return i;
            }
        }

        return -1;
    }
};


<! BETTER APPROACH !>
  class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int N = nums.size();
        int freq[N+1]={0};
        for(int num:nums){
            freq[num]++;

        }
        for(int i =0;i<=N;i++){
            if(freq[i]==0){
                return i;
            }
        }
        return -1;
    }
};

<! OPTIMAL1 APPROACH !>
  class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int N =nums.size();
        int sum1 = (N*(N+1))/2;
        int sum2 = 0;
        for(int num :nums){
            sum2+=num;
        }
        int missingNUM = sum1-sum2;
        return missingNUM;
        
    }
};

<! OPTIMAL2 APPROACH !>
  class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xor1 =0, xor2 =0;
        for(int i =0;i<nums.size();i++){
            xor1 = xor1 ^ (i + 1); 
            xor2 = xor2 ^ nums[i]; 

        }
         return (xor1 ^ xor2);
    }
};
  
