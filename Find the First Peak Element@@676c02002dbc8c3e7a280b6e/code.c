// Your code here...
#include <stdio.h>
int main(){
   int a;
   scanf("%d",&a);
   int arr[a];
   for(int i=0;i<a;i++){
    scanf("%d",&arr[i]);
   } int second=-1;
   for(int i=0;i<a;i++){
    if((i == 0 && arr[i] > arr[i + 1]) || 
         (i == a - 1 && arr[i] > arr[i - 1]) || arr[i]>arr[i-1] && arr[i]>arr[i+1]){
        second=arr[i];
        break;
    }
   }
    printf("%d",second);
    return 0;
}