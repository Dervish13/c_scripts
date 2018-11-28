#include <iostream>
#include <vector>

using namespace std;
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


	return 0;

}
