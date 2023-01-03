class Solution {
public:
 bool detectCapitalUse(string word) {
        int count =0;
        int n =word.size();
        for(int i=0;i<n;i++)
        {
            if(isupper(word[i]))
            {
                count++;
            }
        }
        if((count == word.size()) || (count == 0) || (count == 1 && isupper(word[0])))
            {
              return true; 
            }
        return false;
    }
};
