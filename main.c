#include <REGX52.H>

void main()
{	
	while(1)
	{
		if(P3_1 == 0)
		{
			P2_0 = 0;  //dian ji liang
		}
		else
		{
			P2_0 = 1;   //song shou mie
		}
	}		
}