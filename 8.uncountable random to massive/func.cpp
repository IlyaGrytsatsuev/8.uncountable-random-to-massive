
#include "func.hpp"
#include <cstdlib>
#include <ctime>
using namespace std;

void randomise(int n, int* arr)
{
    srand(time(0));
    for(int i = 0; i < n; i++)
    {
        arr[i] = rand()%30;
    }
    
}
void fill_massive(int* arr1, int* arr2, int n){
    int j = 0;
    for(int i = 0; i < n; i++){
        if (arr1[i]%3==0){
            arr2[j] = arr1[i];
            j++;
        }
    }
}
