#include <iostream>
#include <vector>
#include <map>
using namespace std;
class LifeForm
{
	public:
	LifeForm( const string &name="")
	{
		_name=name;
	}
	void speak()
	{
		cout<< "Hello, I am "<< _name <<endl;
	}
	private:
	string _name;
};
int main()
{
	vector <int> brojevi;
	
	brojevi.push_back(1);
	brojevi.push_back(7);


	for (int i=0; i<brojevi.size();++i)
	{
		cout <<brojevi[i] << endl;
	}
	for (auto &br : brojevi)
		{
			cout << br << endl;
		}
	for (auto it = brojevi.begin(); it !=brojevi.end();++it)
	{

		cout<< *it<<endl;

	}
	vector <LifeForm> niz_bica;
	LifeForm a();
	LifeForm l("Fadl Stihl");
	niz_bica.push_back(l);
	niz_bica.emplace_back("Fatima");
	auto it= niz_bica.begin();
	it +=2;
	auto mujo=niz_bica.emplace(it,"Mujo");
	for (auto &lf : niz_bica)
	{
		lf.speak();
	}
	mujo->speak();

	map<string,LifeForm> popis;
	popis["t5t11"]=LifeForm("Rajko");
	popis.emplace("ggg","Cvrc");
	popis["t5t11"].speak();
	popis["ggg"].speak();
	return 0;

}
