#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	int jumlah=0, i,pangkat;
	printf("jumlah dari 6 suku pertama dari:");
	printf("\n");
	for(int i=1;i<=6;i++)
	{
		pangkat=pow(i,3);
		printf("%i",i);
		printf("^3=%i,",pangkat);
		jumlah+=pangkat,pangkat++;
	}
	printf("\n");
	printf("jumlah hasil pangkat=%i",jumlah);
}
