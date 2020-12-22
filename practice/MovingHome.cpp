#include<graphics.h>
void main(){
    int gd=0,gm;
    int x,y,i,j;
    initgraph(&gd,&gm,"c:\\turboc3\\bgi");
    t=getmaxx();
    y=getmaxy()/2;
	for(x=0;x<t;x++){
    	rectangle(x-50,y-38,x+50,y+40);
    	rectangle(x-20,y-10,x+20,y+10);
    	line(x-20,y,x+20,y);
    	line(x,y-10,x,y+10);
    	line(x-50,y+38,x+50,y+38);
    	line(x-53,y-40,x+53,y-40);
    	line(x-53,y-40,x-33,y-70);
    	line(x-33,y-70,x+73,y-70);
    	line(x+53,y-40,x+73,y-70);
    	line(x-53,y-38,x+54,y-38);
    	line(x+54,y-38,x+75,y-70);
    	line(x+73,y-71,x+104,y-40);
    	line(x+70,y-65,x+95,y-40);
    	line(x+95,y-40,x+104,y-40);
    	line(x+95,y-40,x+95,y+30);
    	line(x+50,y+40,x+95,y+30);
    	line(x+50,y+38,x+95,y+28);
    	line(x+65,y+35,x+65,y);
    	line(x+82,y+33,x+82,y-3);
    	line(x+65,y,x+82,y-4);
    	line(x+65,y+12,x+82,y+8);
    	line(x+65,y+22,x+82,y+18);
    	line(x+74,y-1,x+74,y+32);
    	arc(x+74,y-1,25,180,9);
    	cleardevice();
    }
	delay(4000);
    closegraph();
    }
