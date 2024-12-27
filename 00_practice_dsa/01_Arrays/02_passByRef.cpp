#include<iostream>
using namespace std;

// WHENEVER WE PASS ARRAY IN FUNCTION IT IS PASSED AS REFERENCE, MEANS WITH ITS ORIGINAL VALUE
void changeArr(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i]*2;
    }
}

int main()
{
    int arr[]={1 ,2 , 3};
    changeArr(arr,3);
    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}