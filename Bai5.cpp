#include <stdio.h>



int main(){
    float so_km;
    float so_tien;
    printf("nhap so Km: ");
    scanf("%f",&so_km);
    if (so_km>31){
        so_tien=5000+4000*30+(so_km-31)*3000;
        printf("so tien: %.1f vnd\n",so_tien);
    } else if(so_km>1){
        so_tien=5000+(so_km-1)*4000;
        printf("so tien: %.1f vnd\n",so_tien);
    } else {
        so_tien=5000*so_km;
        printf("so tien: %.1f vnd\n",so_tien);
    }


    return 0;
}
