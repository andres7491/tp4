#include<stdio.h>
#include<stdlib.h>

int main(){
    char nom[50];
    int i=0, letraA=0, letraE=0, letraI=0, letraO=0, letraU=0;

    printf("Nombre: "); gets(nom);

    for(i=0;i<50;i++)
   

        if(nom[i]=='a'||nom[i]=='A')
           letraA++;
        else if(nom[i]=='e'||nom[i]=='E')
            letraE++;
            else if(nom[i]=='i'||nom[i]=='I')
                letraI++;
                else if(nom[i]=='o'||nom[i]=='O')
                    letraO++;
                    else if(nom[i]=='u'||nom[i]=='U')
                    letraU++;
                    
                    
                    printf("su nombre tiene %d letra A\n\n",letraA);
                    printf("su nombre tiene %d letra E\n\n",letraE);
                    printf("su nombre tiene %d letra I\n\n",letraI);
                    printf("su nombre tiene %d letra O\n\n",letraO);
                    printf("su nombre tiene %d letra U\n\n",letraU);
}
                   
