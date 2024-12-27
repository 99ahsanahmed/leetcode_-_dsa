#include<iostream>
using namespace std;
int main()
{
    //SUM AND PRODUCT OF ARRAY ELEMENTS
    int arr[5]={1,2,3,4,5},sum=0,prod=1;
    for (int i = 0; i < 5; i++)
    {
        sum+=arr[i];
        prod*=arr[i];
    }
    cout<<"sum of array is :"<<sum<<endl;
    cout<<"product of array is :"<<prod<<endl;
    
    return 0;
}