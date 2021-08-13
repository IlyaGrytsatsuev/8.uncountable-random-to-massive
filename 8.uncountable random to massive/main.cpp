#include <iostream>
#include "func.hpp"


using namespace std;

int main ()
{
    int n = 0;
    cout<< "Enter the size of the massive:\n";
    cin>>n;
    int* arr1 = new int [n];
    randomise(n, arr1);
    cout<<"The first massive:\n"; 
    for(int i = 0; i < n; i++){
        cout<<arr1[i]<<" ";
    }
    cout<<"\n";
    
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr1[i]%3==0)
            count++;
    }
    if (count == 0){
        cout<<"No numbers dividing 3\n";
        
    }
    else{
    int* arr2 = new int [count];
    
    fill_massive(arr1, arr2, n);
    cout<<"Second massive:\n";
    for(int i = 0; i < count; i++){
        cout<<arr2[i]<<" ";
    }
    }
    cout<<"\n";
    return 0;
}

