// viet chuong trinh nhap vao ten mã diem cua sinh vien. th?c hien tinh diem trung binh va phan loai sinh vien theo yeu cau. diem trung binh>=8 xep lo?i gioi. diem tr b <8,>7 loai kha. diem trung binh <7 >6 xep loai trb kha. 5<x<6 trung binh
//in sinh vien ma sinh vien ten ra man hinh
#include <stdio.h>
int main(){
char hoten;
int masv;
float toan,tin,anh,tb;
printf("nhap vao ho ten sinh vien ");
scanf("%s",&hoten);
fflush(stdin);
printf("nhap ma sinh vien ");
scanf("%d",&masv);
printf("nhap lan luot diem toan, tin, anh: ");
scanf("%f%f%f",toan,tin,anh);
tb=(toan+tin+anh)/3;
printf("\n diem trung binh la %.2f",tb);
if (tb>=8){
printf("\n ten sinh vien: %s",hoten);
printf("\n ma sinh vien: %d",masv);
printf("\n diem trung binh la %.2f \n xep loai gioi",tb);
}
else if (tb<8 && tb>7){
printf("\n ten sinh vien: %s",hoten);
printf("\n ma sinh vien: %d",masv);
printf("\n diem trung binh la %.2f",tb);
printf("\nxep loai kha ");

}
else if (tb<7 && tb>6){
printf("\n ten sinh vien: %s",hoten);
printf("\n ma sinh vien: %d",masv);
printf("\n diem trung binh la %.2f",tb);
printf("\nxep loai trung binh kha ");

}
else  if (tb<6 && tb>5 ){
printf("\n ten sinh vien: %s",hoten);
printf("\n ma sinh vien: %d",masv);
printf("\n diem trung binh la %.2f",tb);
printf("\nxep loai trung binh  ");

}
else {
printf("\n ten sinh vien: %s",hoten);
printf("\n ma sinh vien: %d",masv);
printf("\n diem trung binh la %.2f",tb);
printf("\nxep loai yeu  ");
}

}
