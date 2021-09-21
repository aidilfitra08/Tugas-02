/*
	Nama : Aidil Fitra
	NPM  : 140810190053
	Dekripsi : Shift Cipher
*/
#include <iostream>
#include <string>

using namespace std;

//Fungsi untuk melakukan ShiftChiper
void ShiftChiper(string input, int key)
{
    string enkripsi, dekripsi;
    int i;
    
    //perulangan untuk melakukan enkripsi
    for (i = 0; i < input.size(); i++)
    {
        enkripsi += (input[i] - 'A' + key) % 26 + 'A';
    }
    cout << "Hasil Enkripsi : " << enkripsi << endl;
    
    //perularangan untuk melakukan dekripsi
    for (i = 0; i < enkripsi.size(); i++)
    {
        dekripsi += (enkripsi[i] - 'A' - key + 26) % 26 + 'A';
    }
    cout << "Hasil Dekripsi : " << dekripsi << endl;
}
int main()
{
mulai:
    string pilih;
    int i, j, k;
    string s, t;
    char key;
    
    //inputan nama
    cout << "Input (Tanpa Spasi & Huruf Kapital) : ";
    cin >> s;
    
    //inputan kunci shift
    cout << "Kunci (Huruf Kapital) : ";
    cin >> key;
    
    //mengubah inputan char ke int
    int key1 = (char)key - 'A';
    cout<<"/nOutput : "<<endl;
    ShiftChiper(s, key1);
    
    //fungsi untuk melakukan perulangan program
    cout << "Apakah ingin diulang ? (Y/N) ";
    cin >> pilih;

    if (pilih == "Y" || pilih == "y")
    {
        goto mulai;
    }
    else
    {
        return 0;
    }
}
