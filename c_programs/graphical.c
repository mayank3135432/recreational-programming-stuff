#include<graphics.h>
#include<unistd.h>
void draw(int x1,int y1, int x2, int y2){
    double m = (y2-y1)/(x2-x1);
    for(int x=x1;x<=x2;x++){
        putpixel(x,m*(x-x1)+y1,BLUE);
    }
}

int main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    draw(2,2,400,400);

    //closegraph();
    
    while(1);
    
    return 0;
    // return main(); donot do this
}