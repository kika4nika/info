#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
int size;
int xit;
int d, g, k;
int h = 5;
int a = 0;
int f = 0;
int n = 0;
scanf("%d", &size);
scanf("%d", &xit);
f = xit;
int j = 2;
int i;
int matr[size][j];
for(i = 0; i != size; ++i){
for(j = 0; j != 2; ++j){
scanf("%d", &matr[i][j]);
}
}
f = xit;
i = 0;
j = 0;
int m[f];
int v[f];
for (a = 1; a <= f; ++a){
v[a] = a;
}
for (a = 1; a <= f; ++a){
m[a] = a;
}

for (xit = 1; xit <= f; ++xit){
printf("%d ", xit);
++n;
v[xit] = 0;
for(i = 0; i != size; ++i){
j = 1;
h = matr[i][j];
if (h == n){
d = matr[i][j - 1];
v[d] = 0;
m[d] = 0;
}
}

for (a = 1; a <= f; ++a){
if((v[a] != 0)&&(a != n)){
printf("%d ", v[a]);
for(i = 0; i != size; ++i){
j = 1;
h = matr[i][j];
d = matr[i][j-1];
if ((h == v[a])&&(v[d] != 0)) {

v[d] = 0;
}
}
}
k = v[a];
if((m[a] != 0)&&(m[a] != k)){
for(i = 0; i != size; ++i){
j = 1;
h = matr[i][j];
d = matr[i][j-1];
if ((h == m[a])&&(m[d] != 0)) {

m[d] = 0;

}
}
}


}
printf("\n");
for (g = 1; g <= f; ++g){
if(m[g] != 0){
printf("%d ", g);
}
m[g] = g;
v[g] = g;
}

printf("\n");
printf("\n");
}

return 0;