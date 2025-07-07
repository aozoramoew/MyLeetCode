class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int save = 1;
        for (int i = digits.size()-1; i>=0;i--){
            int x = digits.at(i) + save;
            if (x>9){
                save = x - 9;
                digits.at(i) = x%10;
            } else{
                digits.at(i) = x;
                save = 0;
            }
            if (save>0&&i==0){
                digits.insert(digits.begin(),save);
            }
            if (save == 0){
                break;
            }
        }
        return digits;
    }
};