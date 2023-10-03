class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long ans=0;

        int i=0;
        int j=nums.size()-1;

        while(i<=j){
            string val;
            if(i!=j){
                val = to_string(nums[i]) + to_string(nums[j]);
            }
            else{
                val = to_string(nums[i]);
            }

            i++;
            j--;

            ans += stoi(val);
            // cout<<ans<<endl;
        }

        return ans;
    }
};