#include <iostream>
#include <Windows.h>

class Counter {
public:
	int count=1;
	int countAdd() {
		count++;
		return count;
	}
	int countSubtract() {
		count--;
		return count;
	}	
};

int main() {
	Counter count;
	std::string question;	
	char keyCode;

	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    std::cout << "�� ������ ������� ��������� �������� ��������? ������� �� ��� ���: ";
	std::cin >> question;
	if (question == "��")
	{
	 std::cout << "������� ��������� �������� ��������: ";
	 std::cin  >> count.count;			
	}else {
		std::cout << "��������� �������� ��������: " << count.count << std::endl;
	}

	while (true)
	{		
		std::cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
		std::cin >> keyCode;

		if (keyCode == '+') {
			count.countAdd();
			continue;
		}

		if (keyCode == '-') {
			count.countSubtract();
			continue;
		}

		if (keyCode == '=') {
			std::cout << count.count << std::endl;
			continue;
		}		

		if (keyCode == '�') {
			std::cout << "�� ��������!" << std::endl;
			return 0;
		}
	}	
}
