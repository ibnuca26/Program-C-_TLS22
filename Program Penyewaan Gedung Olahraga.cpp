#include <iostream>

using namespace std;

struct booking  {
    char nama[10][10], tanggal[10][10];
    int jumlah, lama[10], total, menu;
      }book;
      
      void header(){
          cout<<"================================="<<endl;
          cout<<"PROGRAM PENYEWAAN GEDUNG OLAHRAGA"<<endl;
          cout<<"================================="<<endl;
      }

int main(){
    header();
    cout<<"Masukan Jumlah pemboking : ";
    cin>>book.jumlah;
    for(int i=0;i<book.jumlah;i++){
        cout<<endl;
        cout<<"Masukan nama : ";
        cin>>book.nama[i];
        cout<<"Masukan durasi penyewaan (jam) :";
        cin>>book.lama[i];
        cout<<"Masukan tanggal penyewaan (dd/mm/yy): ";
        cin>>book.tanggal[i];
    }
    cout<<endl;
    header();
    cout<<"#1 Lihat daftar pembooking"<<endl;
    cout<<"#2 Keluar"<<endl;
    cout<<"Pilih menu : ";
    cin>>book.menu;
    if(book.menu == 1){
        for(int j=0; j<book.jumlah;j++){
            cout<<endl;;
            cout<<"Nama pembooking : "<<book.nama[j]<<endl;
            cout<<"Durasi penyewaan : "<<book.lama[j]<<" jam"<<endl;
            cout<<"Tanggal sewa : "<<book.tanggal[j]<<endl;
            book.total=100000*book.lama[j];
            cout<<"Biaya sewa : "<<book.total;
            
        }
    }
    else if(book.menu == 2){
        exit(0);
    }
    else{
        cout<<"Menu tidak ada!";
    }
}
