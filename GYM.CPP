#include<graphics.h>
#include<conio.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm,i,p=1,P=-50,o=1,u=1,y=1;
int v=1,V=1,L=1,l=1;
int d=1,D=1;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
outtextxy(200,250,"----*****GYMRATS*****----");
getch();
for(i=0;i<300;i++) {
line(0,430,950,430);

circle(20,250,6);  //left eye
arc(20,250,60,130,10); //right eyebrow
circle(60,250,6); //right eye
arc(60,250,60,130,10); //left eyebrow
arc(40,270,180,360,10); //smile
circle(40,260,4);
circle(40,250,40);
line(40,290,40,370);//middle
line(40,300,20,365); //left hand
line(40,300,60,365); //right hand
line(40,370,20,430); //left leg
line(40,370,60,430); //right leg

if(i<50 || (i>100 && i<150) || (i>200 && i<250) || (i>300 && i<350)){
line(20,365,20,310+p); //left arm
line(60,365,60,310+p); //right arm
line(10,310+p,30,310+p); //dumbels left
line(50,310+p,70,310+p); //dumbels right
ellipse(10,309+p,0,360,3,20);
ellipse(30,309+p,0,360,3,20);   //dum
ellipse(50,309+p,0,360,3,20);
ellipse(70,309+p,0,360,3,20);
p+=1;
delay(30);
if(i==49 || i==149){
p=1;
}

}
else if(i>50 && i<100 || (i>150 && i<200)|| (i>250 &&  i<300) || (i>350 && i<400)){

line(20,365,20,310-P); //left arm
line(60,365,60,310-P); //right arm
line(10,310-P,30,310-P); //dumbels left
line(50,310-P,70,310-P); //dumbels right
ellipse(10,309-P,0,360,3,20);
ellipse(30,309-P,0,360,3,20);   //dum
ellipse(50,309-P,0,360,3,20);
ellipse(70,309-P,0,360,3,20);
P+=1;
delay(30);
if(i==99 || i==199){
P=-50;
}
}
delay(30);
cleardevice();


//2 person
circle(180,240,6);//right eye
arc(180,240,60,130,10);//right eyebrow
circle(220,240,6);//left eye
arc(220,240,60,130,10);//left eyebrow
arc(200,270,180,360,10);//smile

circle(200,250,40);  //head
ellipse(200,330,0,360,40,40);
circle(237,300,7); //khanda
circle(165,300,7);   //k2
if(i<85){

line(165,300,120+v,300-v);//left hand
line(120+v,300-v,120+v,250-v);//left 2 hand

line(280-l,300-l,237,300); //right hand
line(280-l,300-l,280-l,250-l);//right 2 hand

line(100,250-l,300,250-l);//rod
line(100,248-l,300,248-l);
line(100,249-l,300,249-l);//rod completed
ellipse(100,249-l,0,360,5,50);
ellipse(300,249-l,0,360,5,50);

if(i%2==0){
v++;
l++;
}
}
if(i>80 && i<=140){

line(165,300,120+v,300-v);//left hand
line(120+v,300-v,120+v,250-v);//left 2 hand

line(280-l,300-l,237,300); //right hand
line(280-l,300-l,280-l,250-l);//right 2 hand


line(100,250-l,300,250-l);//rod
line(100,248-l,300,248-l);
line(100,249-l,300,249-l);//rod completed
ellipse(100,249-l,0,360,5,50);
ellipse(300,249-l,0,360,5,50);
}

if(i>140 && i<228){
line(165,300,(120+v)-V,(300-v)+V);//left hand
line((120+v)-V,(300-v)+V,(120+v)-V,(250-v)+V);//left 2 hand

line((280-l)+L,(300-l)+L,237,300); //right hand
line((280-l)+L,(300-l)+L,(280-l)+L,(250-l)+L);//right 2 hand


line(100,(250-l)+L,300,(250-l)+L);//rod
line(100,(248-l)+L,300,(248-l)+L);
line(100,(249-l)+L,300,(249-l)+L);//rod completed
ellipse(100,(249-l)+L,0,360,5,50);
ellipse(300,(249-l)+L,0,360,5,50);

if(i%2==0){
 V++;
 L++;
}
}
if(i>230){

line(165,300,(120+v)-V,(300-v)+V);//left hand
line((120+v)-V,(300-v)+V,(120+v)-V,(250-v)+V);//left 2 hand
line((280-l)+L,(300-l)+L,237,300); //right hand
line((280-l)+L,(300-l)+L,(280-l)+L,(250-l)+L);//right 2 hand


line(100,(250-l)+L,300,(250-l)+L);//rod
line(100,(248-l)+L,300,(248-l)+L);
line(100,(249-l)+L,300,(249-l)+L);//rod completed
ellipse(100,(249-l)+L,0,360,5,50);
ellipse(300,(249-l)+L,0,360,5,50);
}
line(180,365,180,430);//left leg
line(220,365,220,430);//right leg
circle(200,260,4);  //nose


//3 person
line(350,150,350,450);//rod left
line(630,150,630,450); //rod right
line(350,190,630,190);
line(350,191,630,191);
line(350,192,630,192);


if(i<85 ){
line(465,315-d,420,270); //left knee
line(515,315-d,555,270); //right knee
line(420,270,420,190); //left hand
line(555,270,555,190); //right hand

circle(465,315-d,7); //khanda left
circle(515,315-d,7); //khanda right
ellipse(490,350-d,0,360,30,40);  //body


circle(490,270-d,40);  //head
circle(470,260-d,6); //left eye
circle(510,260-d,6); //right eye
arc(470,260-d,60,130,10);//left eyebrow
arc(510,260-d,60,130,10);//right eyebrow
arc(490,290-d,180,380,9);//mile
circle(490,280-d,5);  //nose

line(470,380-d,470,450-d); //left leg
line(510,380-d,510,450-d); //right leg

 if(i%2==0){
  d++;
 }
}

if(i>80 && i<=100){

line(465,315-d,420,270); //left knee
line(515,315-d,555,270); //right knee
line(420,270,420,190); //left hand
line(555,270,555,190); //right hand

circle(465,315-d,7); //khanda left
circle(515,315-d,7); //khanda right
ellipse(490,350-d,0,360,30,40);  //body


circle(490,270-d,40);  //head
circle(470,260-d,6); //left eye
circle(510,260-d,6); //right eye
arc(470,260-d,60,130,10);//left eyebrow
arc(510,260-d,60,130,10);//right eyebrow
arc(490,290-d,180,380,9);//mile
circle(490,280-d,5);  //nose

line(470,380-d,470,450-d); //left leg
line(510,380-d,510,450-d); //right leg

}

if(i>100 && i<188){

line(465,(315-d)+D,420,270); //left knee
line(515,(315-d)+D,555,270); //right knee
line(420,270,420,190); //left hand
line(555,270,555,190); //right hand

circle(465,(315-d)+D,7); //khanda left
circle(515,(315-d)+D,7); //khanda right
ellipse(490,(350-d)+D,0,360,30,40);  //body


circle(490,(270-d)+D,40);  //head
circle(470,(260-d)+D,6); //left eye
circle(510,(260-d)+D,6); //right eye
arc(470,(260-d)+D,60,130,10);//left eyebrow
arc(510,(260-d)+D,60,130,10);//right eyebrow
arc(490,(290-d)+D,180,380,9);//mile
circle(490,(280-d)+D,5);  //nose

line(470,(380-d)+D,470,(450-d)+D); //left leg
line(510,(380-d)+D,510,(450-d)+D); //right leg

if(i%2==0){
 D++;
}
}
if(i>180){

line(465,(315-d)+D,420,270); //left knee
line(515,(315-d)+D,555,270); //right knee
line(420,270,420,190); //left hand
line(555,270,555,190); //right hand

circle(465,(315-d)+D,7); //khanda left
circle(515,(315-d)+D,7); //khanda right
ellipse(490,(350-d)+D,0,360,30,40);  //body


circle(490,(270-d)+D,40);  //head
circle(470,(260-d)+D,6); //left eye
circle(510,(260-d)+D,6); //right eye
arc(470,(260-d)+D,60,130,10);//left eyebrow
arc(510,(260-d)+D,60,130,10);//right eyebrow
arc(490,(290-d)+D,180,380,9);//mile
circle(490,(280-d)+D,5);  //nose

line(470,(380-d)+D,470,(450-d)+D); //left leg
line(510,(380-d)+D,510,(450-d)+D); //right leg
}



}

getch();
closegraph();
}
