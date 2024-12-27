#include<iostream>
#include <climits>
using namespace std;
int main()
{
    //PROGRAM TO FIND SMALLEST AND LARGEST IN AN ARRAY 
    int arr[5]={1,2,3,4,5};
    int largest=INT_MIN,smallest=INT_MAX;
    for (int i = 0; i < 5; i++)
    {
    //C++ FUNCTIONS => min and max:
        // if(arr[i]>max){
        //     max=arr[i];
        // }
        // if(arr[i]<min){
        //     min=arr[i];
        // }
        largest=max(largest,arr[i]);
        smallest=min(smallest,arr[i]);
    }
    cout<<"Largest :"<<largest<<endl;
    cout<<"smallest :"<<smallest;
    return 0;
}