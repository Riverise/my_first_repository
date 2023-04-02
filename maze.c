#include <stdio.h>
int main ()
{
	int i;
	int x=1,y=1,p=1,q=5;
	char a[7][12]={"######",
				   "#O #  ",
				   "# ## #",
				   "#  # #",
				   "##   #",
				   "######",
				  };
	char ch;
	for(i=0;i<=6;i++)
		puts(a[i]);
		
	while(x!=p||y!=q) //注意此处逻辑连接词是“或”不是“且” 
	{
		ch=getch();
		if(ch=='s')
			{
				if(a[x+1][y]!='#')
				{
					a[x][y]=' ';
					x++;
					a[x][y]='O';
				}
			}
		if(ch=='w')	
			{
				if(a[x-1][y]!='#')
				{
					a[x][y]=' ';
					x--;
					a[x][y]='O';
				}
			}
		if(ch=='a')
			{
				if(a[x][y-1]!='#')
				{
					a[x][y]=' ';
					y--;
					a[x][y]='O';
				}
			}
		if(ch=='d')
			{
				if(a[x][y+1]!='a')
				{
					a[x][y]=' ';
					y++;
					a[x][y]='O'; 
				}
			}
	system("cls");
	for(i=0;i<=6;i++)
		puts(a[i]);
	}
	system("cls");
	printf("Congratulation!\n");
	printf("You win!");
	return 0;
}
