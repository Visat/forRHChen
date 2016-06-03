#include "fun.h"

//void function(int *ttm, int *ttg)
//{
//	(*ttm)++;
//	*ttg+=10;
//	printf(">> ttm = %d  ttg = %d\n",*ttm,*ttg);
//	printf(">> &ttm = %d &ttg = %d\n",ttm,ttg);
//}
void set_value(int ttm, int ttg)
{
	tm = ttm;
	tg = ttg;
	printf("tm = %d, tg = %d\n",tm,tg);
}
