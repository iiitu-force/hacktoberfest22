class Solution {
public:
    bool squareIsWhite(string coordinates) 
    {
        int num = coordinates[0] - 'a' + coordinates[1] - '0';
        if(num & 1)
        {
            return false;
        }
        return true;
    }
};
