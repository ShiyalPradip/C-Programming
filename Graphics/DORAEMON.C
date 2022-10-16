#include<graphics.h>
#include<conio.h>
void main()
{
	int Gd=0,Gm;



	initgraph(&Gd,&Gm,"C:\\TC\\BGI");
	initgraph(&Gd,&Gm,"C:\\TURBOC3\\BGI");

	ellipse(300,150,-53,233,140,130); // Main Head
	ellipse(272,75,0,360,27,30); // Left Main Eye
	ellipse(327,75,0,360,27,30); // Right Main Eye

	ellipse(280,74,0,360,7,10); //Left Iner Eye
	ellipse(315,74,0,360,7,10); //Left Iner Eye

	fillellipse(283,73,1,3); //Left Iner 1 Eye
	fillellipse(312,73,1,3); //Right Iner 2 Eye

	circle(299,110,15); // Nose
	fillellipse(295,105,3,3); // Light Inside The Nose

	line(300,125,300,170); // Node Line
	line(280,170,320,170); // Mouth Line

	arc(293,320,95,109,150); // Left Mouth Line
	arc(309,320,73,86,150); // Right Mouth Line

	arc(223,152,270,310,34); // Lefy Chick
	arc(374,150,230,260,34); // Right Chick

	ellipse(220,156,60,280,25,30); // Left Chick 1
	ellipse(372,154,-100,120,25,30); // Right Chick 1

	// Left Mushtesh
	line(270,128,215,114); // Mushtesh 1
	line(270,137,215,137); // Mushtesh 2
	line(270,147,215,160); // Mushtesh 2

	// Right Mushtesh
	line(330,128,385,110); // Mushtesh 1
	line(330,137,385,137); // Mushtesh 2
	line(330,147,385,160); // Mushtesh 3

	ellipse(295,175,190,-8,80,70); // Big Smile
	ellipse(286,236,40,186,20,20); // Left Tang
	ellipse(317,236,3,137,20,20); // Right Tang

	arc(255,140,100,184,60); // Left Chik 1
	arc(345,134,-18,82,56); // Left Chik 2

	arc(300,20,250,290,250); // Belt 1
	arc(300,30,250,290,250); // Belt 1

	line(213,253,213,265); // Belt 1.1
	line(385,253,385,265); // Belt 1.2

	circle(300,300,20); // Bil Ball
	circle(300,305,4);  // Small Ball
	line(300,309,300,320); //Line 1
	line(282,290,318,290); //Line 2
	line(282,295,318,295); //line 3

	ellipse(300,325,130,410,80,65); //Tamy
	arc(300,330,186,355,45); // Poket 1
	line(257,335,345,335); // Poket 2

	//left Hand
	circle(120,200,25); // Punch
	line(145,200,200,242); // Uper Hand
	line(120,226,210,320); // Uper Hand

	//Right Hand
	arc(460,350,179,100,25);
	arc(425,323,290,-1,30);
	line(385,264,455,324);
	line(390,330,435,350);

	//Lages
	line(210,290,210,412); //Left Lag
	line(201,434,280,443);
	line(390,290,390,412); //Right Lag
	line(319,443,398,433);

	arc(300,450,0,180,20); //Space Between Lages
	ellipse(210,432,90,180,8,20); //Left Lag Side
	ellipse(230,450,125,360,50,20); //Foot

	ellipse(390,432,0,90,8,20); //Right Lag Side
	ellipse(370,450,170,416,50,20); //Foot
getch();
}