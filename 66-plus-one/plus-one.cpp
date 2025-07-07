class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        //initialize the save variable as 1 as we have to plush 1 first
        int save = 1;
        //move backwards
        for (int i = digits.size()-1; i>=0;i--){
            int temp = digits.at(i) + save;
            if (temp>9){
                save = temp - 9;
                digits.at(i) = temp%10;
            } else{
                digits.at(i) = temp;
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