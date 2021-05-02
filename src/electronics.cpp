#include <iostream>
#include <math.h>

using namespace std;

/** Capasitor Table **/
void CapasitorTable()
{
	cout << "Harf\tTolerans\tNumara\tKapasite(pf)" << endl;
	cout << "A\t0.05pf\t\t101\t100pf" << endl;    
	cout << "B\t0.1pf\t\t221\t220pf" << endl;    
	cout << "C\t0.25pf\t\t471\t470pf" << endl;    
	cout << "D\t0.5pf\t\t102\t1000pf" << endl;   
	cout << "E\t0.5%\t\t222\t2200pf" << endl;   
	cout << "F\t1%\t\t472\t4700pf" << endl;   
	cout << "G\t2%\t\t103\t10000pf" << endl;  
	cout << "H\t3%\t\t223\t22000pf" << endl;  
	cout << "J\t5%\t\t473\t47000pf" << endl;  
	cout << "K\t10%\t\t104\t100000pf" << endl; 
	cout << "L\t15%\t\t224\t220000pf" << endl; 
	cout << "M\t20%\t\t474\t470000pf" << endl; 
	cout << "N\t30%\t\t105\t1000000pf" << endl;
	cout << "P\t-0%, +100%\t225\t2200000pf" << endl;
	cout << "S\t-20%, +50%\t475\t4700000pf" << endl;
	cout << "W\t-0%, +200%" << endl;
	cout << "X\t-20%, +40%" << endl;
	cout << "Z\t-20%, +80%" << endl;
}

/** Resistance Table **/
void ResistanceTable()
{
	cout << "Renk\tDeger\tCarpan\t\tTolerans" << endl;
	cout << "Siyah\t0\t10 ust 0\t%20" << endl;
	cout << "Kahve\t1\t10 ust 1\t%1" << endl;
	cout << "Kirmizi\t2\t10 ust 2\t%2" << endl;
	cout << "Turuncu\t3\t10 ust 3\t%3" << endl;
	cout << "Sari\t4\t10 ust 4\t%4" << endl;
	cout << "Yesil\t5\t10 ust 5\t%5" << endl;
	cout << "Mavi\t6\t10 ust 6\t%6" << endl;
	cout << "Mor\t7\t10 ust 7\t%7" << endl;
	cout << "Gri\t8\t10 ust 8\t%8" << endl;
	cout << "Beyaz\t9\t10 ust 9\t%9" << endl;
	cout << "Altin\t-\t10 ust -1\t%5" << endl;
	cout << "Gumus\t-\t10 ust -2\t%10" << endl;
	cout << "Reksiz\t-\t\t\t%20" << endl << endl;
	cout << "Not:\tIlk iki rengin degerleri yan yana yazilir." << endl;
	cout << "Not:\tToleransi %5 Yukari %5 Asagi yani (ornek: 2200 2700 arasi) Tumu icin" << endl;
}

/** Seramic, Film, Polyester Capasitor Calculator (pf) **/
float CapasitorCalc(int cap, int x){return cap * pow(10, x);}

/** Resistance Calculator **/
float ResistanceValue(float x, float a, float b){return x * pow(a,b);}

/** Voltage Divider Calculator **/
float VoltageDivider(float v, float r1, float r2){return (v * r2) / (r1 + r2);}