#include<bits/stdc++.h>
using namespace std;
const int SIZE = 10;
string S[SIZE];

int main()
{
	int I, J;
	for (I = 0; I < 4; I++)
		cin >> S[I];
int f = 0;
	for (I = 0; I < 4; I++)
	{
		if (S[I][0] == 'x' && S[I][1] == 'x' && S[I][2] == '.')
			f = 1;
		if (S[I][1] == 'x' && S[I][3] == 'x' && S[I][2] == '.')
			f = 1;
		if (S[I][1] == 'x' && S[I][2] == 'x' && S[I][3] == '.')
			f = 1;
		if (S[I][1] == 'x' && S[I][2] == 'x' && S[I][0] == '.')
			f = 1;
		if (S[I][0] == 'x' && S[I][2] == 'x' && S[I][1] == '.')
			f = 1;
		if (S[I][2] == 'x' && S[I][3] == 'x' && S[I][1] == '.')
			f = 1;
	}

	if (f == 1)
	{
		cout << "YES\n";
		return 0;
	}

	f = 0;
	for (I = 0; I < 4; I++)
	{
		if (S[1][I] == 'x' && S[2][I] == 'x' && S[0][I] == '.')
			f = 1;
		if (S[0][I] == 'x' && S[2][I] == 'x' && S[1][I] == '.')
			f = 1;
		if (S[2][I] == 'x' && S[3][I] == 'x' && S[1][I] == '.')
			f = 1;
		if (S[1][I] == 'x' && S[3][I] == 'x' && S[2][I] == '.')
			f = 1;
		if (S[0][I] == 'x' && S[1][I] == 'x' && S[2][I] == '.')
			f = 1;
		if (S[1][I] == 'x' && S[2][I] == 'x' && S[3][I] == '.')
			f = 1;
	}

	if (f == 1)
	{
		cout << "YES\n";
		return 0;
	}


	f = 0;
	if (S[0][2] == 'x' && S[1][1] == 'x' && S[2][0] == '.')
		f = 1;
	if (S[0][2] == 'x' && S[2][0] == 'x' && S[1][1] == '.')
		f = 1;
	if (S[1][1] == 'x' && S[2][0] == 'x' && S[0][2] == '.')
		f = 1;



	if (S[1][2] == 'x' && S[0][3] == 'x' && S[2][1] == '.')
		f = 1;
	if (S[0][3] == 'x' && S[2][1] == 'x' && S[1][2] == '.')
		f = 1;
	if (S[1][2] == 'x' && S[2][1] == 'x' && S[0][3] == '.')
		f = 1;


	if (S[1][2] == 'x' && S[2][1] == 'x' && S[3][0] == '.')
		f = 1;
	if (S[1][2] == 'x' && S[3][0] == 'x' && S[2][1] == '.')
		f = 1;
	if (S[3][0] == 'x' && S[2][1] == 'x' && S[1][2] == '.')
		f = 1;


	if (S[1][3] == 'x' && S[2][2] == 'x' && S[3][1] == '.')
		f = 1;
	if (S[1][3] == 'x' && S[3][1] == 'x' && S[2][2] == '.')
		f = 1;
	if (S[3][1] == 'x' && S[2][2] == 'x' && S[1][3] == '.')
		f = 1;


	if (S[3][2] == 'x' && S[2][1] == 'x' && S[1][0] == '.')
		f = 1;
	if (S[1][0] == 'x' && S[3][2] == 'x' && S[2][1] == '.')
		f = 1;
	if (S[1][0] == 'x' && S[2][1] == 'x' && S[3][2] == '.')
		f = 1;



	if (S[1][2] == 'x' && S[2][3] == 'x' && S[0][1] == '.')
		f = 1;
	if (S[0][1] == 'x' && S[2][3] == 'x' && S[1][2] == '.')
		f = 1;
	if (S[1][2] == 'x' && S[0][1] == 'x' && S[2][3] == '.')
		f = 1;


	if (S[1][1] == 'x' && S[2][2] == 'x' && S[0][0] == '.')
		f = 1;
	if (S[0][0] == 'x' && S[2][2] == 'x' && S[1][1] == '.')
		f = 1;
	if (S[0][0] == 'x' && S[1][1] == 'x' && S[2][2] == '.')
		f = 1;

	if (S[2][2] == 'x' && S[3][3] == 'x' && S[1][1] == '.')
		f = 1;
	if (S[1][1] == 'x' && S[3][3] == 'x' && S[2][2] == '.')
		f = 1;
	if (S[1][1] == 'x' && S[2][2] == 'x' && S[3][3] == '.')
		f = 1;

	if (f == 1)
	{
		cout << "YES\n";
		return 0;
	}

	cout << "NO\n";

	return 0;
}
