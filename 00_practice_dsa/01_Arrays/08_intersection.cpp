#include<iostream>
using namespace std;
//PROGRAM TO FIND INTERSECTION OF TWO ARRAYS
int main()
{
    int arr1[4]={1,2,3,4};
    int arr2[4]={4,5,3,7};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<",";
            }
        }
    }
    
    return 0;
}