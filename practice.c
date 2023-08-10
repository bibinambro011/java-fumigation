#include<stdio.h>

void main(){
    int arr1[]={3,3,4,5,67,8,9,11,12,14},size=10;

 for(int i=0;i<size;i++){
    if(arr1[i]%2==1){
        for(int j=i;j<size;j++){
            arr1[j+1]=arr1[j+3];
            arr1[j+2]=arr1[j+3];
        }
        size-=2;
    }
    
 }
 for(int i=0;i<size;i++){
    printf("%d ",arr1[i]);
 }
}