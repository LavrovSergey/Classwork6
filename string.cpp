#include <iostream>
using namespace std;
void count(char s[]) 
{
	int count = 1;
	if (s[0] == 32)count = 0;
	if (s[0] != 32)count = 1;
	for(int i=1;i<strlen(s)-1;i++)
	{
		if (isalpha(s[i]) && isspace(s[i + 1]))count++;
	}
	cout << "Всего " << count << " слов"<<endl;
	}
void simbols(char s[])
{
	int digit = 0;
	int alpha = 0;
	for (int i = 0; i < strlen(s); i++) {
		if (isdigit(s[i]))digit++;
		if (isalpha(s[i]))alpha++;
	}
	cout << digit << " цифр" << endl;
	cout << alpha << " букв" << endl;
}
void repeat(char s[])
{
	int repeats = 0;
	for (int i = 0; i < strlen(s); i++)
	{
		for(int j=0;j<strlen(s);j++)
		{
			if (isalpha(s[i]) == isalpha(s[j]))
			{
				i++;
				if (isalpha(s[j]) && isspace(s[j + 1]))repeats++;
		    }
		}
	}
	cout << repeats << " слов повторяется" << endl;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите свой текст" << endl;
	char s[256];
	cin.getline(s, 256);
	count(s);
	simbols(s);
	repeat(s);
	
}

