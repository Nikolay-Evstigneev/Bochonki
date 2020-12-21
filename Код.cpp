#include <string>
#include <iostream>
#include <ctime>
#include <random>
#include <vector>
using namespace std;
int main()
{
	int n;
	vector <int> v;
	setlocale(LC_ALL, "Russian");
	cout << "Введите количество бочонков: ";
	cin >> n;
	int i = 0;
	int num = 0;
	string k;
	while (i < n) 
	{
		cout << "Чтоб вытащить бочонок, нажмите любую кнопку: ";
		cin >> k;
		do 
		{
			num = rand() % n;
		} while (find(v.begin(), v.end(), num) != v.end());
		v.push_back(num);
		cout << "Число на бочонке: " << num + 1 << endl;
		i++;
	}
	cout << "Бочонки кончились";
}
