#include <iostream>
using namespace std;
int main(){
    // ====== PAYSLIP ======
    // Basic Pay:              50000
    // House Allowance (30%):  15000
    // Medical Allowance (10%): 5000
    // Gross Pay:              70000
    // Tax Deduction (5%):      3500
    // ----------------------------
    // Net Pay:                66500
    // ======================
    // i: basic pay leni user se
    // baki sb allowans oro gross pay jo sab allowajnce ki katoti se pehly sari pay hoti jo bajnk me ati ha\ vo sb ak ak kr ke
    int BasicPay;
    cout<<"enter basic pay: ";cin>>BasicPay;cout<<endl;
    int HouseAllowance = BasicPay*0.30;
    int MedicalAllowance = BasicPay*0.10;
    int GrossPay = BasicPay+HouseAllowance+MedicalAllowance;
    int TaxDeduction = GrossPay*0.05;
    int NetPay = GrossPay-TaxDeduction;
    cout<<"====== PAYSLIP ======"<<endl;
    cout<<"Basic Pay:              "<<BasicPay<<endl;
    cout<<"House Allowance (30%):  "<<HouseAllowance<<endl;
    cout<<"Medical Allowance (10%): "<<MedicalAllowance<<endl;
    cout<<"Gross Pay:              "<<GrossPay<<endl;
    cout<<"Tax Deduction (5%):      "<<TaxDeduction<<endl;
    cout<<"----------------------------"<<endl;
    cout<<"Net Pay:                "<<NetPay<<endl;
}