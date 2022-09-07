#include "menu.h"
#include "menu.cpp"
#include "menuCadastra.h"
#include "MenuCadastra.cpp"
#include "menuListar.h"
#include "MenuListar.cpp"
#include <fstream> 
using namespace std;
namespace fs = std::filesystem;
int main(void)
{
    
	// um teste sem arquivo: as opcoes estao no programa
	vector<string> outro
	{
		" Menu -  Controle Estoque",
		" 1 - Cadastrar ",
		" 2 - Listar & Alterar ",
		" 3 - Deletar "
	};
	Menu menu2(outro.size(), outro, 12, 12, 2, 1, 80);
	MenuCadastra MenuCadastra2;//Cria um objeto da nossa classe
	MenuListar MenuListar2;
	int asw = menu2.select();
	//std::cout << "\nRetornou " << asw << " \"" << menu2.getopt(asw) << "\"" << std::endl;

	switch(asw){
		case 1://Cadastrar
			MenuCadastra2.getObjId();
			MenuCadastra2.getObjMarca();
			MenuCadastra2.getObjNome();
			MenuCadastra2.getObjQtd();
			MenuCadastra2.getObjGrupo();
			MenuCadastra2.setJSON();
		
		case 2://Listar Atualizar
			MenuListar2.getListar();
			MenuListar2.setUpdate();
			break;
	}


}
// fim