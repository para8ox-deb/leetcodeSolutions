class Solution {
public:
    void sortColors(vector<int>& nums) {


        // 2 pointer approach
        int index=0;
        int left=0;
        int right=nums.size()-1;

        while(index<=right){
            if(nums[index]==1){
                index++;
            }
            else if(nums[index]==0){
                swap(nums[index],nums[left]);
                left++;
                index++;
            }
            else{
                swap(nums[index],nums[right]);
                right--;
            }
        }



















        
        // Counting method

        // sort(nums.begin(),nums.end());


        // This method takes more time
        int arr[3] = {0};

        for(int i=0;i<nums.size();i++){
            arr[nums[i]]++;
        }

        nums.clear();

        // for(int i=0;i<3;i++){
        //     int n=arr[i];
        //     while(n>0){
        //         nums.push_back(i);
        //         n--;
        //     }
        // }

        //Fast approach better method - Beats 100%

        for(int i=0;i<arr[0];i++)
            nums.push_back(0);

        for(int i=0;i<arr[1];i++)
            nums.push_back(1);

        for(int i=0;i<arr[2];i++)
            nums.push_back(2);

    }
};