class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int siz = operations.size();
        int x = 0;
        for(int i =0;i<siz;i++){
            if((operations[i] == "++X")||(operations[i] == "X++")){
                x++;
            }
            else{
                x--;
            }
        }
        return x;
    }
};
// Instead of checking if the operation is x++, ++x, x-- or --x
// we can just check the middle character.
// First of all as you read the question you observe you just have to see if its incrementing "++X , X++" or decrementing "--X , X--".
// So to find what operation we have to do is just check if its "+" in the middle or "-".

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for (auto op : operations) 
            x = op[1] == '-'? x - 1 : x + 1;
        return x;
    }
};