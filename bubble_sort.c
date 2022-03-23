#include<stdio.h>
void print_elements(int a[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}
void bubble_sort(int a[],int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
   print_elements(a,n);
}
int main(){
    int i,j,temp;
    int a[5]={2,4,1,9,7};
    int n=sizeof(a)/sizeof(a[0]);
    printf("before sorting elements are:\n");
    print_elements(a,n);
    printf("after sorting elements are:\n");
    bubble_sort(a,n);
    return 0;
}
