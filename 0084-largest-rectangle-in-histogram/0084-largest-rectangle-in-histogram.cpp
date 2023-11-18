class Solution {
public:

    vector<int> nextSmallerEle(vector<int> v){
        int n = v.size();
        vector<int> ans(n);
        stack<int> st;
        st.push(-1);    // initially -1 in the stack
        
        for(int i=n-1;i>=0;i--){
            int currEle = v[i];
            
            while(st.top()!=-1 && v[st.top()] >= currEle){
                st.pop();
            }
            
            ans[i] = st.top();
            st.push(i); // pushing indexing in the stack
        }
        return ans;
    }


    vector<int> prevSmallerElement(vector<int> v){
        int n=v.size();
        vector<int> ans(n);
        stack<int> st;

        st.push(-1);  // initially -1 in the stack

        for(int i=0;i<n;i++){
            int currEle = v[i];

            while(st.top()!=-1 && v[st.top()] >= currEle){
            st.pop();
            }

            ans[i] = st.top();
            st.push(i);
        }

        return ans;
    }

    int largestRectangleArea(vector<int>& heights) {

        // in this question we will use idea of prevSmallEle and nextSmallEle, but here we needs index and not the elements so we will modify those functions little bit.

        vector<int> next = nextSmallerEle(heights);

        for(int i=0;i<next.size();i++){     // handling if any next ele is -1 coz -1 can not be there in the array so we have handled that case
            if(next[i]==-1){
                next[i] = heights.size();
            }
        }

        vector<int> prev = prevSmallerElement(heights);

        vector<int> area(next.size());
        int maxi = INT_MIN;
        for(int i=0;i<next.size();i++){
            int width = next[i] - prev[i] -1;
            int length = heights[i];
            int currArea = width*length;
            maxi = max(currArea,maxi);
        }

        return maxi;

    }
};