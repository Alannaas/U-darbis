#include <iostream>
#include <fstream>
using namespace std;
int main()
{
                  	int n;          	//n - kiek kart� reik�s skanuoti fail�
                  	double sk, 	// sk - skai�ius
                                       	sum=0;      	//sum - suma

                  	ifstream fd("Duomenys.txt");
                  	fd >> n;     	//fd - failo duomenys

                  	for (int i = 0; i < n; i++)
                  	{
                                       	fd >> sk;
                                       	sum += sk;
                  	}

                  	ofstream fr("Rezultatai.txt");                	//fr - failo rezultatas

                  	fr << sum;
}
