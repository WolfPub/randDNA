#include <iostream>
#include <string>
#include <random>

using namespace std;


string randDNA( int seed, string bases, int n )
{
string seqDNA;

mt19937 eng1(seed);

int min = 0;
int max = bases.size() - 1;

uniform_int_distribution<>unifrm(min,max);

for (int i= 0; i < n l; i++)
{
	int randIndex = unifrm(eng1);
	seqDNA+= bases[randIndex];
}

return seqDNA;
}



