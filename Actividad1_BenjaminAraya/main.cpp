#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;


int main() {
    string archivo1="archivo1.txt";
    ifstream archivo(archivo1.c_str());
  
    string linea,nomb,n1,n2,n3,n4;
    int res,lon,i,j=0;
    string arreglo[7] = {};
    int notas[7][4] = {};
    int cont;
    char b,l;

    while (getline(archivo,linea)) {
        cout<<linea<<endl;
        lon = linea.length();
        for (i=0;i<lon;i++){
            l=linea[i];
            b=' ';
            if (l!=b){
                if (j==0)
                    nomb=nomb+linea[i];
                if (j==1)
                    n1=n1+linea[i];
                if (j==2)
                    n2=n2+linea[i];
                if (j==3)
                    n3=n3+linea[i];
                if (j==4)
                    n4=n4+linea[i];    
            }
            else
                j++;
        }
        /*cout<<nomb<<endl;
        cout<<n1<<endl;
        cout<<n2<<endl;
        cout<<n3<<endl;
        cout<<n4<<endl;*/
        arreglo[cont] = nomb;
        notas[cont][0] = stoi(n1);
        notas[cont][1] = stoi(n2);
        notas[cont][2] = stoi(n3);
        notas[cont][3] = stoi(n4);
        cont++;
        j=0;
        nomb=" ";
        n1=" ";
        n2=" ";
        n3=" ";
        n4=" ";
        }
  for(int i=0; i<7; i++)
    cout<<arreglo[i]<<notas[i][0]
      <<notas[i][1]
      <<notas[i][2]
      <<notas[i][3]<<endl;
  }