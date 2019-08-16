// github.com/hashbanger

#include<iostream>

using namespace std;

//Declaring the protype for binarySearch
int binarySearch(int arr[], int size, int s);

int main(){
    int arr[100],i, size, s, idx = -1, first = 0, last, mid, res;
    cout<< "Enter the size of the array\t";
    cin>>size;
    cout<< "Enter the array entries\n";
    for(i = 0; i < size; i++){
        cin>>arr[i];
    }

    cout<< "Enter the key to search for \t";
    cin>>s;

    res = binarySearch(arr, size, s);
    
    if(res == -1){
        cout<<"Key not present";
    }
    else{
        cout<<"Key found at location "<<res + 1;
    }
    return 0;
}

// Logic for Binary Search

int binarySearch(int arr[], int size,int s){

int first, last, mid;
first = 0;
last = size - 1;

while(first <= last ){

    mid = (first + last)/2;

    if(arr[mid] == s){
        return mid;
    }
    
    if(arr[mid] > s){
        last = mid - 1; 
    }
    
    if(arr[mid] < s){
        first = mid + 1;
    }

}

return -1;
}
