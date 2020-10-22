//#include <iostream>
//#include <string>
//using namespace std;
//int stack[101];
//int top = -1;
//
//void push(int x) {
//	stack[++top] = x;
//}
//
//int pop() {
//	return stack[top--];
//}
//
//int main() {
//	int num, n; // 숫자, 진수
//	string hex = "0123456789ABCDEF";
//	cin >> num >> n;
//	while (num > 0)
//	{
//		push(num % n);
//		num = num/n;
//	}
//
//	
//	while (top != -1)
//	{	
//		if (n == 16)
//			cout <<"0x"<<hex[pop()];
//		else if (n == 2)
//			cout << pop();
//	}
//
//	return 0;
//}