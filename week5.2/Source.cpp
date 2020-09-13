#include <iostream>
#include <string.h>
using namespace std;


int getLastIndex(char s[], char c)
{
	int length;
	int i; 
	length = strlen(s);


	for (i = (length - 1); i >= 0; i--)
	{
		if (s[i] == c)
			return i;
	}
	return -1;
}


int main()
{
	char str[100]; 
	char ch; 
	int index;  

	cout << "Enter string: ";

	cin.getline(str, 100);

	cout << "Enter character: ";
	cin >> ch;

	index = getLastIndex(str, ch);

	
	if (index != -1)
		cout << "Last index of  " << ch << "  is: " << index+1 << endl;
	else
		cout  << ch << " is not found " << endl;

}