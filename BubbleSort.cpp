#include<iostream>
using namespace std;
void BubbleSort(int arr[], int n)
{
    for (int i=1;i<n;i++)
    {
        bool swapped =false;
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped)
        {
            break;
        }
    }

}
void printArray(int arr[],int n)
{
    cout<<endl<<"Your Array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[7]={12,7,5,8,0,99,77};
    printArray(arr,7);
    BubbleSort(arr,7);
    cout<<endl<<"After Sorting: ";
    printArray(arr,7);

}









