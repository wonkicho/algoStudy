/*
#include <iostream>
#include <string>

using namespace std;

int solution(string s) {
	int len = s.length(); // 문자열 길이
	int answer = 0;

	for (int w = 1; w <=len/2 ; w++)//w 자르는 단위
	{
		int i = 0, count = 0;
		while(i < len)
		{
			int equal = 0;
			int next = 0;

			if (i + w > len) {
				count = count + len - i;
				break;
			}
			for (int j = i + w; j < len; j += w) {
				int t;
				for (t = 0; t < w; t++) {
					if (s[i + t] != s[j + t]) {
						break;
					}

				}
				if (t == w) {
					equal++;
				}
				else {
					next = j;
					break;
				}
			}
			if (equal + 1 < 10) {
				count += w + 1;
			}
			else if (equal + 1 < 100) {
				count += w + 2;
			}
			else if(equal + 2 < 1000){
				count += w + 3;
			}
			else {
				count += 4;
			}
			if (next == 0) {
				break;
			}
			i = next;
		}
		if (count < answer) {
			answer = count;
		}
	}


	return answer;
}
*/