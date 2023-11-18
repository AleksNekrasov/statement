// statement.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
int main()
{
	std::string donate;                 // временная строка для донатов
	std::string top_donate = "";        // переменная для топ донатер 
	int result = 0;                     // сумма всех денег
	int temp = 0;                       // временная переменая
	

	std::string name;
	std::string surname;
	int money = 0;
	std::string data;

	std::ifstream mainstream;
	mainstream.open("C:\\Users\\user\\Desktop\\bank.txt");

	while(!mainstream.eof())
	{
		std::getline(mainstream, donate);
		std::stringstream line_stream(donate);   //поток лайн стрим для работы
		line_stream >> name >> surname >> money >> data;

		result += money;

		if (money > temp)
		{
			temp = money;
			top_donate = donate;
		}
	}
	std::cout << "\ntotal amount of funds paid: " << result << " \nperson with the maximum amount of payments: " << top_donate;
	mainstream.close();

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
