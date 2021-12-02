#include <stdio.h>

int main()
{
    int i,j,k,testCases;
    int game[3][3];
    int winner;

    scanf("%d",&testCases);

    for(i=0; i<testCases; i++)
    {
        for(j=0; j<3; j++)
            for(k=0; k<3; k++)
                scanf("%d",&game[j][k]);

        winner=0;
        for(j=0; j<3; j++)
        {
            if(game[j][0]==game[j][1]&&game[j][2]==game[j][1])
            {
                winner=game[j][0];
                break;
            }
        }
        if(!winner)
        {
            for(j=0; j<3; j++)
            {
                if(game[0][j]==game[1][j]&&game[2][j]==game[1][j])
                {
                    winner=game[0][j];
                    break;
                }
            }
        }

        if(!winner)
        {
            if(game[0][0]==game[1][1]&&game[2][2]==game[1][1])
            {
                winner=game[0][0];
            }
            if(game[0][2]==game[1][1]&&game[2][0]==game[1][1])
            {
                winner=game[0][2];
            }
        }


        printf("%d\n",winner);
    }
    return 0;
}
