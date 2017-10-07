/*
Chuong trinh in ra ngay/thang/nam ke tiep by  
 ('-. .-.                                 .-. .-')      ('-.      _  .-')                  .-') _  
( OO )  /                                 \  ( OO )    ( OO ).-. ( \( -O )                ( OO ) ) 
,--. ,--.  ,--. ,--.     ,--.   ,--.      ,--. ,--.    / . --. /  ,------.    ,-.-')  ,--./ ,--,'  
|  | |  |  |  | |  |      \  `.'  /       |  .'   /    | \-.  \   |   /`. '   |  |OO) |   \ |  |\  
|   .|  |  |  | | .-')  .-')     /        |      /,  .-'-'  |  |  |  /  | |   |  |  \ |    \|  | ) 
|       |  |  |_|( OO )(OO  \   /         |     ' _)  \| |_.'  |  |  |_.' |   |  |(_/ |  .     |/  
|  .-.  |  |  | | `-' / |   /  /\_        |  .   \     |  .-.  |  |  .  '.'  ,|  |_.' |  |\    |   
|  | |  | ('  '-'(_.-'  `-./  /.__)       |  |\   \    |  | |  |  |  |\  \  (_|  |    |  | \   |   
`--' `--'   `-----'       `--'            `--' '--'    `--' `--'  `--' '--'   `--'    `--'  `--'   
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int date,month,year,n;
	do{ //cau lenh lenh lap lai
	
	cout<<"\a\nNhap date, month, year: "; cin>>date>>month>>year;
	if (31<date || date <0 || 12<month || month<0 || year<0)
	qlai: //
		cout<<"Nhap sai vui long nhap lai";
	else
		{	cout<<"Ngay tiep theo là: ";
			if (month==1 || month==3 || month==5 || month==7 || month==8 || month==10)
					if (date<31)
						cout<<date+1<<"/"<<month<<"/"<<year;
					else
						cout<<"01/"<<month+1<<"/"<<year;
			if (month==4 || month==6 || month==9 || month==11)
					if (date<30)
						cout<<date+1<<"/"<<month<<"/"<<year;
					else
						cout<<"01/"<<month+1<<"/"<<year;
			if (month==12)
					if (date<31)
						cout<<date+1<<"/"<<month<<"/"<<year;
					else
						cout<<"01/01/"<<year+1;
			if (month==2)
				if ((year%4)==0 && (year%100)!=0)
					{
					if (date>29) goto qlai; //quay lai khi sai ngay
					if (date<29)
						cout<<date+1<<"/"<<month<<"/"<<year;
					else
						cout<<"01/"<<month+1<<"/"<<year;
					}
				else
					{
					if (date>28) goto qlai; //quay lai khi sai ngay
					if (date<28)
						cout<<date+1<<"/"<<month<<"/"<<year;
					else
						cout<<"01/"<<month+1<<"/"<<year;
					}
			
		}
		
		cout<<"\a\n--------------\n***Nhap 0 de quay lai\nNhap so bat ki de thoat\n"; cin>>n; //nhap so de kiem tra va thuc hien
		} while(n==0); //kiem tra so vua nhap de thuc hien lenh lap lai va ket thuc cau lenh lap lai 
	getch();
	return 0;
}
