#include <iostream>
using namespace std;



int main()
{
	setlocale(LC_ALL, "");
	FILE* file;
	const char* pathToFile = "data.txt";
	errno_t open = fopen_s(&file, pathToFile, "a+");
	int quantity = 0;
	if (open == 0)
	{
		do
		{
			int code = fgetc(file);
			if (code >= 65 && code < 91 || code >= 97 && code < 123)
			{
				quantity++;
			}
		} while (!feof(file));
		cout << quantity;
		fclose(file);

	}
	else
	{
		cout << "Error";
	}
}