class Solution {
public:

    int lowerBound(vector<int>& arr, int x){
        int s=0;
        int e=arr.size()-1;
        int ans=arr.size()-1;
        while(s<=e){
            int mid = s+(e-s)/2;

            if(arr[mid]>=x){
                // means arr[mid] is either greater or equal to x
                ans=mid;
                e=mid-1;
            }
            else if(x>arr[mid]){
                // move right
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }

        return ans;
    }

    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        

        // Binary search and 2 pointer approach - Bottom to top approach (small to big window)
        int h = lowerBound(arr,x);
        int l=h-1;
        // cout<<h;
        // here we will expand the window [l,h] to k

        while(k--){
            if(l<0){        // it means l is negative then only increase h
                h++;
            }
            else if(h>=arr.size()){    // it means h is either last or out of bound so decrease l
                l--;
            }
            else if(x-arr[l]>arr[h]-x){
                h++;
            }
            else{
                l--;
            }
        }
        
        return vector<int>(arr.begin()+l+1,arr.begin()+h);


        // Two pointer approach - O(n-k)      - Top to bottom approach (big to small window size)

        // int l=0;
        // int h=arr.size()-1;

        // while(h-l>=k){
        //     if(x-arr[l]>arr[h]-x){
        //         l++;
        //     }
        //     else{
        //         h--;
        //     }
        // }

        // return vector<int>(arr.begin()+l,arr.begin()+h+1);
    }
};