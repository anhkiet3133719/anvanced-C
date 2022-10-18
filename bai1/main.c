#include <stdio.h>
int dayn=19; thangn=10; namn=2022;

int check(int ngay, int thang, int nam){
  if(nam >2022){
    printf("Nam sinh khong hop le\n");
    return 0;
  }
  switch(thang) {
  case 1: case 3: case 5: case 7: case 8: case 10:  case 12:
      if( ngay<0 || ngay>=31){
      printf("Ngay thang nam khong hop le\n");
      return 0 ;
      break;
      }
      else{
        printf("Ngay thang nam  hop le\n");
      return 1 ;
      break;
      }
  case 4: case 6: case 9: case 11:
    if( ngay>=30 || ngay<0){
    printf("Ngay thang nam khong hop le\n");
    return 0;
    break;
    }
     else{
        printf("Ngay thang nam  hop le\n");
      return 1 ;
      break;
      }
     
  case 2:
    if( ngay >=28 || ngay < 0){
    printf("Ngay thang nam khong hop le\n");
    return 0;
    break;
    }
     else{
        printf("Ngay thang nam  hop le\n");
      return 1 ;
      break;
      }
  default:
    printf("Ngay thang nam khong hop le\n");
    return 0;
    break;
  }
}
int tinhTuoi(int ngay, int thang, int nam){
  int tuoi;
  tuoi = namn - nam;
  if(thang > thangn){
    printf("\nTuoi cua ban la: %d\n",tuoi-1);
  }else{
    printf("\nTuoi cua ban la: %d\n",tuoi);
  }
  

}
int main() {
  int ngay, thang, nam;
  do
  {
    printf("\nNhap ngay sinh: ");
    scanf("%d",&ngay);
    printf("\nNhap thang sinh: ");
    scanf("%d",&thang);
    printf("\nNhap nam sinh: ");
    scanf("%d",&nam);
  } while (check(ngay, thang, nam)==0);
  printf("\nNgay thang nam sinh: %d/%d/%d",ngay,thang,nam);
  tinhTuoi(ngay,thang,nam);

}