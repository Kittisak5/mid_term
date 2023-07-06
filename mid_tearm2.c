//2. เขียนโปรแกรมด้วยภาษาซีของการทeงานของคอมพิวเตอร์ในการค านวณหาราคาขายที่ได้ทำการลดแล้วต่อ
//หน่วยของสินค้า โดยการรับค่ารหัสสินค้า ชื่อสินค้า ราคาขายสินค้าปกติต่อหน่วย จากผู้ใช้ทางแป้นพิมพ์โดย
//กำหนดเงื่อนไขในการลดราคาสินค้า ดังนี้ ราคาขายสินค้าจะมีส่วนลดให้25% ของราคาขายสินค้าปกติแต่ต้อง
//คิดบวกเพิ่มภาษีอีก 7% ของราคาสินค้าที่หักส่วนลดไปแล้ว
#include "stdio.h"
#include "conio.h"


int main() {
    int productCode;
    char productName[50];
    float originalPrice, discount, finalPrice, tax, totalPrice;

    // รับค่ารหัสสินค้า, ชื่อสินค้า, ราคาขายสินค้าปกติ
    printf("IDproduct: ");
    scanf("%d", &productCode);
    printf("NameProduct: ");
    scanf(" %S", &productName);
    printf("originalPrice: ");
    scanf("%f",&originalPrice);

discount = originalPrice * 0.25;

    // คำนวณราคาหลังการลดราคา
    finalPrice = originalPrice - discount;

    // คำนวณภาษี
    tax = finalPrice * 0.07;

    // คำนวณราคาขายที่ได้หลังจากการลดราคาและเพิ่มภาษี
    totalPrice = finalPrice + tax;

    // แสดงผลลัพธ์
    printf("Product\n");
    printf("IDproduct: %d\n", productCode);
    printf("NameProduct: %s\n", productName);
    printf("originalPrice: %.2f\n", originalPrice);
    printf("discount: %.2f\n", discount);
    printf("finalPrice : %.2f\n", finalPrice);
    printf("tax: %.2f\n", tax);
    printf("totalPrice: %.2f\n", totalPrice);

    return 0;
   
   
}