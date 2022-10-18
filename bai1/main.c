/*
*Viet chuong trinh nhap vao cac so ngau nhien, roi luu vao mang arr[]
*Nhan 1: Sap xep theo thu tu tu be den lon 
*Nhan 2: Sap xep theo thu tu tu lon den be
*Nhan 3: Tim so lon nhat
*Nhan 4: Thoat chuong trinh
*/
#include <stdio.h>
#include <stdlib.h>

struct typeArr {
    int *arr;
    int size;
};
struct typeArr *nhapThongTin(){
    static struct typeArr arr;
    int *ptr;
    int size;
    printf("Nhap chieu dai mang: ");
    scanf("%d",&size);
    ptr = (int*)malloc(size* sizeof(int));
    for ( int i = 0; i < size; i++)
    {
        printf("Nhap arr[%d]: ",i);
        scanf("%d",&ptr[i]);
        arr.size = size;
        arr.arr = ptr;
        
    }
    return &arr;
}
int beDenLon(struct typeArr *arr){
    int tam=0;
    for (int i = 0; i < arr->size; i++)
    {
        for(int t = i+1; t < arr->size; t++){
            if(arr->arr[i]>arr->arr[t]){
                tam = arr->arr[i];
                arr->arr[i] = arr->arr[t];
                arr->arr[t] = tam;
            }
        }
       
    }
    printf("Mang tu be den lon: \n");
    for (int j = 0; j < arr->size; j++)
    {
        printf("[%d]",*(arr->arr+j));
    }
}
int lonDenBe(struct typeArr *arr){
    int tam=0;
    for (int i = 0; i < arr->size; i++)
    {
        for(int t = i+1; t < arr->size; t++){
            if(arr->arr[i] < arr->arr[t]){
                tam = arr->arr[i];
                arr->arr[i] = arr->arr[t];
                arr->arr[t] = tam;
            }
        }
       
    }
    printf("Mang tu be den lon: \n");
    for (int j = 0; j < arr->size; j++)
    {
        printf("[%d]",*(arr->arr+j));
    }
}
int soLonNhat(struct typeArr *arr){
    int max=0;
    for (int i = 0; i < arr->size; i++)
    {
        if(arr->arr[i]>max){
            max = arr->arr[i];
        }
    }
    printf("So lon nhat la: %d",max);
}
int option(struct typeArr *arr){
    int mode;
    do
    {
        printf("\nChon mode: \n" );
        scanf("%d",&mode);
        switch (mode)
        {
        case 1:
            beDenLon(arr);
            break;
        case 2:
            lonDenBe(arr);
            break;    
        case 3:
            soLonNhat(arr);
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Khong ton tai mode - Vui long chon lai tu 1 - 4!!!");
            break;
        }



    } while (mode !=100);
    

}
int main( int argc, char const *argv[])
{
    struct typeArr *test;
    test = nhapThongTin();
    printf("Mang da nhap:\n");
    for (int i = 0; i < test->size; i++)
    {
        printf("[%d]\t",test->arr[i]);
    }
    option(test);
    return 0;
    
    
    
  
}