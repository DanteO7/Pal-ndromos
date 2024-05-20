#include<iostream>
using namespace std;

string minusculas(string texto){
string textoFinal;
for(int i=0;i<texto.length();i++){
if(isalpha(texto[i])){
  textoFinal+=tolower(texto[i]);
}
}
return textoFinal;
}

bool palindromo(string texto){

string textoAuxiliar=texto;
int largo=texto.length();
int posicion=largo-1;

for(int i=0;i<largo;i++){
    textoAuxiliar[i]=texto[posicion-i];
}

 if(textoAuxiliar==texto){
    return 1;
 }else{
    return 0;
 }
}

int main(){
string textoUsuario;
getline(cin, textoUsuario);

textoUsuario=minusculas(textoUsuario);

if (palindromo(textoUsuario)==true){
    cout <<"es palindromo";

}else{
    cout<<"no es palindromo";
}

return 0;
}
