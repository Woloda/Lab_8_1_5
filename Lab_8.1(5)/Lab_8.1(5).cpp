#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char lit_r[20] = "ssqSQfqsSWfs";
	cout << "Сфомований літерний рядок: " << endl << endl << lit_r << endl << endl;
	char para[] = "SQ";
	char para1[] = "QS";

	bool b = false;
	if (strstr(lit_r, para))
		b = true;
	if (strstr(lit_r, para1))
		b = true;
	if (b)
		cout << "Так є серед цих символів пара сусідніх букв “SQ” або ”QS”." << endl;
	else
		cout << "Ні не має серед цих символів пара сусідніх букв “SQ” або ”QS”." << endl;

	return 0;
}