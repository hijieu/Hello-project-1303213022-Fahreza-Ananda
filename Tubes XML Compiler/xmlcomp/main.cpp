#include "xmlcomp.h"

int main(){
    // Kamus
    Queue Q;
    Stack S;
    string x;
    bool valid;
    // Algoritma
    // Buka file XML
    ifstream file;
    file.open("test.xml");
    // Buat queue kosong
    createQueue(Q);
    // Buat stack kosong
    createStack(S);
    // Baca file XML
    while(!file.eof()){
        file >> x;
        // Enqueue
        Enqueue(Q, x);
    }
    // Tutup file XML
    file.close();
    // Cek validitas
    valid = isValidXML(Q);
    // Cetak hasil
    if(valid){
        cout << "File XML valid" << endl;
    }else{
        cout << "File XML tidak valid" << endl;
    }
    return 0;
}
