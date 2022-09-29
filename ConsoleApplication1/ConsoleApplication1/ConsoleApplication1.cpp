
#include <iostream>
using namespace std;
int DP[10] = { 0,1,1,1,1,1,1,1,1,1 };
int length, answer;
const int maxvalue = 1000000000;
int main()
{
	cin >> length;
	for (int i = 1; i < length; i++)
	{
		int tmp[10];
		tmp[0] = DP[1] % maxvalue;
		tmp[1] = (DP[0] + DP[2]) % maxvalue;
		tmp[2] = (DP[1] + DP[3]) % maxvalue;
		tmp[3] = (DP[2] + DP[4]) % maxvalue;
		tmp[4] = (DP[3] + DP[5]) % maxvalue;
		tmp[5] = (DP[4] + DP[6]) % maxvalue;
		tmp[6] = (DP[5] + DP[7]) % maxvalue;
		tmp[7] = (DP[6] + DP[8]) % maxvalue;
		tmp[8] = (DP[7] + DP[9]) % maxvalue;
		tmp[9] = (DP[8]) % maxvalue;
		copy(tmp, tmp + 10, DP);
	}
	for (int i = 0; i < 10; i++)
	{
		answer += DP[i];
		answer %= maxvalue;
	}

	cout << answer%maxvalue;

}
