/*
    เขียนโปรแกรมภาษาซีเพื่อรับข้อมูลพนักงานของบริษัทซอร์ฟแวร์ โดยรับข้อมูล รหัสประจำตัวพนักงาน , จำนวนชั่วโมงที่ทำงาน , รายได้ต่อชั่วโมง จากนั้นให้แสดงข้อมูลเลขประจำตัวพนักงาน พร้อมกับรายได้ทั้งหมดที่หนักงานจะได้รับทั้งหมด

    Test case:
        Input the Employees ID(Max. 10 chars): 
            0342
        Input the working hrs: 
            8
        Salary amount/hr: 
            15000
    Output:
        Expected Output:
        Employees ID = 0342
        Salary = U$ 120000.00

    Test case:
        Input the Employees ID(Max. 10 chars): 
            0000500349
        Input the working hrs: 
            11
        Salary amount/hr: 
            34000
    Output:
        Expected Output:
        Employees ID = 0000500349
        Salary = U$ 374000.00
*/
 
#include <stdio.h>

int main() {

    //--| YOUR CODE HERE
    char EmployeesID [10] ; 
    int hr , amount ;
    float US ; 
    printf ( " Employees ID \n" ) ; 
    scanf ( "%s", EmployeesID  ) ; 
    printf ( " working hrs \n" ) ; 
    scanf ( "%d", &hr ) ; 
    printf ( " amount hr \n" ) ;
    scanf ( "%d" , &amount ) ; 
    printf ( " Expected Output:\n" ) ; 
    
    US = amount * hr ; 

    printf ( " Employees ID = %s\n", EmployeesID ) ; 
    printf ( " Salary = US  %.2f\n" , US ) ;

    return 0 ;
}//end main function
