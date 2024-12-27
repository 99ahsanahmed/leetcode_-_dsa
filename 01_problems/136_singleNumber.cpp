#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> nums = {2,2,1};
    int ans = 0;
    for(int val: nums){
        ans ^= val;
    }
    cout<<ans;
    return 0;
}