#pragma once
#define		NOT !

#include <iomanip>
#include <iostream>
#include <vector>
#include <Windows.h>
#include <filesystem>  
using namespace std;
namespace fs = std::filesystem;


class MenuListar
{
private:
    vector<std::string> lis;
    string path            ;
    string nameP           ;
    int aswe               ;

public:
    MenuListar();
public:
    string getListar();
    void setUpdate();
};

