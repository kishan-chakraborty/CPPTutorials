#include <iostream>

using namespace std;

void reverse_array(int arr[], int len){
    int i = 0, j = len - 1, temp;
    while(i < j){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

int main(){
    int arr1[4] = {1, 2, 3, 4};
    int arr2[5] = {1, 2, 3, 4, 5};

    reverse_array(arr2, 5);
    for(int i=0; i<5; i++){
        cout << arr2[i] << endl;
    }
}