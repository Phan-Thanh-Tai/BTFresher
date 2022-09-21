#include <stdio.h>


int main(){
    int a[100],dem[100];
    int max,n;

    printf("nhap so luong: ");
    
    do{
    scanf("%d",&n);
    if(n<=0){
        printf("nhap lai n: ");
        scanf("%d",&n);
    }
   }while(n<=0);

    for (int i = 0; i < n; i++)
    {   printf("Nhap so thu %d: ",i+1);
        scanf("%d",&a[i]);
    }

for (int i = 0; i < n; i++)
    {   
        dem[i]=1;
    }

    for (int i = 0; i < n-1; i++)
    {   for (int j = i+1; j < n; j++)
        {
             if(a[i]==a[j])
                {
                    dem[i]++;
                }
        } 
    }
    max=dem[0];
    int ten=a[0];
    
    for (int i = 0; i < n; i++)
    {    if(max < dem[i])
        {
             max=dem[i];
              ten=a[i];
        }
        
    }
    

    printf("so %d xuat hien nhiu lan nhat: %d lan",ten,max);


    return 0;
}