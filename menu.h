#pragma once
#define		NOT !

#include <iomanip>
#include <iostream>
#include <vector>
#include <Windows.h>
#include <filesystem>  

using namespace std;
namespace fs = std::filesystem;

class Menu
{
private:
    int argc;
    vector<string> argv;
    int		linha; // posicao
	int		coluna;
	int		dflt; // opcao padrao
	int		opt; // parametros
	int		timeout_ms;

public:
	 Menu();
	 Menu(int, vector<string>&, int , int , int , int , int );
	 ~Menu() {};
public:
  	string		getopt(int);
    int			cls();
	void		mensagem_YX(COORD, const string&, char);
    int			select(void);
    int			helper(void);
};

