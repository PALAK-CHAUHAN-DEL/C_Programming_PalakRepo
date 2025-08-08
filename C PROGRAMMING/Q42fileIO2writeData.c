// Wap to input studentn information from a user and enter it to a file.
// We will not create a file first as it get's creatd if it doesn't exist.
// Compile the fiel here and look for the changes in the text file Student.txt.

#include <stdio.h>
int main () {
  FILE *fptr;
  fptr = fopen ("StudentData.txt", "w");
  char name[100];
  int roll;
  float cgpa;
  printf ("Enter the name of the student : ");
  scanf ("%s", name); //NO & as name itself is an array.
  printf ("Enter the roll no : ");
  scanf ("%d", &roll);
  printf ("Enter the cgpa of the student : ");
  scanf ("%f", &cgpa);
  
  fprintf (fptr, "Student name is : %s\n", name);
  fprintf (fptr, "Student roll no is : %d\n", roll);
  fprintf (fptr, "Student cgpa is : %f\n", cgpa);

  fclose (fptr);
  return 0;
}
