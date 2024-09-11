class Solution {
public:
    int maxCoins(vector<int>& piles) {
        
        sort(piles.begin(),piles.end());

        int res=0;
        int n = piles.size();
        int val = n/3;
        int cnt=0;
        for(int i=n-2;i>=0;i-=2){
            if(cnt==val){
                break;
            }

            res+=piles[i];
            cnt++;
        }
        return res;

    }
};