// github.com/hashbanger

#include<iostream>

using namespace std;

//Declaring the prototype for linearSearch
int linearSearch(int arr[], int size , int s);

int main(){
    int arr[100],i , size, s, idx = -1;
    cout<< "Enter the size of the array\t";
    cin>>size;
    cout<< "Enter the array entries\n";
    for(i = 0; i < size; i++){
        cin>>arr[i];
    }

    cout<< "Enter the key to search for \t";
    cin>>s;

    idx = linearSearch(arr, size, s);
    
    if(idx != -1){
        cout<<"Key exists at location "<<idx + 1;
    }
    else{
        cout<<"Key does not exist!";
    }
    
    return 0;
}

// Logic for Linear Search 


int linearSearch(int arr[], int size, int s){

    int i;

        for(i = 0; i < size; i++){
            if(arr[i] == s){
                return i;
            } 
    }
    return -1;
}