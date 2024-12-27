#include<iostream>
#include <climits>
using namespace std;
int main()
{
    //PROGRAM TO FIND SMALLEST AND LARGEST IN AN ARRAY WITH ITS INDEX 
    int arr[5]={1,2,3,4,5};
    int largest=INT_MIN,large_index=0,smallest=INT_MAX,small_index=0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]>largest)
        {
            largest=arr[i];
            large_index=i;
        }
        if (arr[i]<smallest)
        {
            smallest=arr[i];
            small_index=i;
        }
    }    
    cout<<"Largest number is :"<<largest<<" with index of : "<<large_index<<endl;
    cout<<"smallest number is :"<<smallest<< "with index of : "<<small_index;
    return 0;
}