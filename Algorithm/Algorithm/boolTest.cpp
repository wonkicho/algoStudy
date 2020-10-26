/*
#include <iostream>

using namespace std;

bool IsPositive(int num)
{
	if (num <= 0)
		return false;
	else
		return true;
}

int main(void)
{
	bool isPos; //return true or false
	int num;
	cout << "Input number: ";
	cin >> num;

	isPos = IsPositive(num);
	if (isPos) //(ispos == True)
	{
		cout << "Positive number" << endl;
	}
	else
	{
		cout << "Negative number or zero" << endl;
	}

	system("pause");  // VC++ ������ �ʿ�
	return 0;
}
*/

/*
//C��Ÿ��
#include <iostream>
#include <string.h>

using namespace std;

char* MakeStr(int len)
{
	char* str = (char*)malloc(sizeof(char) * len);//�޸� �Ҵ�
	return str;
}


int main(void)
{
	char* mystr = MakeStr(20);

	strcpy_s(mystr, 20, "I am so happy.");  // strcpy�� �������� ���� �Լ��̹Ƿ� strcpy_s ���
	cout << mystr << endl;

	free(mystr); //�޸�����

	system("pause");  // VC++ ������ �ʿ�

	return 0;
}
*/
/*
//new, delete
#include <iostream>
#include <string.h>

using namespace std;

char* MakeStr(int len)
{
	char* str = new char[len];
	return str;
}


int main(void)
{
	char* mystr = MakeStr(20);

	strcpy_s(mystr, 20, "I am so happy.");
	cout << mystr << endl;

	delete[]mystr;

	system("pause");  // VC++ ������ �ʿ�

	return 0;
}
*/

/*
#include <iostream>

using namespace std;

#define ID_LEN      20
#define MAX_SPD     200
#define FUEL_STEP   2
#define ACC_STEP    10
#define BRK_STEP    10

struct Car //����ü ����
{
	char gamerID[ID_LEN]; 
	int fuelGauge;
	int curSpeed;

};

void ShowCarState(const Car& car) //����ü ������ �Ӽ���
{
	cout << "������ ID: " << car.gamerID << endl;
	cout << "���ᷮ: " << car.fuelGauge << "%" << endl;
	cout << "���� �ӵ�: " << car.curSpeed << "km/h" << endl << endl;
}

void Accel(Car& car)
{
	if (car.fuelGauge <= 0) //����ü ��� ������ ����
		return;
	else
		car.fuelGauge -= FUEL_STEP;

	if (car.curSpeed + ACC_STEP >= MAX_SPD)
	{
		car.curSpeed = MAX_SPD;
		return;
	}
	car.curSpeed += ACC_STEP;
}

void Break(Car& car)
{
	if (car.curSpeed < BRK_STEP)
	{
		car.curSpeed = 0;
		return;
	}

	car.curSpeed -= BRK_STEP;
}

int main(void)
{
	Car run99 = { "run99", 100, 0 }; 
	Accel(run99);
	Accel(run99);
	ShowCarState(run99);
	Break(run99);
	ShowCarState(run99);

	Car sped77 = { "sped77", 100, 0 };
	Accel(sped77);
	Break(sped77);
	ShowCarState(sped77);

	system("pause");  // VC++ ������ �ʿ�

	return 0;
}
*/
/*
#include <iostream>
#include <cstring>


using namespace std;

class Car
{

private:
	// ��� ���
	enum // ��� �� ����
	{
		ID_LEN = 20,
		MAX_SPD = 200,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10
	};
	// �ɹ� ����
	char gamerID[ID_LEN];
	int fuelGauge;
	int curSpeed;
public:
	// �ɹ� �Լ�
	void InitMembers(const char* ID, int fuel);
	void ShowCarState();
	void Accel();
	void Break();
};

void Car::InitMembers(const char* ID, int fuel)
{
	strcpy_s(gamerID, ID);  // strcpy�� �������� ���� �Լ��̹Ƿ� strcpy_s ���
	fuelGauge = fuel;
	curSpeed = 0;
}

void Car::ShowCarState()
{
	cout << "������ ID: " << gamerID << endl;
	cout << "���ᷮ: " << fuelGauge << "%" << endl;
	cout << "���� �ӵ�: " << curSpeed << "km/h" << endl << endl;
}

void Car::Accel()
{
	if (fuelGauge <= 0)
		return;
	else
		fuelGauge -= FUEL_STEP;

	if (curSpeed + ACC_STEP >= MAX_SPD)
	{
		curSpeed = MAX_SPD;
		return;
	}
	curSpeed += ACC_STEP;
}

void Car::Break()
{
	if (curSpeed < BRK_STEP)
	{
		curSpeed = 0;
		return;
	}
	curSpeed -= BRK_STEP;
}



int main(void)
{
	Car run99;  // Ŭ���� Car�� ��ü run99
	run99.InitMembers("run99", 100);  // Ŭ������ ����� �ʱ�ȭ�� �и��ؾ� ��
	run99.Accel(); // run99�� �ɹ� �Լ�
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();

	Car sped77;  // Ŭ���� Car�� ��ü sped77
	sped77.InitMembers("sped77", 100);
	sped77.Accel();  // sped77�� �ɹ� �Լ�
	sped77.Break();
	sped77.ShowCarState();

	system("pause");  // VC++ ������ �ʿ�

	return 0;
}
*/