#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	struct jsu
	{
		char nae[12];
		int os, db, hab, hhab;

	};

		struct jsu st[3] = { {"데이터1", 95, 88},
									{"데이터2",84,91},
									{"데이터3", 86 ,75} };
		struct jsu* p;
		p = &st[0];
		(p + 1)->hab = (p + 1)->os + (p + 2)->db;
		(p + 1)->hhab = (p + 1)->hab + p->os + p->db;
		
		printf("(p + 1)->hab : %d\n", (p + 1)->hab);
		printf("(p + 1)->hhab : %d\n", (p + 1)->hhab);

		printf("=================os=========== \n");
		printf("p ->os : %d\n", p ->os);
		printf("(p + 0)->os : %d\n", (p + 0)->os);
		printf("(p + 1)->os : %d\n", (p + 1)->os);
		printf("(p + 2)->os : %d\n", (p + 2)->os);

		printf("==============db=============\n");
		printf("p ->db : %d\n", p->db);
		printf("(p + 0)->db : %d\n", (p + 0)->db);
		printf("(p + 1)->db : %d\n", (p + 1)->db);
		printf("(p + 2)->db : %d\n", (p + 2)->db);

}
