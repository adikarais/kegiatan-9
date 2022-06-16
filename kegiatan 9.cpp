#include <iostream>
#include<iomanip>
using namespace std;

class Studikasus9{
  public:

    void input(){
      for(int i=0; i<data; i++){
        cout<<"masukkan nama departemen : ";
        cin>>departemen[i];
        cout<<"masukkan id karyawan : ";
        cin>>id_karyawan[i];
        cout<<"masukkan nama karyawan : ";
        cin>>nama[i];
        gabung();
      }
    }
    void pilihan(){
      cout<<"masukkan berapa data yang ingin dimasukkan :"; cin>>data;
      input();
    }
    void gabung(){
      for(int i=0;i<data;i++){
        duaD[i][0]=departemen[i];
        duaD[i][1]=id_karyawan[i];
        duaD[i][2]=nama[i];
        
        baris++;
      }
    }
    void output(){
      cout <<"Departemen\t\t Id Karyawan\t\t Nama" << endl;
      for (int i=0; i<baris; i++){
        for (int j=0; j<3; j++){
          cout << duaD[i][j] <<"\t\t\t ";
        }
        cout << endl;
      }
    }
    
  private:
  string departemen[50];
  string id_karyawan[50];
  string nama[50];
  string duaD[50][50];
  int baris = 0;
  int data;
    
};

int main() {
  Studikasus9 run;
  run.pilihan();
  run.output();
}
