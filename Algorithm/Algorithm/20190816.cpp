/*
#include <iostream>
using namespace std;
*/

	/*
	int main(){
	int array[5] = { 9,7,5,3,1 }; // 정수 형태의 배열 선언
	cout << "the array has address:" << array << "\n"; //변수 형태로 주소값 출력
	cout << "Element 0 has address:" << &array[0] << "\n"; // 배열 0번지 형태로 주소값 출력
	cout << *array << endl; // will print 9! / 배열에 대응하는 값 출력
	char name[] = "Jason"; // C-style string (also an array)	글자 수 만큼 동적 할당
	cout << *name << endl; // will print 'J' /name의 시작 주소에 해당되는 값 출력


	//cout << *array << endl;
	int *ptr = array; //배열이 가리키는 포인터를 지정할 수 있다.(포인터가 같은 타입일 경우)
	cout << *ptr << endl; // == *array


	cout << sizeof(array) << endl;
	}
	*/
/*
	class CIntArray
	{
		public:
			//생성자도 일종의 함수이므로 오버로딩이 가능
			CIntArray(int nSize)//생성자 형태로 선언
			{
				m_pnData = new int[nSize]; //배열 크기 할당
				memset(m_pnData, 0, sizeof(int) * nSize); //0이라는 값을 넣겟다

				//memset : 메모리 내용을 원하는 크기만큼 특정 값으로 설정할 수 있음
			}
			~CIntArray() // 소멸자, 반환 형식은 개발자가 선언을 할 수 없음
			{
				delete m_pnData;//메모리 해제를 요청함   new / delete 메모리 해제 요청
			}
			//상수형 참조인 경우의 배열 연산자
			int operator[](int nIndex)const
			{
				cout << "operator[] const" << endl;
				return m_pnData[nIndex];
			}

			//일반적인 배열 연산자
			int& operator[](int nIndex)
			{
				cout << "operator[]" << endl;
				return m_pnData[nIndex];
			}
		private:
			int* m_pnData; //배열 메모리
			int m_nSize; //배열 요소의 개수
	};
	//사용자 코드
	void TestFunc(const CIntArray& arParam)
	{
		cout << "TestFunc()" << endl;
		cout << arParam[3] << endl;//상수형 참조이므로 'operator[](int nIndex)const'를 호출
	}


int main(){

	CIntArray arr(5);
	for (int i = 0; i < 5; ++i) {
		arr[i] = i * 10;
	}
	TestFunc(arr);


	return 0;
}
*/

