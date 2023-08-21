#include <iostream>
#include "Tovar.h"
#include "Electronics.h"
#include "Food.h"
using namespace std;

int main()
{
	int size_massiv = 5;
	Tovar** tovars = new Tovar * [size_massiv];
	int check;
	string temp = "";
	int temp1 = 0;
	int check_position = NULL;
	int check_add = 0;
	cout << "Welcome to Wolmart!\nAdd new item.\n";
	do
	{
		cout << "\t1-Electronics.\n\t2-Food.\n\t3-Show all items.\n\t4-Exit\n";
		cout << "Make a choice: ";
		cin >> check;
		switch (check)
		{
		case 1:
			while(true)
			{
				Tovar* Electrics = new Electronics();
				cout << "Enter name marks phone: " << endl;
				cin >> temp;
				Electrics->Setname(temp);
				cout << "Enter price phone: " << endl;
				cin >> temp1;
				Electrics->Setprice(temp1);
				cout << "Enter count in sklad: " << endl;
				cin >> temp1;
				Electrics->Setcount(temp1);
				tovars[check_position] = Electrics;
				cout << "Add more?(1-YES/0-NO)\n";
				cin >> check_add;
				if (check_add == 1)
				{
					check_position++;
					continue;
				}
				else
				{
					check_position++;
					break;
				}
				cout << endl << endl;
			}
			break;
		case 2:
			while (true)
			{
				Tovar* food = new Food();
				cout << "Enter name food: " << endl;
				cin >> temp;
				food->Setname(temp);
				cout << "Enter price food: " << endl;
				cin >> temp1;
				food->Setprice(temp1);
				cout << "Enter count in sklad: " << endl;
				cin >> temp1;
				food->Setcount(temp1);
				cout << endl << endl;
				tovars[check_position] = food;
				cout << "Add more?(1-YES/0-NO)\n";
				cin >> check_add;
				if (check_add == 1)
				{
					check_position++;
					continue;
				}
				else
				{
					check_position++;
					break;
				}
				cout << endl << endl;
			}
			break;
		case 3:
			for (int i = 0; i < size_massiv; i++)
			{
				cout << endl << endl;
				cout << "Name item: " << tovars[i]->Getname() << endl;
				cout << "Price item: " << tovars[i]->Getprice() << endl;
				cout << "Count item: " << tovars[i]->Getcount() << endl << endl;
			}
			break;
		case 4:
			return false;
			break;
		default:
			break;
		}
	} while (true);
}