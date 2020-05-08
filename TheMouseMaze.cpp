#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>


int main(){
	emre:
	srand(time(NULL));
	int x=1,y=2,xr=8,yr=47,xc=5,yc=23,xc2=1,yc2=27,xc3=8,yc3=24,xc4=7,yc4=10,xc5=4,yc5=36,ran,ran2,ran3,ran4,ran5,i,j,hamle=0;
	char map[10][50];
	char a='Q',b=219,c=220,d=223,hedef='X',cnvr='#',cnvr2='#',cnvr3='#',cnvr4='#',cnvr5='#'; //254
	map[1][2]=a;
	map[xc][yc]=cnvr;
	map[xc2][yc2]=cnvr2;
    map[xc3][yc3]=cnvr3; 
    map[xc4][yc4]=cnvr4;
    map[xc5][yc5]=cnvr5;
	
	printf("-----THE MOUSE MAZE-----\n[A]-OYUNU BASLAT\n[B]-NASIL OYNANIR?\n[C]-CIKIS\n\nby Ali Emre YAZICI");
	unsigned int menu = getch();
	if(menu=='a'|| menu=='A'){
	system("CLS");
		for(i=0;i<10;i++){
   	for(j=0;j<50;j++){
   		map[i][j]=' ';
	   }
   }
	
	while(1){
		
		for(i=0;i<10;i++){
   	for(j=0;j<50;j++){
   		
   		map[xc][yc]=cnvr;
   		map[xc2][yc2]=cnvr2;
   		map[xc3][yc3]=cnvr3;
   		map[xc4][yc4]=cnvr4;
   		map[xc5][yc5]=cnvr5;
   		
   		if(j==49) printf("%c",b);
   		
   		else if(j==48) printf("%c",b);
   		
   		else if(j==0) printf("%c",b);
   		
   		else if(j==1) printf("%c",b);
   		
		else if(i==9) printf("%c",b);
		
		else if(i==0) printf("%c",b);
		   
	    else if(i==xc && j==yc) printf("%c",cnvr);
	    
	    else if(i==xc2 && j==yc2) printf("%c",cnvr2);
	    
	    else if(i==xc3 && j==yc3) printf("%c",cnvr3);
	    
	    else if(i==xc4 && j==yc4) printf("%c",cnvr4);
	    
	    else if(i==xc5 && j==yc5) printf("%c",cnvr5);
		
		else if(i==x && y==j) printf("%c",a);
   		
   		else if(i==8 && j==47) printf("%c",hedef);
   		
   		else if(i==1){
			if(j==3 || j==4 || j==5|| j==7|| j==9|| j==10|| j==11|| j==13|| j==14|| j==15|| j==16|| j==17|| j==19|| j==22|| j==23|| j==24|| j==32|| j==33|| j==37|| j==44|| j==45|| j==46|| j==47|| j==48|| j==49)
		    {printf("%c",b);map[i][j]=b;}
			
			else {printf(" ");map[i][j]=' ';}
		}
		
		else if(i==2){
			if(j==3 || j==4 || j==5|| j==7|| j==9|| j==10|| j==11|| j==15|| j==16|| j==17|| j==19|| j==22|| j==23|| j==26|| j==27|| j==28|| j==30|| j==33|| j==35|| j==37|| j==39|| j==41|| j==46|| j==47|| j==48|| j==49)
		    {printf("%c",b);map[i][j]=b;}
			
			else {printf(" ");map[i][j]=' ';}
		}
		
		else if(i==3){
			if(j==3 || j==7|| j==13|| j==16|| j==17|| j==19|| j==22|| j==25|| j==26|| j==27|| j==28|| j==30|| j==31|| j==33|| j==35|| j==39|| j==41|| j==43|| j==44|| j==47|| j==48|| j==49)
		    {printf("%c",b);map[i][j]=b;}
			
			else {printf(" ");map[i][j]=' ';}
		}
		
		else if(i==4){
			if(j==5|| j==6|| j==7|| j==9|| j==11|| j==13|| j==14|| j==17|| j==19|| j==20|| j==21|| j==22|| j==24|| j==25|| j==26|| j==27|| j==28|| j==30|| j==31|| j==33|| j==35|| j==37|| j==38|| j==39|| j==41|| j==43|| j==44|| j==45|| j==46|| j==48|| j==49)
		    {printf("%c",b);map[i][j]=b;}
			
			else {printf(" ");map[i][j]=' ';}
		}
		
		else if(i==5){
			if(j==2 || j==3|| j==5|| j==9|| j==11|| j==13|| j==14|| j==15|| j==30|| j==31|| j==35|| j==37|| j==38|| j==39|| j==41|| j==46)
		    {printf("%c",b);map[i][j]=b;}
			
			else {printf(" ");map[i][j]=' ';}
		}
		
		else if(i==6){
			if(j==2 || j==3|| j==5|| j==7|| j==8|| j==9|| j==11|| j==13|| j==14|| j==15|| j==17|| j==19|| j==20|| j==22|| j==23|| j==24|| j==25|| j==27|| j==28|| j==30|| j==31|| j==33|| j==37|| j==39|| j==41|| j==42|| j==43|| j==44|| j==46|| j==48)
		    {printf("%c",b);map[i][j]=b;}
			
			else {printf(" ");map[i][j]=' ';}
		}
		
		else if(i==7){
			if(j==2 || j==3|| j==5|| j==7|| j==8|| j==9|| j==11|| j==13|| j==14|| j==15|| j==17|| j==19|| j==20|| j==22|| j==23|| j==24|| j==25|| j==27|| j==28|| j==30|| j==31|| j==33|| j==35|| j==37|| j==39|| j==44|| j==46|| j==48)
		    {printf("%c",b);map[i][j]=b;}
			
			else {printf(" ");map[i][j]=' ';}
		}
		
		else if(i==8){
			if(j==2 || j==3|| j==15|| j==17|| j==31|| j==35|| j==39|| j==41|| j==42|| j==44|| j==48)
		    {printf("%c",b);map[i][j]=b;}
			
			else {printf(" ");map[i][j]=' ';}
		}
   		
	    else printf("%c",map[i][j]);
	   }
	   printf("\n");
   }
   
    if(xc==x && yc==y) { printf("KAPANA YAKALANDINIZ!\n\nANA MENUYE GITMEK ICIN [A] TUSUNA BASINIZ...");	unsigned int bsrl=getch();
	if(bsrl=='a'||bsrl=='A'){system("CLS"); goto emre;} else goto ali;}
    if(xc2==x && yc2==y) { printf("KAPANA YAKALANDINIZ!\n\nANA MENUYE GITMEK ICIN [A] TUSUNA BASINIZ...");	unsigned int bsrl=getch();
	if(bsrl=='a'||bsrl=='A'){system("CLS"); goto emre;} else goto ali;}
    if(xc3==x && yc3==y) { printf("KAPANA YAKALANDINIZ!\n\nANA MENUYE GITMEK ICIN [A] TUSUNA BASINIZ...");	unsigned int bsrl=getch();
	if(bsrl=='a'||bsrl=='A'){system("CLS"); goto emre;} else goto ali;}
    if(xc4==x && yc4==y) { printf("KAPANA YAKALANDINIZ!\n\nANA MENUYE GITMEK ICIN [A] TUSUNA BASINIZ...");	unsigned int bsrl=getch();
	if(bsrl=='a'||bsrl=='A'){system("CLS"); goto emre;} else goto ali;}
    if(xc5==x && yc5==y)  { printf("KAPANA YAKALANDINIZ!\n\nANA MENUYE GITMEK ICIN [A] TUSUNA BASINIZ...");	unsigned int bsrl=getch();
	if(bsrl=='a'||bsrl=='A'){system("CLS"); goto emre;} else goto ali;}
	if(xr==x && yr==y) break;
	
	printf("\nKONTROLLER");
	printf("\n  [w] \n[a] [d]\n  [s]");
	printf("\n\n\n");
	//scanf("%d",&move);
	
	unsigned int move = getch();
	
	if((move=='w'||move=='W') && (x!=1 && map[x-1][y]!=b)){
		x--;
	}
	
	if((move=='a'||move=='A') && (y!=2&& map[x][y-1]!=b)){
		y--;
	}
	
	if((move=='d'||move=='D') && (y!=47&& map[x][y+1]!=b)){
		y++;
	}
	
	if((move=='s'||move=='S') && (x!=8&& map[x+1][y]!=b)){
		x++;
	}
	
	
	
	//rand baslangýc
	if(map[x][y]!=map[xc][yc] ||map[x][y]!=map[xc2][yc2] ||map[x][y]!=map[xc3][yc3]||map[x][y]!=map[xc4][yc4]||map[x][y]!=map[xc5][yc5]){

	ran=rand()%4+1;
	
	if(ran==1 && xc!=1 && map[xc-1][yc]!=b){
		xc--;
	}
	
	else if(ran==2 && yc!=2&& map[xc][yc-1]!=b){
		yc--;
	}
	
	else if(ran==3 && yc!=48&& map[xc][yc+1]!=b){
	    yc++;
	}
	
	else if(ran==4 && xc!=8&& map[xc+1][yc]!=b){
	    xc++;
	}
	
	ran2=rand()%4+1;
	
	if(ran2==1 && xc2!=1 && map[xc2-1][yc2]!=b){
		xc2--;
	}
	
	else if(ran2==2 && yc2!=2&& map[xc2][yc2-1]!=b){
		yc2--;
	}
	
	else if(ran2==3 && yc2!=48&& map[xc2][yc2+1]!=b){
	    yc2++;
	}
	
	else if(ran2==4 && xc2!=8&& map[xc2+1][yc2]!=b){
	    xc2++;
	}
	
	ran3=rand()%4+1;
	
	if(ran3==1 && xc3!=1 && map[xc3-1][yc3]!=b){
		xc3--;
	}
	
	else if(ran3==2 && yc3!=2&& map[xc3][yc3-1]!=b){
		yc3--;
	}
	
	else if(ran3==3 && yc3!=48&& map[xc3][yc3+1]!=b){
	    yc3++;
	}
	
	else if(ran3==4 && xc3!=8&& map[xc3+1][yc3]!=b){
	    xc3++;
	}
	
	ran4=rand()%4+1;
	
	if(ran==1 && xc4!=1 && map[xc4-1][yc4]!=b){
		xc4--;
	}
	
	else if(ran4==2 && yc4!=2&& map[xc4][yc4-1]!=b){
		yc4--;
	}
	
	else if(ran4==3 && yc4!=48&& map[xc4][yc4+1]!=b){
	    yc4++;
	}
	
	else if(ran4==4 && xc4!=8&& map[xc4+1][yc4]!=b){
	    xc4++;
	}
	
	ran5=rand()%4+1;
	
	if(ran5==1 && xc5!=1 && map[xc5-1][yc5]!=b){
		xc5--;
	}
	
	else if(ran5==2 && yc5!=2&& map[xc5][yc5-1]!=b){
		yc5--;
	}
	
	else if(ran5==3 && yc5!=48&& map[xc5][yc5+1]!=b){
	    yc5++;
	}
	
	else if(ran5==4 && xc5!=8&& map[xc5+1][yc5]!=b){
	    xc5++;
	}
}
	
	//rand son
	
	for(i=0;i<10;i++){
   	    for(j=0;j<50;j++){
   		if(map[i][j]!=b)
		   map[i][j]=' ';
	   }
   }
   
	map[x][y]=a;
	map[xr][yr]=hedef;
	map[xc][yc]=cnvr;
	
	if(xr==x && yr==y){
	map[xr][yr]=a;	
	} 
	
	hamle++;
	system("CLS");
}
	if(hamle<83)printf("\nEfsanesin! (+)(+)(+) yildiz ile hedefe ulastin...\n\nANA MENUYE DONMEK ICIN [A] TUSUNA BASINIZ...",hamle);
	else if(hamle>82 && hamle<91)printf("\nTebrikler! (+)(+)( ) yildiz ile hedefe ulastin...\n\nANA MENUYE DONMEK ICIN [A] TUSUNA BASINIZ...",hamle);
	else if(hamle>90 && hamle<101)printf("\nFena Degil! (+)( )( ) yildiz ile hedefe ulastin...\n\nANA MENUYE DONMEK ICIN [A] TUSUNA BASINIZ...",hamle);
	else if(hamle>100 )printf("\nBerbat! ( )( )( ) yildiz ile hedefe ulastin...\n\nANA MENUYE DONMEK ICIN [A] TUSUNA BASINIZ...",hamle);
	unsigned int bsrl=getch();
	if(bsrl=='a' || bsrl=='A'){system("CLS"); goto emre;}
}

    else if(menu=='b' || menu=='B'){
    	system("CLS");
    	printf("\nFareyi(%c) hareketli kapanlardan(%c) kacarak peynire(%c) ulastir. ",a,cnvr,hedef);
    	printf("\nKONTROLLER");
	    printf("\n  [w] \n[a] [d]\n  [s]\n\nANA MANUYE DONMEK ICIN [A] TUSUNA BASINIZ...");
	    unsigned int bsrl=getch();
	    if(bsrl=='a' || bsrl=='A'){system("CLS"); goto emre;}
		}
		
	
		
		
	
	ali:
	return 0;
}
