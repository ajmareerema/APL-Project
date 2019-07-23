// Bismillahir Rahmanir Rahim.
# include "iGraphics.h"
#include<stdlib.h>

int game[9]={0,0},count=2,win_p1=0,win_p2=0,drow_count=0;
bool result= false,start= true,draw=false;
void check(); // game hoisa kina check korbe ai function
void draw_c();// draw hoisa kina check korbe
void iDraw()
{
	iClear();
	if(start==true)
		iShowBMP(0,0,"image tic tac toe\\start.bmp");//	start page ar jonnol

	else
	{
		iShowBMP(0,0,"image tic tac toe\\tic tac toe.bmp");// mani bord ar jonno
		check(); // game hoisa kina check korbe ai function
		draw_c();
		if(result==false)
		{

			if(game[0]==1)
				iShowBMP(20,357,"image tic tac toe\\0.bmp");		
			if(game[1]==1)
				iShowBMP(193,357,"image tic tac toe\\0.bmp");	
			if(game[2]==1)
				iShowBMP(360,357,"image tic tac toe\\0.bmp");
			if(game[3]==1)
				iShowBMP(20,172,"image tic tac toe\\0.bmp");
			if(game[4]==1)
				iShowBMP(193,172,"image tic tac toe\\0.bmp");
			if(game[5]==1)
				iShowBMP(360,172,"image tic tac toe\\0.bmp");
			if(game[6]==1)
				iShowBMP(20,15,"image tic tac toe\\0.bmp");
			if(game[7]==1)
				iShowBMP(193,15,"image tic tac toe\\0.bmp");
			if(game[8]==1)
				iShowBMP(360,15,"image tic tac toe\\0.bmp");


	
	
			if(game[0]==2)
				iShowBMP(20,357,"image tic tac toe\\x.bmp");				
			if(game[1]==2)
				iShowBMP(193,357,"image tic tac toe\\x.bmp");			
			if(game[2]==2)
				iShowBMP(360,357,"image tic tac toe\\x.bmp");
			if(game[3]==2)
				iShowBMP(20,172,"image tic tac toe\\x.bmp");
			if(game[4]==2)
				iShowBMP(193,172,"image tic tac toe\\x.bmp");
			if(game[5]==2)
				iShowBMP(360,172,"image tic tac toe\\x.bmp");
			if(game[6]==2)
				iShowBMP(20,15,"image tic tac toe\\x.bmp");
			if(game[7]==2)
				iShowBMP(193,15,"image tic tac toe\\x.bmp");
			if(game[8]==2)
				iShowBMP(360,15,"image tic tac toe\\x.bmp");
		}
		if( result == true && win_p1>0)
		{
			iShowBMP(0,0,"image tic tac toe\\p1.bmp");
			iShowBMP(0,0,"image tic tac toe\\home.bmp");
		}

		if(result == true && win_p2>0)
		{
			iShowBMP(0,0,"image tic tac toe\\p2.bmp");
			iShowBMP(0,0,"image tic tac toe\\home.bmp");
		}

		if(draw==true)
		{
			iShowBMP(0,0,"image tic tac toe\\draw.bmp");			
			iShowBMP(0,0,"image tic tac toe\\home.bmp");
			for(int i=0;i<9;i++)
				game[i]=0;
		}
		
	}
	system("cls");
		
		printf("count= %d\n",count);
		printf("p1= %d\n",win_p1);
		printf("p2= %d\n",win_p2);
		for(int i=0;i<9;i++)
			printf("game[%d] = %d\n",i,game[i]);
	
}
void draw_c()
{
	if(count==11&&win_p1==0&&win_p2==0)
		draw=true;
}
void check(){
	if(game[0]==1 && game[1]==1 && game[2]==1){
		win_p1++;	
		for(int i=0;i<9;i++)
			game[i]=0;
		result = true;

	}
	if(game[3]==1 && game[4]==1 && game[5]==1){		
		win_p1++;
		for(int i=0;i<9;i++)
			game[i]=0;
		result = true;
	}
	if(game[6]==1 && game[7]==1 && game[8]==1){
		win_p1++;
		for(int i=0;i<9;i++)
			game[i]=0;
		result = true;
	}
	if(game[0]==1 && game[3]==1 && game[6]==1){
		win_p1++;
		for(int i=0;i<9;i++)
			game[i]=0;
		result = true;
	}
	if(game[1]==1 && game[4]==1 && game[7]==1){
		win_p1++;
		for(int i=0;i<9;i++)
			game[i]=0;
		result = true;
	}
	if(game[2]==1 && game[5]==1 && game[8]==1){
		win_p1++;
		for(int i=0;i<9;i++)
			game[i]=0;
		result = true;
	}
	if(game[0]==1 && game[4]==1 && game[8]==1){
		win_p1++;
		for(int i=0;i<9;i++)
			game[i]=0;
		result = true;
		
	}
	if(game[2]==1 && game[4]==1 && game[6]==1){
		win_p1++;
		for(int i=0;i<9;i++)
			game[i]=0;
		result = true;
	}
	//
	if(game[0]==2 && game[1]==2 && game[2]==2){
		win_p2++;	
		for(int i=0;i<9;i++)
			game[i]=0;
		result = true;

	}
	if(game[3]==2 && game[4]==2 && game[5]==2){		
		win_p2++;
		for(int i=0;i<9;i++)
			game[i]=0;
		result = true;
	}
	if(game[6]==2 && game[7]==2 && game[8]==2){
		win_p2++;
		for(int i=0;i<9;i++)
			game[i]=0;
		result = true;
	}
	if(game[0]==2 && game[3]==2 && game[6]==2){
		win_p2++;
		for(int i=0;i<9;i++)
			game[i]=0;
		result = true;
	}
	if(game[1]==2&& game[4]==2 && game[7]==2){
		win_p2++;
		for(int i=0;i<9;i++)
			game[i]=0;
		result = true;
	}
	if(game[2]==2 && game[5]==2 && game[8]==2){
		win_p2++;
		for(int i=0;i<9;i++)
			game[i]=0;
		result = true;
	}
	if(game[0]==2 && game[4]==2 && game[8]==2){
		win_p2++;
		for(int i=0;i<9;i++)
			game[i]=0;
		result = true;
		
	}
	if(game[2]==2 && game[4]==2 && game[6]==2){
		win_p2++;
		for(int i=0;i<9;i++)
			game[i]=0;
		result = true;
	}
	
	
}
void iMouseMove(int mx, int my)
{
	//place your codes here
}


