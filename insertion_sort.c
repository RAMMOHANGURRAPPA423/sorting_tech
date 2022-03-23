#include<stdio.h>
void insert(int arr[],int n);
void display(int arr[],int n);
int main(){
    int arr[]={2,1,4,7,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("the before sorted array elements are:");
    display(arr,n);
    insert(arr,n);
    printf("after sorted elements are:");
   display(arr,n);
}
    void insert(int arr[],int n){
     int i,j,temp;
    for(i=1;i<n;i++){
        temp=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>temp){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=temp;   
    }
    }
    void display(int arr[],int n){
        int i;
 for(i=0;i<n;i++)
    printf("%d",arr[i]);
}
