#include <stdio.h>

int main(void) {
int x = 0;
int y = 0;
int d = 2;
int r_y = 0;
int r_x = 0;
const int G = 1001;
const int W = 1000;
fprintf(stdout, "enter coordinates\n");
fscanf(stdin, "%i %i", &x, &y);
if (x < 0 || y < 0 || x > W || y > G)
fprintf(stdout, "be beyond the board");
else
{
fscanf(stdin, "%i", &r_x);
fscanf(stdin, "%i", &r_y);
if (x == r_x || y == r_y)
fprintf(stdout, "point on the grid");
else
{
if ((y > r_y)&&(x < r_x))
d = 1;
if((y > r_y)&&(x > r_x))
d = 0;
if ((y < r_y)&&(x < r_x))
d = 3;

fprintf(stdout,"%i", d);
}
}
return 0;

}
