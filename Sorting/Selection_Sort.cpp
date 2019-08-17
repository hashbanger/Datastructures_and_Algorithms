// github.com/hashbanger

#include<iostream>

using namespace std;

//Declaring the protypes
int selectionSort(int arr[], int size);
int swap(int *x, int *y);
int printArray(int arr[], int size);

int main(){
    int arr[100], size, i, res_arr[100];
    cout<< "Enter the size of the array\t";
    cin>>size;
    cout<< "Enter the array entries\n";
    for(i = 0; i < size; i++){
        cin>>arr[i];
    }

    selectionSort(arr, size);
    
    cout<<"The sorted array is as:\n";
    printArray(arr, size);

    return 0;
}

// Logic for Selection Sort

int selectionSort(int arr[], int size){
    int i, j, min;
    for (i = 0; i < size; i++)
    {
        min = i;
        for (j = i+1; j < size; j++)
        {
            if(arr[min] > arr[j]){
                min = j;

            }
        }
        swap(&arr[min], &arr[i]);        
    }
    
}

int swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<"\n";
    }
    
}