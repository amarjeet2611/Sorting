#include<iostream>
using namespace std;
void selectionSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minIndex= i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minIndex])
            {
                minIndex=j;
            }

        }
        swap(arr[minIndex],arr[i]);
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
    int arr[7]={12,7,5,8,25,99,0};
    printArray(arr,7);
    selectionSort(arr,7);
    printArray(arr,7);

}












