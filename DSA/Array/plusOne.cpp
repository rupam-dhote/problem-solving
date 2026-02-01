// You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

// Increment the large integer by one and return the resulting array of digits.

#include <iostream>
#include <vector>
using namespace std;

void printArr(vector<int> digits)
{
    for (int i = 0; i < digits.size(); i++)
    {
        cout << digits[i];
    }
    cout << endl;
}

vector<int> plusOne(vector<int> digits)
{
    int i = digits.size() - 1;
    vector<int> ans;
    while (i >= 0)
    {
        if (digits[i] != 9)
        {
            digits[i] = digits[i] + 1;
            return digits;
        }
        if ((i - 1) < 0)
        {
            ans.push_back(1);
            ans.push_back(0);
            i--;
            return digits;
        }
        else
        {
            digits[i--] = 0;
        }
    }
    int k = 1;
    while (k < digits.size())
    {
        ans.push_back(digits[k++]);
    }
    return ans;
}
int main()
{
    vector<int> digits = {9, 9, 9};
    printArr(digits);
    digits = plusOne(digits);
    printArr(digits);
    return 0;
}