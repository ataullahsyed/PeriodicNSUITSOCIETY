//Best suited for TurboC/C++
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
void Hydrogen(void);
main (void)
{
    int gd=0,gm,x;
	initgraph(&gd,&gm,"c:..//bgi");
	setcolor(11);
	settextstyle(2,0,13);
	outtextxy(200,200,"Project Atomic");
	outtextxy(200,250,"Press Enter");
	while(!kbhit())
	{
		putpixel(random(getmaxx()),random(getmaxy()),random(16));
		delay(4);
	}
	printf("Type an Atomic Number: \n");
	scanf("%i", &x);
	if (x >= 90 && x <= 103)
		printf("Actinoid Element [F-Block]\nGroup No: 3\nPeriod No: 7\n");
	else if (x >= 58 && x <= 71)
		printf("Lanthanoid Element [F-Block]\nGroup No: 3\nPeriod No: 6\n");
	else if (x >= 104 && x <= 118)
		printf("Transuranic Element\nGroup No: %i%i \nPeriod No: 7\n",(x/10)%10,x%10);
	else if(x==2)
		printf("[P-Block]\nGroup No : 18\nPeriod No: 1\n");
	else if(x==1)
		Hydrogen();
	else if (x > 2 && x <= 10)
	{
		if(x==3 || x==4)
			printf("[S-Block]\nGroup No: %i\nPeriod No: 2",x-2);
		else
			printf("[P-Block]\nGroup No: %i\nPeriod No: 2\n",18-(10-x));
	}
	else if (x > 10 && x <= 18)
	{
		if(x==11 || x==12)
			printf("[S-Block]\nGroup No: %i\nPeriod No: 3",x-10);
		else
			printf("[P-Block]\nGroup No: %i\nPeriod No: 3\n",18-(18-x));
	}
	else if (x > 18 && x <= 36)
	{
		if(x==19 || x==20)
			printf("[S-Block]\nGroup No: %i\nPeriod No: 4\n",18-(36-x));
		else if(x>=21 && x<=30)
			printf("[D-Block]\nGroup No: %i\nPeriod No: 4\n",18-(36-x));
		else
			printf("[P-Block]\nGroup No: %i\nPeriod No: 4\n",18-(36-x));
	}
	else if (x > 36 && x <= 54)
	{
		if(x==37 || x==38)
		printf("[S-Block]\nGroup No: %i\nPeriod No: 5\n",18-(54-x));
		else if(x>=39 && x<=48)
			printf("[D-Block]\nGroup No: %i\nPeriod No: 5\n",18-(54-x));
		else
			printf("[P-Block]\nGroup No: %i\nPeriod No: 5\n",18-(54-x));
	}
	else if (x > 54 && x < 57)
		printf("[S-Block]\nGroup No: %i\nPeriod No: 6\n",x-54);
	else if(x==57)
		printf("[D-Block\nGroup No : 3\nPeriod no: 6\n");
	else if(x>71 && x<=80)
		printf("[D-Block]\nGroup No : %i\nPeriod No: 6\n",18-(86-x));
	else if(x>80 && x<=86)
		printf("[P-Block]\nGroup No : %i\nPeriod No: 6\n",18-(86-x));
	else if (x > 86 && x <= 88)
		printf("[S-Block]\nGroup No: %i\nPeriod No: 7\n",x-86);
	else if(x==89)
		printf("[D-Block]\nGroup No: 3\nPeriod No: 7");
	else
		printf("This is only calibrated upto 118 Elements as per the guidelines of NCERT textbooks.\n");
}
void Hydrogen(void)
	{
		char P;
		printf("Group No : Undefined[1 or 17] \n\nWhat is the Valency of Hydrogen : A[-1] or B[+1]\n");
		scanf("%c",&P);
		if(P=='A' || P=='a')
			printf("[P-Block]\nGroup No : 17\nPeriod No: 1\n");
		else if(P=='B' || P=='b')
			printf("[S-Block]\nGroup No : 1\nPeriod No: 1\n");
		else
			printf("Error : Check your Input\nEnter 'A' or 'B'\n");
	}