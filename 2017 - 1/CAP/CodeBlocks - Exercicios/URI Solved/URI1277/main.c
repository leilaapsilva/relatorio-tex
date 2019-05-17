#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	int N,T;
	char name[5000];
	char freq[5000];
	char r[5000];
	char char1;
	int i,j,k,l,m, cont;

	scanf("%d",&T);
	scanf("%c",&char1);


	for (i=0; i<T; i++) {
		scanf("%d",&N);
		scanf("%c",&char1);
		gets(name);
		gets(freq);
		r[0] = '\0';
		j = 0;
		k = 0;
		l = 0;
		m = 0;
		cont = 0;
		do {
    if (freq[cont] == 'P')
        l++;
    else if (freq[cont] == 'A')
        m++;
    else if (freq[cont] == ' ' || freq[cont] == '\0') {
        if (l < m*3) {
            while (name[j] != ' ' && name[j] != '\0') {
                r[k] = name[j];
                k++;
                j++;
            }
            r[k] = name[j];
            k++;
            j++;
            l = 0;
            m = 0;
        }
        else {
            while (name[j] != ' ') {
                j++;
            }
            j++;
            l = 0;
            m = 0;
        }
    }
    cont++;
} while (freq[cont-1] != '\0');
r[k-1] = '\0';
printf("%s\n", r);

}
return 0;
}
