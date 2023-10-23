class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int n = releaseTimes.size();
        vector<int> timeDiff(n);

        timeDiff[0] = releaseTimes[0];
        for(int i=1;i<n;i++){
            timeDiff[i] = releaseTimes[i]-releaseTimes[i-1];
        }

        vector<int> temp = timeDiff;
        sort(temp.begin(),temp.end());


        // handling case when two keys has same time and ans should have greater one
        char ans;
        int maxx = temp[n-1];
        int count=0;
        for(int i=0;i<n;i++){
            if(timeDiff[i]==maxx){
                count++;
            }
        }
        int j=0;
        vector<char> equalKey(count);
        for(int i=0;i<n;i++){
            if(timeDiff[i]==maxx){
                equalKey[j]=keysPressed[i];
                j++;
            }
        }
        vector<int> asciiCode(count);

        for(int i=0;i<count;i++){
            asciiCode[i] = int(equalKey[i]);
        }

        vector<int> temp1 = asciiCode;
        sort(temp1.begin(),temp1.end());

        int maxxAsc = temp1[count-1];

        for(int i=0;i<count;i++){
            if(maxxAsc == asciiCode[i]){
                ans = equalKey[i];
            }
        }

        return ans;

    }
};