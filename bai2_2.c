/******************************************************************************
 * Họ và tên: [Nguyễn Thành Tâm]
 * MSSV:      [PS48578]
 * Lớp:       [COM108 - CS21302]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH GIẢI PHƯƠNG TRÌNH  
// 2.2 BẬC 2 
// Phương trình có dạng: ax2 + bx + c = 0 
// Input: Nhập vào từ bàn phím: a, b, c 
// Output: Nghiệm của phương trình 
// Biết rằng: 
// Nếu a == 0, phương trình thành bx + c = 0  
// Ngược lại nếu a != 0 
//  Tính delta 
//  Nếu delta < 0: Phương trình vô nghiệm 
//  Nếu delta == 0: Phương trình có nghiệm kép x = -b/(2*a) 
//  Nếu delta > 0: Phương trình có 2 nghiệm riêng biệt  
// o X1 = (-b + căn(delta))/(2*a) 
// o X2 = (-b – căn(delta))/(2*a)

#include <stdio.h>

int main(){
    int soDien;
    double tienDien = 0;

    // Nhập số điện tiêu thụ
    printf("Nhap so dien tieu thu (kWh): ");
    scanf("%d", &soDien);

    if (soDien <= 50) {
        tienDien = soDien * 1678;
    } 
    else if (soDien <= 100) {
        tienDien = 50 * 1678 
                 + (soDien - 50) * 1734;
    } 
    else if (soDien <= 200) {
        tienDien = 50 * 1678 
                 + 50 * 1734
                 + (soDien - 100) * 2014;
    } 
    else {
        tienDien = 50 * 1678
                 + 50 * 1734
                 + 100 * 2014
                 + (soDien - 200) * 2536;
    }

    // Hiển thị tiền điện
    printf("So tien dien phai dong: %.0lf VND\n", tienDien);

    return 0;
}
