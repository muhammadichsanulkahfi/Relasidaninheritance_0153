#ifndef IBU_H
#define IBU_H
#include <vector>

class ibu {
    public:
        string nama;
        vector<anak*> daftar_anak;

        ibu(string pNama): nama(pNama){
            cout << "ibu \"" << nama << "\" ada\n";
        }

        ~ibu() {
            cout << "Ibu \"" << nama << "\" tidak ada\n";
        }

}