// github.com/hashbanger

#include<iostream>

using namespace std;

//Declaring the protypes
int insertionSort(int arr[], int size);
int printArray(int arr[], int size);

int main(){
    int arr[100], size, i, res_arr[100];
    cout<< "Enter the size of the array\t";
    cin>>size;
    cout<< "Enter the array entries\n";
    for(i = 0; i < size; i++){
        cin>>arr[i];
    }

    insertionSort(arr, size);
    
    cout<<"The sorted array is as:\n";
    printArray(arr, size);

    return 0;
}

// Logic for Insertion Sort

int insertionSort(int arr[], int size){
    int i, j, temp;

    for (i = 1; i < size; i++)
    {
        temp = arr[i];
        j = i-1;
        while(j >= 0 && arr[j] > temp)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = temp;
    }
}

int printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<"\n";
    }
    
}