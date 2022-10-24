class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int res =1;
        for (int i = 0; i < sentences.size(); i++)
        {
            int x =   sentences[i].size();
            int v =1;
            for (int j = 0; j < x; j++)
            {
                if (sentences[i][j] == " ")
                {
                    v++;
                }
                
            }
            res = max(res,v);
            
        }
        return res;
    }
};
// Count spaces in each sentence, and return max + 1. The benefit (comparing to a split method) is that we do not create temporary strings.
int mostWordsFound(vector<string>& sentences) {
        int res=0;
        for(auto i:sentences)
            res=max(res,(int)count(i.begin(),i.end(),' ')+1);
        return res;
    }
    // If n = number of spaces in sentence i => n + 1 = number of words in sentence i.
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int res = 0;
        for (auto const &s: sentences) {
            int n = count(s.begin(), s.end(), ' ');
            res = max(res, n + 1);
        }
        return res;
    }
};