#include<iostream>
using namespace std;
int rev_array(int arr[],int size,int start,int end){
    for (int i = 0 ; i < size; i++)
    {
        if (start<end)
        {
        swap(arr[start],arr[end]);
        start++;
        end--;
        }
    }
    return 0;
}
int main()
{
    int revArr[]={1,2,3,4,5,6},sz,start=0,end=5;
    sz=6;

    rev_array(revArr,sz,start,end);
    for (int i = 0; i < sz; i++)
    {
        cout<<revArr[i];
    }
    
    return 0;
}