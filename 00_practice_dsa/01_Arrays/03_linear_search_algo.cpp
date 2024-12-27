#include<iostream>
using namespace std;
// LINEAR SEARCH : FIND THE TARGET VALUE IN AN ARRAY
int linear_search(int arr[],int size,int target){
    for (int i = 0; i < size; i++)
    {
        if (target==arr[i])
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int linearS_arr[]={1,4,5,6,83,9},size,target;
    bool find=true; 
    size = sizeof(linearS_arr)/sizeof(int);// This is a way o finding size of an array in c++

    cout<<"Enter value to find in an array: ";
    cin>>target;
    
    cout<<linear_search(linearS_arr,size,target)<<endl;
    return 0;
}