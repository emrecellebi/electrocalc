#include <iostream>
#include <string.h>
#include "electronics.h"
#include "system.h"
#include "mathf.h"

using namespace std;

const char* name = "electrocalc";
const char* version = "0.0.2";
const char* date = "23th May 2020";
const char* telifTR = "Telif Hakki (c) 2018-2020 Emre Celebi";
const char* telifEN = "Copyright (c) 2018-2020 Emre Celebi";

void help()
{
	cout << endl << telifEN << endl << endl;
	cout << "Usage: " << name << " [-options] <parameters>" << endl << endl;
	cout << "   -rc   : Resistance Calculation" << endl;
	cout << "   -cc   : Capacitor Calculation" << endl;
	cout << "   -hcsr : Ultrasonic Sound Wave Calculation" << endl;
	cout << "   -vd   : Voltage Divider Calculation" << endl;
	cout << "   -rt   : Resistance Color Table" << endl;
	cout << "   -ct   : Capasitor Color Table" << endl;
	cout << "   -a    : Addition" << endl;
	cout << "   -m    : Multiplication" << endl;
	cout << "   -d    : Division" << endl;
	cout << "   -s    : Subtraction" << endl;
	cout << "   -ucpl : Usage Command Parameters List" << endl;
	cout << "   -h    : Command line options" << endl;
	cout << "   -v    : Print version number" << endl;
}

void commandList()
{
	cout << endl << "Usage Command Paramers List" << endl << endl;
	cout << "   -rc   : <2 Color Code> <Mul Pow>" << endl;
	cout << "   -cc   : <2 Digit> <End Digit>" << endl;
	cout << "   -hcsr : <Temperature>" << endl;
	cout << "   -vd   : <command --kilohm> <Voltage> <R1> <R2>" << endl;
	cout << "   -a    : <Value 1> <Value 2>" << endl;
	cout << "   -m    : <Value 1> <Value 2>" << endl;
	cout << "   -d    : <Value 1> <Value 2>" << endl;
	cout << "   -s    : <Value 1> <Value 2>" << endl;
	
}

