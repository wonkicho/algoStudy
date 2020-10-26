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

	system("pause");  // VC++ 에서만 필요
	return 0;
}
*/

/*
//C스타일
#include <iostream>
#include <string.h>

using namespace std;

char* MakeStr(int len)
{
	char* str = (char*)malloc(sizeof(char) * len);//메모리 할당
	return str;
}


int main(void)
{
	char* mystr = MakeStr(20);

	strcpy_s(mystr, 20, "I am so happy.");  // strcpy는 안전하지 않은 함수이므로 strcpy_s 사용
	cout << mystr << endl;

	free(mystr); //메모리해제

	system("pause");  // VC++ 에서만 필요

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

	system("pause");  // VC++ 에서만 필요

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

struct Car //구조체 선언
{
	char gamerID[ID_LEN]; 
	int fuelGauge;
	int curSpeed;

};

void ShowCarState(const Car& car) //구조체 변수의 속성값
{
	cout << "소유자 ID: " << car.gamerID << endl;
	cout << "연료량: " << car.fuelGauge << "%" << endl;
	cout << "현재 속도: " << car.curSpeed << "km/h" << endl << endl;
}

void Accel(Car& car)
{
	if (car.fuelGauge <= 0) //구조체 멤버 변수에 대해
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

	system("pause");  // VC++ 에서만 필요

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
	// 멤버 상수
	enum // 상수 값 나열
	{
		ID_LEN = 20,
		MAX_SPD = 200,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10
	};
	// 맴버 변수
	char gamerID[ID_LEN];
	int fuelGauge;
	int curSpeed;
public:
	// 맴버 함수
	void InitMembers(const char* ID, int fuel);
	void ShowCarState();
	void Accel();
	void Break();
};

void Car::InitMembers(const char* ID, int fuel)
{
	strcpy_s(gamerID, ID);  // strcpy는 안전하지 않은 함수이므로 strcpy_s 사용
	fuelGauge = fuel;
	curSpeed = 0;
}

void Car::ShowCarState()
{
	cout << "소유자 ID: " << gamerID << endl;
	cout << "연료량: " << fuelGauge << "%" << endl;
	cout << "현재 속도: " << curSpeed << "km/h" << endl << endl;
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
	Car run99;  // 클래스 Car의 객체 run99
	run99.InitMembers("run99", 100);  // 클래스는 선언과 초기화를 분리해야 함
	run99.Accel(); // run99의 맴버 함수
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();

	Car sped77;  // 클래스 Car의 객체 sped77
	sped77.InitMembers("sped77", 100);
	sped77.Accel();  // sped77의 맴버 함수
	sped77.Break();
	sped77.ShowCarState();

	system("pause");  // VC++ 에서만 필요

	return 0;
}
*/