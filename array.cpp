#include <iostream>

int main(){
    int arr[6] = {1,11,5,4,2,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int temp; 
    int result = 13;

    for(int i=0; i < n;i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] + arr[j] == result){
                printf("Pair found: (%d, %d)\n", arr[i], arr[j]);
                return 0;
            }
        }
    }
    return 0;

}