int main(int argc, char** argv)
{
	if(argc <= 1)
	{
		cout << "\n" << name << ": No command specified. Use \'" << name << " -h or --help\' for a detailed command list\n";
		return 0;
	}
	
	/// electrocalc rc
	/// Resistance Calculator
	if(!strcmp(argv[1], "-rc"))
	{
		if(argc <= 2 || argc <= 3)
		{
			ColorPrint("***ERROR***", 12);
			ColorPrintln(" Missing parameters!", 15);
			
			return 0;
		}
		
		cout << endl << "!!!!-------- Resistance Calculator --------!!!!" << endl;
		ColorPrint("Resistance Value: ", 10);
		ColorPrintln(ResistanceValue(strtof(argv[2], NULL), 10, strtof(argv[3], NULL)), 11);
		return 0;
	}
	
	/// electrocalc cc
	/// Capasitor Calculator
	if(!strcmp(argv[1], "-cc"))
	{
		if(argc <= 2 || argc <= 3)
		{
			ColorPrint("***ERROR***", 12);
			ColorPrintln(" Missing parameters!", 15);
			return 0;
		}
		
		cout << endl << "!!!!-------- Capacitor Calculation --------!!!!" << endl;
		ColorPrint("Capacitor Value: ", 10);
		ColorPrint(CapasitorCalc(atoi(argv[2]), atoi(argv[3])), 11);
		ColorPrintln("pf", 10);
		return 0;
	}
	
	/// electrocalc hcsr
	/// Ultrasonic Mesafe Sensörü Hesaplama
	if(!strcmp(argv[1], "-hcsr"))
	{
		if(argc <= 2)
		{
			ColorPrint("***ERROR***", 12);
			ColorPrintln(" Missing parameters!", 15);
			return 0;
		}
		
		cout << "\n!!!!-------- Ultrasonic Sound Wave Calculation --------!!!!\n";
		ColorPrint("\nUltrasonic Distance Sensor Result: ", 10);
		ColorPrint(1 / SecondsToMicroseconds(UnitsOfLength(SoundCalc(strtof(argv[2], NULL)), 2)), 11);
		ColorPrint("us/cm\n", 10);
		return 0;
	}
	
	/// electrocalc vd
	/// Voltage Divider
	if(!strcmp(argv[1], "-vd"))
	{
		if(argc <= 2 || argc <= 5)
		{
			ColorPrint("***ERROR***", 12);
			ColorPrintln(" Missing parameters!", 15);
			return 0;
		}
		
		cout << endl << "!!!!-------- Voltage Divider Calculation --------!!!!" << endl;
		if(!strcmp(argv[2], "--ohm"))
		{
			ColorPrint("Voltage: ", 10);
			ColorPrintln(VoltageDivider(strtof(argv[3], NULL), strtof(argv[4], NULL), strtof(argv[5], NULL)), 11);
			return 0;
		}
		else if(!strcmp(argv[2], "--kilohm"))
		{
			ColorPrint("Voltage: ", 10);
			ColorPrintln(VoltageDivider(strtof(argv[3], NULL), (strtof(argv[4], NULL) * 1000), (strtof(argv[5], NULL) * 1000)), 11);
			return 0;
		}
		else if(!strcmp(argv[2], "--megaohm"))
		{
			ColorPrint("Voltage: ", 10);
			ColorPrintln(VoltageDivider(strtof(argv[3], NULL), (strtof(argv[4], NULL) * 1000000), (strtof(argv[5], NULL) * 1000000)), 11);
			return 0;
		}
	}
	
	/// electrocalc a
	/// Addition
	if(!strcmp(argv[1], "-a"))
	{
		if(argc <= 2 || argc <= 3)
		{
			ColorPrint("***ERROR***", 12);
			ColorPrintln(" Missing parameters!", 15);
			return 0;
		}
		
		ColorPrint(strtof(argv[2], NULL), 14);
		cout << " + ";
		ColorPrint(strtof(argv[3], NULL), 14);
		cout << " = ";
		ColorPrintln(add(strtof(argv[2], NULL), strtof(argv[3], NULL)), 11);
		return 0;
	}
	
	/// electrocalc m
	/// Multiplication
	if(!strcmp(argv[1], "-m"))
	{
		if(argc <= 2 || argc <= 3)
		{
			ColorPrint("***ERROR***", 12);
			ColorPrintln(" Missing parameters!", 15);
			return 0;
		}
		
		ColorPrint(strtof(argv[2], NULL), 14);
		cout << " * ";
		ColorPrint(strtof(argv[3], NULL), 14);
		cout << " = ";
		ColorPrintln(mul(strtof(argv[2], NULL), strtof(argv[3], NULL)), 11);
		return 0;
	}
	
	/// electrocalc d
	/// Division
	if(!strcmp(argv[1], "-d"))
	{
		if(argc <= 2 || argc <= 3)
		{
			ColorPrint("***ERROR***", 12);
			ColorPrintln(" Missing parameters!", 15);
			return 0;
		}
		
		ColorPrint(strtof(argv[2], NULL), 14);
		cout << " / ";
		ColorPrint(strtof(argv[3], NULL), 14);
		cout << " = ";
		ColorPrintln(div(strtof(argv[2], NULL), strtof(argv[3], NULL)), 11);
		return 0;
	}
	
	/// electrocalc s
	/// Subtraction
	if(!strcmp(argv[1], "-s"))
	{
		if(argc <= 2 || argc <= 3)
		{
			ColorPrint("***ERROR***", 12);
			ColorPrintln(" Missing parameters!", 15);
			return 0;
		}
		
		ColorPrint(strtof(argv[2], NULL), 14);
		cout << " - ";
		ColorPrint(strtof(argv[3], NULL), 14);
		cout << " = ";
		ColorPrintln(sub(strtof(argv[2], NULL), strtof(argv[3], NULL)), 11);
		return 0;
	}
	
	/// electrocalc ct
	/// Capasitor Table
	if(!strcmp(argv[1], "-ct"))
	{
		CapasitorTable();
		return 0;
	}
	
	/// hsp rt
	/// Resistance Table
	if(!strcmp(argv[1], "-rt"))
	{
		ResistanceTable();
		return 0;
	}
	
	/// electrocalc h
	/// Help Documentation
	if(!strcmp(argv[1], "-h") || !strcmp(argv[1], "--help"))
	{
		help();
		return 0;
	}
	
	/// electrocalc -ucpl
	/// Command Parameters List
	if(!strcmp(argv[1], "-ucpl"))
	{
		commandList();
		return 0;
	}
	
	/// electrocalc v
	/// Version
	if(!strcmp(argv[1], "-v") || !strcmp(argv[1], "--version"))
	{
		cout << endl << name << " version: " << version << endl;
		cout << "Last revised: " << date << endl;
		cout << "The last version is always avaible" << endl;
		cout << "Created By Emre Celebi" << endl;
		return 0;
	}
	
	ColorPrint("***ERROR***", 12);
	ColorPrintln(" Unrecognized command!", 15);
	
	return 1;
}