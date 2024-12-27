#include<iostream>
using namespace std;
int main()
{
    //PROGRAM TO FIND UNIQUE VALUES IN AN ARRAY
    int arr[5]={1,2,3,1,2};
    bool isUnique=true;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            if (arr[i]==arr[j])
            {
                isUnique=false;
            }
            else{
                isUnique=true;
            }            
        }
        if (isUnique)
        {
            cout<<arr[i];
        }
        
    }
    
    return 0;
}