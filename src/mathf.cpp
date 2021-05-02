#include <math.h>

/** Mod **/
int mod(int a, int b){return a % b;}
/** Addition **/
float add(float a, float b){return a + b;}
/** Multipcation **/
float mul(float a, float b){return a * b;}
/** Division **/
float div(float a, float b){return a / b;}
/** Subraction **/
float sub(float a, float b){return a - b;}

/** Ultra Sonic Mesafe Sensörü **/
float SoundCalc(float temperature)
{
	// 331 0 santigrat derecedeki sesin hızı
	// M/S Cinsinden verir.
	return 331 * sqrt(1 + (temperature / 273));
}

float UnitsOfLength(float length, int mul){return length * pow(10, mul);}
float SecondsToMicroseconds(float seconds){return seconds / 1000000;}