#include <iostream>
using namespace std;
void reverse(int arr[], int n){
    int start = 0;
    int end = n-1;
    while(start<=end){
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
}


void printingarray(int arr[], int n){
    cout<<" this is the array after reversing"<<endl;
    for(int i = 0; i<n ; i++){
        cout<< arr[i]<<" ";
    }
    cout <<endl;
    cout<<" YOU ARE DONE"<<endl;
}
int main(){
    int arr[10] = {2,6,7,8,9,4,5,1,67,83};
    reverse(arr , 10);
    printingarray(arr,10);
    return 0;
}
