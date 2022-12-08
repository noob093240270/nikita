
#include <iostream>
#include <Windows.h>
#include "monthlyReport.h"
#include "MonthRecord.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	MonthlyReport month1("item_name,is_expense,quantity,sum_of_one\nКоньки,TRUE,2,2000\nЗаточка коньков,TRUE,50,200\nАренда коньков,FALSE,1000,180\nПродажа билетов,FALSE,1500,300\nПродажа кофе,FALSE,1200,150");
	month1.showAll();
	std::cout << month1.getIncome() << std::endl; // сумма доходов
	std::cout << month1.getOutcome() << std::endl; // сумма расходов 

}

