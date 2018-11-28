#include <iostream>
#include <vector>
#include <string>
class Pivo
{
public:
	Pivo();
	std::string Ime;
	int og;
	int fg;
	float CalcAlc();
};

int main()
{
//Pivo p();
//std::cout << p.og<<std::endl;
//p.CalcAlc();
//std::cout << p.CalcAlc() << std::endl;
int i=3;
Pivo e[10];
int j=0;
std::vector<Pivo> Unos_piva;
while(i!=0)

{
	
	std::cout<< "Uneo sam pivo"<< std::endl;
	Unos_piva.push_back(Pivo());
	std::cout<< "Zelis li jos piva  y/n"<< std::endl;
	std::string unos;
	std::cin>>unos;
	//std::cout<<unos<<std::endl;
	if( unos!="y")
	{
		i=0;
	}
	else i=1;
}


}


float Pivo::CalcAlc()
{
	return og-fg;
}
Pivo::Pivo()
{

}

