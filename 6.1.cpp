#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}
void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}
int S(int* a, const int size, int s, int k, int i, const int Low, const int High)
{

	if (a[i] > 0 || !(a[i] % 3 == 0)) {
		s = s + a[i];
		k++;
		a[i] = 0;
	}
	cout << endl;
	cout << "s=" << s << endl;
	cout << "k=" << k << endl;
}
int main()
{

	srand((unsigned)time(NULL)); // ініціалізація генератора випадкових чисел
	const int n = 22;
	int a[n];
	int Low = -10;
	int High = 35;
	int i = 0;
	int s = 0;
	int k = 0;

	Create(a, n, Low, High);
	Print(a, n);
	S(a, n, Low, High, s, k, i);
	return 0;
}