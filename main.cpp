#include <iostream>

using namespace std;

int main(){
    bool kembali = false;

    while(!kembali){
        int menu;
        char keluar;
        cout << "Menu"<<endl;
        cout << "Pilih Menu : ";
        cin >> menu;
        switch (menu)
        {
        case 1 : 
            
            break;
        case 2 :
            break;
        case 3 :
            break;
        case 4 :
            cout << "Keluar ? (y/n) : ";
            cin >> keluar;
            if(keluar == 'y' || keluar == 'Y'){
                kembali = true;
            }
            break;
        default:
            break;
        }

    }
return 0;
}
