#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct ID_Card{
  char name[25];
  int std;
  int roll_no;
  char city[50];
};

void printid(struct ID_Card);

int main(int argc, char const *argv[]) {

  struct ID_Card ID_Card1;
  struct ID_Card ID_Card2;

  strcpy(ID_Card1.name, "Kasim");
  ID_Card1.std = 8;
  ID_Card1.roll_no = 117;
  strcpy(ID_Card1.city, "Trichy");

  strcpy(ID_Card2.name, "Nisha");
  ID_Card2.std = 7;
  ID_Card2.roll_no = 112;
  strcpy(ID_Card2.city, "Chennai");

  printid(ID_Card1);
  printf("\n");
  printid(ID_Card2);

  return 0;
}

void printid(struct ID_Card ID_Card){
  printf("Name : %s\n", ID_Card.name);
  printf("Standard : %d\n",ID_Card.std);
  printf("Roll No : %d\n",ID_Card.roll_no);
  printf("City : %s\n",ID_Card.city);
}
