#include <fstream>
#include <string>
#include <vector>

#include "menuCadastra.h"
using namespace std;

MenuCadastra::MenuCadastra()
{
    path     =              "C:/db_NoSQL/produtos/";
    atrNome  =              "foo";
    atrQtd   =              "foo";
    atrMarca =              "foo";
    atrQtd   =              "foo";
    atrGrupo =              "foo";
    atrId    =              "foo";

};

string MenuCadastra::getObjId()
{
    cout<<"Insira codigo de barras: \n";
    getline(cin,atrId);
    return atrId;
};

string MenuCadastra::getObjMarca()
{
    cout<<"Inserira a Marca: \n";
    getline(cin,atrMarca);
    return atrMarca;
};

string MenuCadastra::getObjNome()
{
    cout<<"Insira o nome: \n";
    getline(cin,atrNome);
    return atrNome;
};

string MenuCadastra::getObjQtd()
{
    cout<<"Insira a quantidade: \n";
    getline(cin,atrQtd);
    return atrQtd;
};

string MenuCadastra::getObjGrupo()
{
    cout<<"Inserira o Setor: \n";
    getline(cin,atrGrupo);
    return atrGrupo;
};

string MenuCadastra::setJSON()//Cadastra produto em formato JSON
{
    cout<<path;
    std::ofstream printJson(path + atrNome + ".json");
    json rowInfo = {
    {"Codigo de Barras", atrId},
    {"Marca", atrMarca},
    {"Nome", atrNome},
    {"Quantidade", atrQtd},
    {"Categoria", atrGrupo},
};
printJson<<rowInfo;
printJson.close();

return 0;
};