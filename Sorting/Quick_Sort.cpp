// github.com/hashbanger

#include<iostream>

using namespace std;

//Declaring the protypes
int quickSort(int arr[], int lb, int ub);
int partition(int arr[], int lb, int ub);
int swap(int *x, int *y);
int printArray(int arr[], int size);

int main(){
    int arr[100], size, i, lb, ub;
    cout<< "Enter the size of the array\t";
    cin>>size;
    cout<< "Enter the array entries\n";
    for(i = 0; i < size; i++){
        cin>>arr[i];
    }
    lb = 0;
    ub = size -1;
    quickSort(arr, lb, ub);
    
    cout<<"The sorted array is as:\n";
    printArray(arr, size);

    return 0;
}

// Logic for Quick Sort

int quickSort(int arr[], int lb, int ub){
    int loc;

    if(lb < ub){
        loc = partition(arr, lb, ub);
        quickSort(arr, lb, loc -1);
        quickSort(arr, loc + 1, ub);
    }

    return 0;
}

int partition(int arr[], int lb, int ub){
    int pivot, start, end;

    pivot = arr[lb];
    start = lb;
    end = ub;
    while(start < end){
        while( arr[start] <= pivot){
            start++;
        }

        while(arr[end] > pivot){
            end--;
        }

        if(start < end){
            swap(&arr[start], &arr[end]);
        }
    }
    swap(&arr[lb], &arr[end]);

    return end;
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