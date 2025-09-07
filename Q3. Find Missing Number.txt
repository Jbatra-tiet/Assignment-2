#include <stdio.h>
int find_missing_linear(int a[], int n){
    for(int i = 0; i < n; i++){
        if(a[i] != i+1) return i+1;
    }
    return n+1;
}
int main(){
    int a[] = {1,2,4,5,6}; // here N = 6, input length = 5
    int input_len = sizeof(a)/sizeof(a[0]);
    int missing = find_missing_linear(a, input_len);
    printf("Missing = %d\n", missing);
    return 0;
}