void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if(mx>0 && mx<170 && my>345 && my <500 && start==false)
		{
			if(count%2==0 && game[0]==0)
			{
				game[0]=1;
				count++;
			}
			if(count%2!=0 && game[0]==0)
			{
				game[0]=2;
				count++;
			}
		}
		if(mx>175 && mx<335 && my>345 && my <500 && start==false)
		{
			if(count%2==0 && game[1]==0)
			{
				game[1]=1;
				count++;
			}
			if(count%2!=0 && game[1]==0)
			{
				game[1]=2;
				count++;
			}
		}
		if(mx>345 && mx<500 && my>345 && my <500 && start==false)
		{
			if(count%2==0 && game[2]==0)
			{
				game[2]=1;
				count++;
			}
			if(count%2!=0 && game[2]==0)
			{
				game[2]=2;
				count++;
			}
		}
		if(mx>0 && mx<170 && my>160 && my <340 && start==false)
		{
			if(count%2==0 && game[3]==0)
			{
				game[3]=1;
				count++;
			}
			if(count%2!=0 && game[3]==0)
			{
				game[3]=2;
				count++;
			}
		}
		if(mx>175 && mx<335 && my>160 && my <340 && start==false)
		{
			if(count%2==0 && game[4]==0)
			{
				game[4]=1;
				count++;
			}
			if(count%2!=0 && game[4]==0)
			{
				game[4]=2;
				count++;
			}
		}
		if(mx>345 && mx<500 && my>160 && my <340 && start==false)
		{
			if(count%2==0 && game[5]==0)
			{
				game[5]=1;
				count++;
			}
			if(count%2!=0 && game[5]==0)
			{
				game[5]=2;
				count++;
			}
		}
		
		if(mx>0 && mx<170 && my>10 && my <155 && start==false)
		{
			if(count%2==0 && game[6]==0)
			{
				game[6]=1;
				count++;
			}
			if(count%2!=0 && game[6]==0)
			{
				game[6]=2;
				count++;
			}
		}
		if(mx>175 && mx<335 && my>10 && my <155 && start==false)
		{
			if(count%2==0 && game[7]==0)
			{
				game[7]=1;
				count++;
			}
			if(count%2!=0 && game[7]==0)
			{
				game[7]=2;
				count++;
			}
		}
		if(mx>345 && mx<500 && my>10 && my <155 && start==false)
		{
			if(count%2==0 && game[8]==0)
			{
				game[8]=1;
				count++;
			}
			if(count%2!=0 && game[8]==0)
			{
				game[8]=2;
				count++;
			}
		}
		if(mx>180 && mx<320 && my>176 && my <315 && start==true)
		{
			start=false;
		}
		if(mx>0 && mx<256 && my>0 && my <256 && result == true)
		{
			count=2;win_p1=0;win_p2=0;drow_count=0;
			for(int i=0;i<9;i++)
				game[i]=0;
			start=true;
			result = false;
			count=2;win_p1=0;win_p2=0;drow_count=0;
			draw=false;


		}
		//
		if(mx>0 && mx<256 && my>0 && my <256 && draw == true)
		{
			count=2;win_p1=0;win_p2=0;drow_count=0;
			for(int i=0;i<9;i++)
				game[i]=0;
			start=true;
			draw = false;
			count=2;win_p1=0;win_p2=0;drow_count=0;
			result= false;
		}
		
	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here	
	}
}


void iKeyboard(unsigned char key)
{
	if(key == 'q')
	{
		//do something with 'q'
	}
	//place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use 
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6, 
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12, 
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP, 
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT 
*/
void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_END)
	{
		exit(0);	
	}
	//place your codes for other keys here
}

int main()
{
	//place your own initialization codes here. 
	iInitialize(500, 500, "Tic Tac Toe");
	return 0;
}	