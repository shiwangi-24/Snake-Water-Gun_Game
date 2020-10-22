//SNAKE-WATER-GUN GAME
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int SnakeWaterGun(char You, char Comp)
{
  // return 1 if you win, -1 if you loose and 0 if draw
  //draw conditions
  //case covered:ss, gg, ww
  if(You==Comp)
  {
      return 0;
  }
  // non-draw conditions
  //case covered: sg-gs, sw-ws, gw-wg
  if(You=='s' && Comp=='g')
  {
      return -1;
  }
 else if (You=='g' && Comp=='s')
 {
     return 1;
 }
if(You=='s' && Comp=='w')
  {
      return 1;
  }
 else if (You=='w' && Comp=='s')
 {
     return -1;
 }
 if(You=='g' && Comp=='w')
  {
      return -1;
  }
 else if (You=='w' && Comp=='g')
 {
     return 1;
 }
}
int main()
{
    char You, Comp;
    srand(time(0));
    int number = rand()%100 +1;
    if(number<33)
    {
        Comp='s';
    }
    else if (number>33 && number<66)
    {
      Comp='w';
    }
    else
    {
        Comp='g';
    }
    printf("Enter s for Snake, w for Water, and g for Gun\n");
    scanf("%c", &You);
    int result = SnakeWaterGun(You, Comp);
    printf("You chose %c and computer chose %c. \n", You , Comp);
    if(result==0)
    {
       printf("Game Draw!\n");
    }
    else if(result==1)
    {
        printf("You Win!\n");
    }
    else
    {
        printf("You Lose!\n");
    }
    return 0;
}
