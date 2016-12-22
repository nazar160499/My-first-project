// ConsoleApplication14.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

class Digital_elements
{
public:
	virtual double Signal() {
		return 0;
	}
	virtual int Get() {
		return 0;
	}
};

class �ounters : public Digital_elements {

public:
	virtual double Signal() {
		return 0;
	}
	virtual int Get() {
		return 0;
	}
};

class binary_counters : public �ounters {

public:
	int Get() {
		
		cout << " ������ ������� �������, �� ��������� �� ���� : ";

		cin >> NumSignInput;

		cout << " ������ ������i��� ��������� ��������� : ";
			
		cin >> KoefBinCount;

		Volume = NumSignInput*KoefBinCount;

		return 0;
	}
	double Signal() {
		return Volume;
	}

private:

	int NumSignInput, KoefBinCount, Volume;
};

class binary_decimal_counters : public �ounters {

public:

	int Get() {
		
		cout << " ������ ������� �������, �� ��������� �� ���� : ";

		cin >> NumSignInput1;

		cout << " ������ ������i��� ������� - ��������� ��������� : ";

		cin >> KoefBinDesCount;

		Volume1 = NumSignInput1*KoefBinDesCount;
		
		return 0;
	}
	double Signal() {
		return Volume1;
	}

private:

	int NumSignInput1, KoefBinDesCount, Volume1;
};

class reversing_counters : public �ounters {

public:

	int Get() {

		cout << " ������ ������� �������, �� ��������� �� ���� : ";

		cin >> NumSignInput;

		cout << " ������ ������i��� ������������ ��������� : ";

		cin >> KoefRevCount;

		cout << " ������ ������� ����� ������� : ";

		cin >> VudZaliky;

		Suma = (NumSignInput*KoefRevCount)*VudZaliky;
		
		return 0;
	}
	double Signal() {	
		return Suma;
	}

private:

	int NumSignInput, KoefRevCount, VudZaliky, Suma;
};

class Triggers : Digital_elements {

public:

	virtual double Signal() {
		return 0;
	}
	virtual int Get() {
		return 0;
	}
};

class D_triggers : public Triggers {

public:

	int Get() {

		cout << " ������ ��� �������� �������, �� ��������� �� ���� : ";

		cin >> NumSignInput;

		cout << " ������ ������i��� �������� � D - ������ : ";

		cin >> KoefRevCount;

		cout << " ������ ������� ����� � ������ : ";

		cin >> KilVxody;;

		Suma = (NumSignInput*KoefRevCount)*KilVxody;;

		return 0;
	}
	double Signal() {
		return Suma;
	}

private:

	int NumSignInput, KoefRevCount, KilVxody, Suma;
};

class RS_triggers : public Triggers {

public:

	int Get() {

		cout << " ������ ��� �������� �������, �� ��������� �� ���� : ";

		cin >> NumSignInput;

		cout << " ������ ������i��� �������� � RS - ������ : ";

		cin >> KoefRevCount;

		cout << " ������ ������� ����� � ������ : ";

		cin >> KilVxody;;

		Suma = (NumSignInput*KoefRevCount)*KilVxody;;
	
		return 0;
	}
	double Signal() {
		return Suma;
	}

private:

	int NumSignInput, KoefRevCount, KilVxody, Suma;
};

class Registers : public Digital_elements {

public:

	virtual double Signal() {
		return 0;
	}
	virtual int Get() {
		return 0;
	}
};

class multiplexers : public Registers {

public:

	int Get() {

		cout << " ������ ������� ����� � ������������� : ";

		cin >> NumSignInput;

		cout << " ������ ������� ������ � ������������� : ";

		cin >> KoefRevCount;

		cout << " ������ ������� ����� : ";

		cin >> KilVxody;;

		return 0;
	}
	double Signal() {
		return 0;
	}

private:

	int NumSignInput, KoefRevCount, KilVxody;
};

class shifting_registers : public Registers {

public:

	virtual double Signal() {
		return 0;
	}
	virtual int Get() {
		return 0;
	}
};

int main() {

	setlocale(LC_ALL, " Ukrainian ");

	cout << " ������� ������i� : " << endl;

	cout << " 1. ������ ��������� " << endl;

	cout << " 2. ������� - �������� ��������� " << endl;

	cout << " 3. ��������� ��������� " << endl;

	cout << " 4. D - ������ " << endl;

	cout << " 5. RS - ������ " << endl;

	cout << " 6. ������������� " << endl;

	cout << " 7. �������� ������� " << endl;

	int choise;

	cin >> choise;

	if (choise == 1) 	{

		�ounters * ptr1 = new binary_counters;
		
		ptr1 -> Get();

		cout << (ptr1 -> Signal()) << endl;
	}
	else if (choise == 2) {

		�ounters * ptr2 = new binary_decimal_counters;

		ptr2 ->Get();

		cout << (ptr2 -> Signal()) << endl;
	}
	else if (choise == 3) {

		�ounters * ptr3 = new reversing_counters;

		ptr3 -> Get();

		cout << (ptr3 -> Signal()) << endl;
	}
	else if (choise == 4) {

		Triggers * ptr4 = new D_triggers;

		ptr4 -> Get();

		cout << (ptr4 -> Signal()) << endl;
	}
	else if (choise == 5) {

		Triggers * ptr5 = new RS_triggers;

		ptr5 -> Get();

		cout << (ptr5 -> Signal()) << endl;
	}
	else if (choise == 6) {

		Registers * ptr6 = new multiplexers;

		ptr6 -> Get();

		cout << (ptr6 -> Signal()) << endl;
	}
	else if (choise == 7) {

		Registers * ptr7 = new shifting_registers;

		ptr7 -> Get();

		cout << (ptr7 -> Signal()) << endl;
	}
	else {

		cout << " Number is not valid " << endl;
		return 0;
	}
	_getch();
}
