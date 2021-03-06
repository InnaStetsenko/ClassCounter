//-Реализовать класс Counter, описывающий цифровой счетчик.
//Одним из полей этого класса будет переменная с ограниченным диапазоном,
//значение которой сбрасывается, если её целочисленное значение достигает 
//определённого максимума(например, переменная current может принимать значения 
//	в диапазоне от 0 до 99999).В качестве реального примера такого счётчика 
//	представьте счётчик километража в автомобиле, или же домашний счётчик по учёту
//	расхода воды или электроэнергии.Обязательные поля : текущее значение счётчика, 
//	максимальное значение диапазона, минимальное значение диапазона, шаг прироста.
//	Обязательные методы : конструктор без параметров, несколько видов конструкторов
//	с параметрами, увеличение текущего значения счётчика на 1, увеличение значения
//	на заданную величину(шаг прироста), сброс(обнуление) счётчика, установка минимального
//	и максимального значений.
#include "Counter.h"


int main()
{
	Counter A;
	A.Print();
	
	Counter B(200);
	B.Print();
	Counter C(5,5);
	B.Print();
	
	B.IncreaseByOne();
	B.Print();
	B.SettingMinValue();
	B.SettingMaxValue();
	
}