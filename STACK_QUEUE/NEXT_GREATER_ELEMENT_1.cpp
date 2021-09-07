class Solution
{
public:
    vector<int> NGE(vector<int> v)
    {
        int n = (int)v.size();
        stack<int> st;
        vector<int> ans(n);

        st.push(n - 1);
        ans[n - 1] = -1;

        for (int i = n - 2; i >= 0; i--)
        {
            while (!st.empty() && v[i] > v[st.top()])
            {
                st.pop();
            }

            if (st.empty())
            {
                ans[i] = -1;
            }
            else
            {
                ans[i] = v[st.top()];
            }
            st.push(i);
        }
        return ans;
    }
    
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {

        vector<int> ng = NGE(nums2);

        map<int, int> mp;

        for (int i = 0; i < (nums2.size()); i++)
        {
            mp[nums2[i]] = ng[i];
        }

        vector<int> ans;
        for (int i = 0; i < (nums1.size()); i++)
        {
            ans.push_back(mp[nums1[i]]);
        }

        return ans;
    }
};
