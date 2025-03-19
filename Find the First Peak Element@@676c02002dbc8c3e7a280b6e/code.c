// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int peak=findFirstPeak(arr,n);
    if(peak!=-1){
        printf("The first peak element is:%d\n",peak);
    }
    else{
        printf("No peak element found.\n");
    }
    return 0;
}