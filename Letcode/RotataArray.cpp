// #include <iostream>
// #include <vector>
// using namespace std;

// void rotateArray(vector<int>& input) {
//     for (int i = 0; i < 2; i++) {
//         int temp = input[0];
//         for (int j = 0; j < input.size() - 1; j++) {
//             input[j] = input[j + 1];
//         }
//         input[input.size() - 1] = temp;
//     }
// }

// int main() {
//     vector<int> input = {2, 7, 11, 4, -2};

//     cout << "Original array: ";
//     for (int i = 0; i < input.size(); i++) {
//         cout << input[i] << " ";
//     }
//     cout << endl;

//     rotateArray(input);

//     cout << "Rotated array: ";
//     for (int i = 0; i < input.size(); i++) {
//         cout << input[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;

void rotateArray(vector<int> & input)
{
    for(int i=0;i<2;i++){
        int temp = input[0];
        for(int j=0;j<input.size()-1;j++){

            input[j] = input[j+1];

        }
    input[input.size()-1] = temp;
    }
}
int main()
{
    vector<int> input={4,5,67,8,3};
    cout<<"Original Array"<<endl;
    for(int i=0;i<input.size();i++)
    {
        cout<<input[i]<<" ";
    }cout<<endl;
    rotateArray(input);
    for(int i=0;i<input.size();i++)
    {
        cout<<input[i]<<" ";
    }
    return 0;
}