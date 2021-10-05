##
<h1 align="center">DasPro Assignments</h1>

<div align="center">
	<a href="https://t.me/ItsMeAsada">
        <img src="https://img.shields.io/badge/Chat-Telegram-blue" alt="telegram">
    </a>
    <a href="https://github.com/Asadaaaaa">
        <img src="https://img.shields.io/badge/Profile-Github-lightgrey" alt="pfgh">
    </a>
    <a href="https://upi.edu">
        <img src="https://img.shields.io/badge/College-UPI-red" alt="poggit-ci">
    </a>
    <br><br>
    ✔️ Menu List
    <br>
    ✔️ Menu Paging
    <br>
    ✔️ Error Info Exception
    <br>
    ✔️ Warn Message
    <br>
    
</div>

<div align="center">
	<h2>How to setup?</h2>
</div>

 - <h3>Step:</h3>
 1. Download this Repo
 2. Extract the zip file
 3. Compile with g++
 4. Double click to execute exe file or type then file name in cmd the enter

<div align="center">
	<h2>Source Code</h2>
</div>
<h3>Main.cpp:</h3>

```c++
#include <iostream>
#include <string>

using namespace std;

// Nama / Author: Muhammad Mikail Asada
// NIM: 2109708
// RPL 2021

int main() {
	// Menu Variable
	string warn, input, word1, word2, word3;
	float num1 = 0, num2 = 0, num3 = 0, num4 = 0;
	
	// MAIN MENU PAGE 1
	MAIN_MENU: {
		system("cls");
		cout << "=-=-= Menu Utama =-=-=" << endl;
		cout << "  1). Nama dan NIM" << endl;
		cout << "  2). Penjumlahan 2 bilangan" << endl;
		cout << "  3). Menghitung Volume Bola" << endl;
		cout << "  4). Conversi Menit ke Detik" << endl;
		cout << "  5). Menghitung jumlah string" << endl;
		cout << endl << "         (1/2)         " << endl;
		cout << "=-=-= ( ) (-) (>) =-=-=" << endl;
		
		if(warn != "") {
			cout << endl << "Peringatan: " << warn;
			warn = "";
		}
		cout << endl << "> Input: ";
		getline(cin, input);
		if(input == "-") {
			system("cls");
			
			return 0;
		} else if(input == ">") {
			
			goto MAIN_MENU_2;
		} else if(input == "1") {
			
			goto MENU_SATU;
		} else if(input == "2") {
			
			goto MENU_DUA;
		} else if(input == "3") {
			
			goto MENU_TIGA;
		} else if(input == "4") {
			
			goto MENU_EMPAT;
		} else if(input == "5") {
			
			goto MENU_LIMA;
		} else {
			warn = "Menu tidak ditemukan!";
			goto MAIN_MENU;
		}
	}
	
	// Download This Repo to see more the source code
```
