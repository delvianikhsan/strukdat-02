/*
nama program  : acikiwir
nama : delvian ikhsan maulana
npm : 140810180065
tanggal buat : 05 MARET 2019
deskripsi : pretest
*/

#include <iostream>
#include <string.h>

using namespace std;

struct Theater {
 int room;
 char seat [3];
 char movieTitle [30];
};

int main (){
 Theater teater;
 teater.room = 7;
 strcpy(teater.seat,"J9");
 strcpy(teater.movieTitle,"Adit & Jarwo");

 cout<<teater.room<<endl;
 cout<<teater.seat<<endl;
 cout<<teater.movieTitle<<endl;
}
