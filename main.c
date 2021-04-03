/*
*   EXAM #1: PRACTICAL PART
*   Filename: main.c
*   This file allows a user to run any of the 3 problems for Practical Exam #1
*   Last modified by: Angel F. Garcia (3/1/2021)
*/
#include <stdio.h>
#include <string.h>

int main(void) {

  int opt;
  printf("Enter 1 to test P1, 2 to test P2, 3 to test P3: ");
  scanf("%d", &opt);
  
  if(opt == 1) {
    
    /***************************
     *  Problem 1: Blood Pressure
     ***************************/
    
    // TODO: Fix the code below.
    // HINT: The code doesn't need big changes. Review the conditions and the outputs carefully.

    int sysP, diasP;

  
    // Read Systolic and Diastolic pressure

    printf("Enter Systolic and Diastolic: ");
    scanf("%d %d", &sysP, &diasP);

    if(sysP < 120 && diasP < 80) {
      printf("Normal\n");

    } else if((sysP >= 120 && sysP <= 129) && diasP < 80) {
      printf("Elevated\n");

    } else if((sysP >= 130 && sysP <= 139) || (diasP >= 80 && diasP <= 89)) {
      printf("Stage 1 Hypertension\n");

    } else if((sysP >= 140 && sysP < 180) || (diasP >= 90 && diasP < 120)) {
      printf("Stage 2 Hypertension\n");

    } else if(sysP >= 180 || diasP >= 120) {
      printf("Hypertensive Crysis\n");

    } 

    /* Problem 1 End */
  } 
  else if(opt == 2) {
    
    /***************************
     *  Problem 2: Pokemon Damage
     ***************************/
    
    // TODO: Your P2 code goes here
    // Good luck!!
    int pikaCHU;
    int charZRD;
    int opt;
    int lvL;
    int atkNME;
    int poWR;
    
    printf("Enter Pokemon Name (Pikachu : 1 or Charizard : 2): ");
    scanf("%d", &opt);

    if(opt == 1) {
      printf("Enter Pikachu Level (1 - 100): ");
      

    }else if(opt == 2) {
      printf("Enter Charizard Level (1 - 100): ");
    }

    /* Problem 2 End */
  } else if(opt == 3) {
    
   /***************************
     *  Problem 3: Shop
     ***************************/
    
    // TODO: Your P3 code goes here
    // Good luck!!
    
    /* Problem 3 End */
  }
}
