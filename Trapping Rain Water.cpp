class Solution {
public:
    int trap(vector<int>& height) {
        stack<int>st;
        int water = 0;

        for(int i = 0 ; i<height.size() ; i++){
            while(!st.empty() && height[st.top()] <= height[i]){
                int nge = i;
                int flag = 0;
                int nse;
                if(height[st.top()] <height[st.top() + 1]){
                    nse = st.top();

                }
                else{
                    nse = st.top() + 1;
                    flag = 1;
                }
                water += (nge- st.top() -1) + (height[st.top()] - height[nse] - flag);
                st.pop();
            }
            st.push(i);
        }
        return water;
    }
};
