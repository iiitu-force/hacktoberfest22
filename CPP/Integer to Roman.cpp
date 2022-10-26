class Solution {
public:
    string intToRoman(int num) {
        string ans = "";

        while(num){
            if(num >= 1000){
                ans.push_back('M');
                num -= 1000;
            }

            else if(num >= 500){
                if(num / 100 == 9){
                    ans.push_back('C');
                    ans.push_back('M');
                    num -= 900;
                }
                else{
                   ans.push_back('D');
                    num -= 500; 
                }
            }

            else if(num >= 100){
                if(num / 100 == 4){
                    ans.push_back('C');
                    ans.push_back('D');
                    num -= 400;
                }
                else{
                   ans.push_back('C');
                    num -= 100; 
                }
            }

            else if(num >= 50){
                if(num / 10 == 9){
                    ans.push_back('X');
                    ans.push_back('C');
                    num -= 90;
                }
                else{
                   ans.push_back('L');
                    num -= 50; 
                }
            }

            else if(num >= 10){
                if(num / 10 == 4){
                    ans.push_back('X');
                    ans.push_back('L');
                    num -= 40;
                }
                else if(num / 10 == 9){
                    ans.push_back('X');
                    ans.push_back('C');
                    num -= 10;
                }
                else{
                   ans.push_back('X');
                    num -= 10; 
                }
            }

            else if(num >= 5){
                if(num == 9){
                    ans.push_back('I');
                    ans.push_back('X');
                    num = 0;
                }
                else{
                   ans.push_back('V');
                    num -= 5; 
                }
            }

            else{
                if(num == 4){
                    ans.push_back('I');
                    ans.push_back('V');
                    num = 0;
                }
                else if(num == 9){
                    ans.push_back('I');
                    ans.push_back('X');
                    num = 0;
                }
                else{
                   ans.push_back('I');
                   num--; 
                }
            }
        }

        return ans;
    }
};

// Leetcode Problem - https://leetcode.com/problems/integer-to-roman/description/
