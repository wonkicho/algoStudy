//#include <string>
//#include <vector>
//#include <iostream>
//using namespace std;
//
//string solution(string p) {
//	if (p.length() == 0)
//		return "";//�Է��� �� ���ڿ��� ���, �� ���ڿ��� ��ȯ
//	int o = 0; 
//	int x = 0;
//	for (int i = 0; i < p.length(); i += 2) {
//		if (p[i] == '(') {
//			o++;
//		}else {
//			x++;
//		}
//		if (p[i+1] == ')') {
//			o++;
//		}else {
//			x++;
//		}
//
//		if (o == x) {//�ùٸ� ��ȣ
//			
//		}
//		else {
//			string em = "(";//4-1
//			em += solution();//4-2
//			em += ')';//4-3
//			for (int j = 0; j < i + 1; j++) {//4-4
//				if (p[j] == ')') {
//					em += ')';
//				}
//				else {
//					em += '(';
//				}
//
//			}
//			return em;//4-5
//			
//		}
//
//	}
//
//
//
//
//	
//}
//
