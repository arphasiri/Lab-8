#include<iostream>
#include<iomanip> 
using namespace std;

int main(){	
	double rate, prv, in, total, pay, loan;
	int year=0;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	do{ 
	prv=loan;
	in = prv*rate/100;
	total = prv+in;
	if (total<pay) pay=total;
	loan=total-pay;
	year++;
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << year; 
	cout << setw(13) << left << prv;
	cout << setw(13) << left << in;
	cout << setw(13) << left << total;
	cout << setw(13) << left << pay;
	cout << setw(13) << left << loan;
	cout << "\n";	
    }while(loan != 0);
	return 0;
}