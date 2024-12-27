#include<iostream>
#include<climits>
using namespace std;
int main()
{
    //SWAP MAX AND MIN OF AN ARRAY
    int arr[5]={0,3,90,8,-4},max=INT_MIN,min=INT_MAX,index_max=0,index_min=0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
            index_max=i;
        }
        if (arr[i]<min)
        {
            min=arr[i];
            index_min=i;
        }
    }
    swap(arr[index_max],arr[index_min]);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<",";
    }
    
    return 0;
}