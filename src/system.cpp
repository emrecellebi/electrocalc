#include <iostream>
#include <windows.h>

using namespace std;

HANDLE hand = GetStdHandle(STD_OUTPUT_HANDLE);

void ColorPrint(const char* str, int color)
{
	SetConsoleTextAttribute(hand, color);
	cout << str;
	SetConsoleTextAttribute(hand, 7);
}

void ColorPrint(char str, int color)
{
	SetConsoleTextAttribute(hand, color);
	cout << str;
	SetConsoleTextAttribute(hand, 7);
}

void ColorPrint(int str, int color)
{
	SetConsoleTextAttribute(hand, color);
	cout << str;
	SetConsoleTextAttribute(hand, 7);
}

void ColorPrint(uint64_t str, int color)
{
	SetConsoleTextAttribute(hand, color);
	cout << str;
	SetConsoleTextAttribute(hand, 7);
}

void ColorPrint(double str, int color)
{
	SetConsoleTextAttribute(hand, color);
	cout << str;
	SetConsoleTextAttribute(hand, 7);
}

void ColorPrint(float str, int color)
{
	SetConsoleTextAttribute(hand, color);
	cout << str;
	SetConsoleTextAttribute(hand, 7);
}

void ColorPrint(long double str, int color)
{
	SetConsoleTextAttribute(hand, color);
	cout << str;
	SetConsoleTextAttribute(hand, 7);
}

void ColorPrint(long long str, int color)
{
	SetConsoleTextAttribute(hand, color);
	cout << str;
	SetConsoleTextAttribute(hand, 7);
}

void ColorPrintln(const char* str, int color)
{
	SetConsoleTextAttribute(hand, color);
	cout << str << endl;
	SetConsoleTextAttribute(hand, 7);
}

void ColorPrintln(char str, int color)
{
	SetConsoleTextAttribute(hand, color);
	cout << str << endl;
	SetConsoleTextAttribute(hand, 7);
}

void ColorPrintln(int str, int color)
{
	SetConsoleTextAttribute(hand, color);
	cout << str << endl;
	SetConsoleTextAttribute(hand, 7);
}

void ColorPrintln(uint64_t str, int color)
{
	SetConsoleTextAttribute(hand, color);
	cout << str << endl;
	SetConsoleTextAttribute(hand, 7);
}

void ColorPrintln(double str, int color)
{
	SetConsoleTextAttribute(hand, color);
	cout << str << endl;
	SetConsoleTextAttribute(hand, 7);
}

void ColorPrintln(float str, int color)
{
	SetConsoleTextAttribute(hand, color);
	cout << str << endl;
	SetConsoleTextAttribute(hand, 7);
}

void ColorPrintln(long double str, int color)
{
	SetConsoleTextAttribute(hand, color);
	cout << str << endl;
	SetConsoleTextAttribute(hand, 7);
}

void ColorPrintln(long long str, int color)
{
	SetConsoleTextAttribute(hand, color);
	cout << str << endl;
	SetConsoleTextAttribute(hand, 7);
}