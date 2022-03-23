#include<stdio.h>
int main(){
    int arr[]={4,9,3,5,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i,j,temp,min;
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min])
                min=j;
            }
        if(min!=i){
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}
for(i=0;i<n;i++)
printf("%d\t",arr[i]);
return 0;
}
