#include<iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
    int i,key,j;
    for(i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
        cout<<endl<<key<<" ";
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
    int arr[7]={22,7,15,8,0,99,77};
    printArray(arr,7);
    insertionSort(arr,7);
    cout<<endl<<"After Sorting Your array is : ";
    printArray(arr,7);

}














