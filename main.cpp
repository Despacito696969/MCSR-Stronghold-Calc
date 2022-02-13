#include <bits/stdc++.h>
using namespace std;

int to_value(string to_convert)
{
	string result;
	for(auto c : to_convert)
	{
		if(('0' <= c && c <= '9') || c == '-')
		{
			result += c;
		}
	}
	return atoi(result.c_str());
}

int main()
{
	int chunkX, chunkZ;
	{
		string oX, oZ;
		cin >> chunkX >> chunkZ;
		cin >> oX >> oZ;
		chunkX += to_value(oX);
		chunkZ += to_value(oZ);
	}
	printf("x:%5d  z:%5d     Nether position\n", chunkX * 2, chunkZ * 2);
	printf("x:%5d  z:%5d     OW chunk\n", chunkX, chunkZ);
	printf("x:%5d  z:%5d     OW position\n", chunkX * 16 + 4, chunkZ * 16 + 4);

}
