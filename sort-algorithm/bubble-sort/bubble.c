#include <stdio.h>
void bubble(int arr[], int n){
    for(int i = 0;i<n;i++){
        for(int j = i;j<n;j++){
            if(arr[i] > arr[j]){
                int a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
}
int main(void){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubble(arr,n);
    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}