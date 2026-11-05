! BRUTE APPROACH !
class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {
        int n = nums.size();
        k=k%n;

        vector<int>temp;
        for(int i =0;i<k; i++){
           temp.push_back(nums[i]);
        }
        for(int i=k; i<n;i++){
            nums[i-k]=nums[i];
        }
        for( int i=0;i<k;i++){
            nums[n-k+i]=temp[i];
        } 
    }
};

void printArray(vector<int>&nums){
    for(int val : nums){
        cout<< val << " ";
    }
    cout<<endl;
}


! OPTIMAL APPROACH !
class Solution {
private:
   void reverseArray(vector<int>&nums,int start ,int end){
     while(start<end){
        int temp = nums[start];
        nums[start]=nums[end];
        nums[end]=temp;
        start++,end--;
     }
   }
public:
   void rotateArray(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; 
        
        reverseArray(nums, 0, k - 1);
        reverseArray(nums, k, n - 1);
        reverseArray(nums, 0, n - 1);
    }
};
  
void printArray(vector<int>&nums){
    for(int val : nums){
        cout<< val << " ";
    }
    cout<<endl;
}
