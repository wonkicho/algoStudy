/*
#include <iostream>
using namespace std;
*/

	/*
	int main(){
	int array[5] = { 9,7,5,3,1 }; // ���� ������ �迭 ����
	cout << "the array has address:" << array << "\n"; //���� ���·� �ּҰ� ���
	cout << "Element 0 has address:" << &array[0] << "\n"; // �迭 0���� ���·� �ּҰ� ���
	cout << *array << endl; // will print 9! / �迭�� �����ϴ� �� ���
	char name[] = "Jason"; // C-style string (also an array)	���� �� ��ŭ ���� �Ҵ�
	cout << *name << endl; // will print 'J' /name�� ���� �ּҿ� �ش�Ǵ� �� ���


	//cout << *array << endl;
	int *ptr = array; //�迭�� ����Ű�� �����͸� ������ �� �ִ�.(�����Ͱ� ���� Ÿ���� ���)
	cout << *ptr << endl; // == *array


	cout << sizeof(array) << endl;
	}
	*/
/*
	class CIntArray
	{
		public:
			//�����ڵ� ������ �Լ��̹Ƿ� �����ε��� ����
			CIntArray(int nSize)//������ ���·� ����
			{
				m_pnData = new int[nSize]; //�迭 ũ�� �Ҵ�
				memset(m_pnData, 0, sizeof(int) * nSize); //0�̶�� ���� �ְٴ�

				//memset : �޸� ������ ���ϴ� ũ�⸸ŭ Ư�� ������ ������ �� ����
			}
			~CIntArray() // �Ҹ���, ��ȯ ������ �����ڰ� ������ �� �� ����
			{
				delete m_pnData;//�޸� ������ ��û��   new / delete �޸� ���� ��û
			}
			//����� ������ ����� �迭 ������
			int operator[](int nIndex)const
			{
				cout << "operator[] const" << endl;
				return m_pnData[nIndex];
			}

			//�Ϲ����� �迭 ������
			int& operator[](int nIndex)
			{
				cout << "operator[]" << endl;
				return m_pnData[nIndex];
			}
		private:
			int* m_pnData; //�迭 �޸�
			int m_nSize; //�迭 ����� ����
	};
	//����� �ڵ�
	void TestFunc(const CIntArray& arParam)
	{
		cout << "TestFunc()" << endl;
		cout << arParam[3] << endl;//����� �����̹Ƿ� 'operator[](int nIndex)const'�� ȣ��
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

