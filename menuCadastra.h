#pragma once
#define		NOT !

#include <iostream>
#include <vector>
#include <Windows.h>
#include <filesystem>  
#include <fstream> 
#include "json.hpp"

using json =    nlohmann::json;
using namespace            std;
namespace fs = std::filesystem;


class MenuCadastra
{
private:
    string path     ;
    string atrNome  ;
    string atrMarca ;
    string atrQtd   ;
    string atrGrupo ;
    string atrId    ;
    

public://Construtores
    MenuCadastra();
public://Funções
    string getObjId     ();
    string getObjMarca  ();
    string getObjNome   ();
    string getObjQtd    ();
    string getObjGrupo  ();
    string setJSON      ();
    string getJSONData  ();
};