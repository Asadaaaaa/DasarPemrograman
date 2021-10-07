#include <iostream>

using namespace std;

int main() {
	string input, warn, word1, word2, word3;
	float float1 = 0, float2 = 0, float3 = 0;
	int int1 = 0, int2 = 0, int3 = 0;
	
	// MAIN MENU
	MAIN_MENU: {
		system("cls");
		cout << "=-=-= MAIN UTAMA =-=-=" << endl;
		cout << "  1. Honor Freelance" << endl;
		cout << "  2. Bilangan Prima" << endl;
		cout << "  3. Login Form" << endl;
		if(warn != "") {
			cout << "Peringatan " << warn << endl;
			
			warn = "";
		}
		
		cout << endl << "> Input Menu: ";
		getline(cin, input);
		if(input == "1") {
			
			goto MENU_SATU;
		} else if(input == "2") {
			
			goto MENU_DUA;
		} else if(input == "3") {
			
			goto MENU_TIGA;
		} else {
			warn = "Maaf, Menu tidak ditemukan";
			
			goto MAIN_MENU;
		}
	}
	
	// MENU SATU
	MENU_SATU: {
		system("cls");
		cout << "=-=-= MENU SATU =-=-=" << endl;
		cout << "  Task: Tentukan honor freelance" << endl;
		if(warn != "") {
			cout << "Peringatan: " << warn << endl;
			warn = "";
		}
		
		if(word1 == "") {
			cout << endl << "> Nama Pegawai: ";
			getline(cin, input);
			if(input == "") {
				warn = "Maaf, Nama pegawai tidak boleh kosong!";
			
				goto MENU_SATU;
			} else if(input.length() < 3) {
				warn = "Maaf, Nama pegawai minimal 3 karakter!";
			
				goto MENU_SATU;
			}
			word1 = input;
			
			goto MENU_SATU;
		}
		cout << endl << "  Nama Pegawai: " << word1 << endl;
		
		if(int1 == 0) {
			cout << endl << "> NIP: ";
			getline(cin, input);
			if(input == "") {
				warn = "Maaf, Mohon isi NIP dengan benar!";
			
				goto MENU_SATU;
			}
			try{
				int1 = stoi(input);
			} catch(exception &err) {
				warn = "Maaf, Mohon isi NIP dengan benar!";
				int1 = 0;
			
				goto MENU_SATU;
			}
			if(int1 < 0) {
				warn = "Maaf, Mohon isi NIP dengan benar!";
				int1 = 0;
				
				goto MENU_SATU;
			}
			
			goto MENU_SATU;
		}
		cout << "  NIP: " << int1 << endl;
		
		if(int2 == 0) {
			cout << endl << "> Jam Masuk: ";
			getline(cin, input);
			if(input == "") {
				warn = "Maaf, Mohon isi Jam Masuk dengan benar!";
			
				goto MENU_SATU;
			}try{
				int2 = stoi(input);
			} catch(exception &err) {
				warn = "Maaf, Mohon isi Jam Masuk dengan benar!";
				int2 = 0;
			
				goto MENU_SATU;
			}
			if(int2 <= 0) {
				warn = "Maaf, Mohon isi Jam Masuk dengan benar!";
				int2 = 0;
			
				goto MENU_SATU;
			}
			
			goto MENU_SATU;
		}
		cout << "  Jam Masuk: " << int2 << endl;
		
		if(int2 >= 0 && int2 <= 7) {
			int2 = 7;
		} else if(int2 >= 13) {
			int2 = 15;
		}
		int3 = 17.00 - int2;
		cout << endl << "Hasil: " << word1 << ", Total jam kerja anda hari ini adalah " << int3 << " Jam." << endl;
		cout << "Maka honor anda hari ini adalah Rp. " << int3*80000 << ",00.";
		
		cout << endl << "> Kembali ke menu utama? [Y/n]: ";
		getline(cin, input);
		if(input == "y" || input == "Y") {
			int1 = 0;
			int2 = 0;
			int3 = 0;
			word1 = "";
			
			goto MAIN_MENU;
		} else if(input == "n" || input == "N") {
			system("cls");
			
			return 0;
		} else {
			
			goto MENU_SATU;
		}
	}
	
	// MENU DUA
	MENU_DUA: {
		system("cls");
		cout << "=-=-= MENU DUA =-=-=" << endl;
		cout << "  Task: Tentukan bilangan prima dari input pengulangan" << endl;
		if(warn != "") {
			cout << "Peringatan: " << warn << endl;
			warn = "";
		}
		
		if(int1 == 0) {
			cout << endl << "> Nilai n: ";
			getline(cin, input);
			if(input == "") {
				warn = "Maaf, Mohon isi nilai n dengan benar!";
			
				goto MENU_DUA;
			}
			try{
				int1 = stoi(input);
			} catch(exception &err) {
				warn = "Maaf, Mohon isi nilai n dengan benar!";
				int1 = 0;
			
				goto MENU_DUA;
			}
			if(int1 < 0) {
				warn = "Maaf, Mohon isi nilai n dengan benar!";
				int1 = 0;
				
				goto MENU_DUA;
			}
			
			goto MENU_DUA;
		}
		cout << "  Nilai n: " << int1 << endl;
		
		for(int i = 1; i <= int1; i++){
			if (i == 2 || i == 3) {
				cout << "  PRIMA";
			} else if (!(i <= 1 || i % 2 == 0 || i % 3 == 0)){
				cout << "  PRIMA";
			} else {
				cout << "  " << i;
			}
			cout << endl;
		}
		
		cout << endl << "> Kembali ke menu utama? [Y/n]: ";
		getline(cin, input);
		if(input == "y" || input == "Y") {
			int1 = 0;
			
			goto MAIN_MENU;
		} else if(input == "n" || input == "N") {
			system("cls");
			
			return 0;
		} else {
			
			goto MENU_SATU;
		}
	}
	
	// MENU TIGA
	MENU_TIGA: {
		system("cls");
		cout << "=-=-= MENU TIGA =-=-=" << endl;
		cout << "  Task: Tentukan bilangan prima dari input pengulangan" << endl;
		if(warn != "") {
			cout << "Peringatan: " << warn << endl;
			warn = "";
		}
		
		if(int1 < 3) {
			if(word1 == "") {
				cout << endl << "> Username: ";
				getline(cin, input);
				if(input != "RPLJuara") {
					warn = "Maaf, Username salah!";
					int1++;
				
					goto MENU_TIGA;
				}
				word1 = input;
				
				goto MENU_TIGA;
			}
			cout << endl << "  Username: " << word1 << endl;
			
			if(word2 == "") {
				cout << endl << "> Password: ";
				getline(cin, input);
				if(input != "YoYoAyo") {
					warn = "Maaf, Password salah!";
					int1++;
				
					goto MENU_TIGA;
				}
				word2 = input;
				
				goto MENU_TIGA;
			}
			cout << "  Password: *******" << endl;
			
			cout << endl << "Hasil: Login Success" << endl;
		} else {
			cout << endl << "Maaf, kesempatan anda sudah habis" << endl;
		}
		
		cout << endl << "> Kembali ke menu utama? [Y/n]: ";
		getline(cin, input);
		if(input == "y" || input == "Y") {
			int1 = 0;
			word1 = "";
			word2 = "";
			
			goto MAIN_MENU;
		} else if(input == "n" || input == "N") {
			system("cls");
			
			return 0;
		} else {
			
			goto MENU_SATU;
		}
	}
	
	
	return 0;
}