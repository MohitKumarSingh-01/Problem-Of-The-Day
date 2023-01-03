class Solution
{
public:
    int removeStudents(int H[], int N)
    {
        vector<int> v;

        v.push_back(0);

        for (int i = 0; i < N; i++)
        {
            if (v.back() < H[i])
            {
                v.push_back(H[i]);
            }
            else
            {
                auto it = lower_bound(v.begin(), v.end(), H[i]) - v.begin();
                v[it] = H[i];
            }
        }
        return (N - v.size() + 1);
    }
};
