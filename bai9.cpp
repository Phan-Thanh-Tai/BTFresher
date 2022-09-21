#include <stdio.h>

void nhapmang(int a[],int n){
    for(int i=0;i<n;i++){
        printf("Nhap so thu %d: ",i+1);
        scanf("%d",&a[i]);
    }
}

void xuatmang(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d: ",a[i]);
       
    }
}

void giamdan(int a[], int n){
    
   for(int i=0;i<n-1;i++){
        for (int j = i+1; j < n; j++)
        { if (a[i]<a[j]){
            int tam= a[i];
            a[i]=a[j];
            a[j]=tam;
        }
           
        }
        
   }
}

void tangdan(int a[], int n){
   for(int i=0;i<n-1;i++){
        for (int j =i+1; j < n; j++)
        { if (a[i]>a[j]){
            int tam = a[i];
            a[i]=a[j];
            a[j]=tam;
        }
           
        }
        
   }
}

int main(){
   int a[100];
   int n;
   printf("Nhap n:");
   
    
   do{
    scanf("%d",&n);
    if(n<=0){
        printf("nhap lai n: ");
        scanf("%d",&n);
    }
   }while(n<=0);
    nhapmang(a,n);
    printf("mang ban da nhap:");
    xuatmang(a,n);

    printf("\nsap xep tang dan:");
    tangdan(a,n);
    xuatmang(a,n);

    printf("\nsap xep giam dan:");
    giamdan(a,n);
    xuatmang(a,n);




    return 0;
}