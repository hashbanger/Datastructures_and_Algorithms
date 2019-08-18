// github.com/hashbanger

#include<iostream>

using namespace std;

//Declaring the protypes
int mergeSort(int arr[], int lb, int ub);
int merge(int arr[], int lb, int mid, int ub);
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
    mergeSort(arr, lb, ub);
    
    cout<<"The sorted array is as:\n";
    printArray(arr, size);

    return 0;
}

// Logic for Quick Sort

int mergeSort(int arr[], int lb, int ub){
    if(lb < ub){
        int mid = (lb + ub) / 2;

        mergeSort(arr, lb, mid);
        mergeSort(arr, mid+ 1, ub);
        merge(arr, lb ,mid, ub);
    }
    return 0;
}

int merge(int arr[], int lb, int mid, int ub){
    int res[100],i,j,k;

    i = lb;
    j = mid+1;
    k = lb;

    while(i <= mid && j <= ub){
        if(arr[i] <= arr[j]){
            res[k] = arr[i];
            i++;
        }
        else{
            res[k] = arr[j];
            j++;
        }
        k++;
    }

    while(i < mid){
        res[k] = arr[i];
        i++;
        k++;
    }

    while(j < mid){
        res[k] = arr[j];
        j++;
        k++;
    }

    for(int l = 0; l < ub; l++){
        arr[l] = res[l];
    }

    return 0;
}

int printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<"\n";
    }
    
}