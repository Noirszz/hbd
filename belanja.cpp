#include <iostream>
using namespace std;

int main () {

    //deklarasi variabel
    int Total;


    cout << "Masukkan Total Belanja: ";
    cin >> Total;
    

    //if
    if (Total>=100000) {
    	Total - 20000;
        cout << "Total Belanja: " << Total << "-" << 20000 << "= "; 
        cout << Total - 20000 << endl;
    }
    else {
        cout << "gak dapet diskon sorry";
    }
 

    return 0;
}