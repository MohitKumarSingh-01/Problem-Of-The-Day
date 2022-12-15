class Solution
{
public:
    string BalancedString(int N)
    {

        int count = N / 26;
        int rem = N % 26;
        string ans = "";

        while (count > 0)
        {
            int i = 0;
            while (i < 26)
            {
                ans.push_back('a' + i);
                i++;
            }
            count--;
        }

        if (rem % 2 == 0)
        {
            for (int i = 0; i < rem / 2; i++)
                ans.push_back('a' + i);

            for (int j = 26 - rem / 2; j < 26; j++)
                ans.push_back('a' + j);
        }
        else
        {
            int digit_sum = 0;
            int r = N;
            while (r > 0)
            {
                digit_sum += r % 10;
                r /= 10;
            }

            if (digit_sum % 2 == 0)
            {
                // first half
                for (int i = 0; i < (rem + 1) / 2; i++)
                    ans.push_back('a' + i);

                // second half
                for (int j = 26 - (rem - 1) / 2; j < 26; j++)
                    ans.push_back('a' + j);
            }
            // odd
            else
            {
                // first half
                for (int i = 0; i < (rem - 1) / 2; i++)
                    ans.push_back('a' + i);

                // second half
                for (int j = 26 - (rem + 1) / 2; j < 26; j++)
                    ans.push_back('a' + j);
            }
        }
        return ans;
    }
};
