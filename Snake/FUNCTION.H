void Game_Start();
void Red_Partition();
void Cyan_Partition();
void Control();
void Move_Up();
void Move_Left();
void Move_Down();
void Move_Right();
void Lost_Hearts();
void Game_Over();
void Conditions();
void Blue_Partition();
void Black_Partition();
void Border();
void Player();
void Position_Change();
void Fruit_Position();

//Variables
int  Fruit=0;//Fruits
int  X=10,Y=20; // Player
long Score=0;

int  i,j;                // Loops
int  Height=24,Width=60; // Height & Width Of Window
long Heighest;           // Show Score
char Choice;             // Geting Choice
int  Heart=3;            // Display Total Hearts
int  Game_Started=0;     // Game Is Started Or Not

FILE *fp; // To Store Heigh Score In "Score.txt" File


