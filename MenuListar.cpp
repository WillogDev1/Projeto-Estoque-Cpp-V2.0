#include <fstream>
#include <string>
#include <vector>

#include "menuListar.h"
#include "menu.h"
using namespace std;

MenuListar::MenuListar()
{
    vector<std::string> lis;
    path = "C:/db_NoSQL/produtos/";
    string nameP = "foo"          ;
    int aswe                      ;
}


string MenuListar::getListar()
{//Abrir arquivo escolhido no Menu pelo cliente
    for (const auto& file : filesystem::directory_iterator("C:/db_NoSQL/produtos"))
        {
			lis.push_back(file.path().filename().string());
		}
			Menu menu3(lis.size(), lis, 1, 1, 2, 1, 1);
			aswe = menu3.select();
            nameP = lis[aswe];
            return nameP;

      
}

void MenuListar::setUpdate()
{//Implementar metodo dentro desse metodo
	//metodo novo com construtor para pegar o valor selecionado pelo usuario e alterar, deminuir a quantidade de codigo
	//Polimorfismo
    cout<<"Qual das opcao abaixo deseja alterar?";
    vector<string> menuAlteraVal
    {
        "- Alterar valores -",
        "Marca",
        "Nome",
        "Quantidade",
        "Grupo"
    };//Alterar para string em vez de void. Retornar valor escolhido, e usa-lo nos metodos
	
    Menu menu4(menuAlteraVal.size(), menuAlteraVal, 1, 1, 2, 1, 1);
    aswe = menu4.select();
    //string valorSelec = menuAlteraVal[aswe]; Se caso fosse preciso selecionar valores variaveis
    switch(aswe){
		case 1:
        {
            string getN;
            cout<<nameP;
            ifstream fJson("C:/db_NoSQL/produtos/"+ nameP);//Local mais nome selecionado
            stringstream buffer;
            buffer << fJson.rdbuf();
            auto file = nlohmann::json::parse(buffer.str());
            string item = nameP;//Nome do que foi selecionado para item
            cout<<"Insira a Marca atualizada";
            getline(cin,getN);//Pega a quantidade digitada

        std::ofstream out("C:/db_NoSQL/produtos/" + item );//Abre o item selecionado
        file["Marca"] = getN;//Inseri a quantidade atualizado no Key "Quantidade":
        out<<std::setw(4) << file <<std::endl;    
            //cout<<valorSelec;
            cout<<"OK - 1!";
            break;
            }
        case 2:

            cout<<"OK - 2";
            break;
        case 3:

            cout<<"OK - 3";
            break;
        case 4:

            cout<<"OK - 4";
            break;
    break;
	}
}

