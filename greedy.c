#include <stdio.h>
#include <cs50.h>
#include <math.h> 

int main(void)

{
    float OddMoney = 0;
    
    do {
        printf("How much change is owed?\n");
        OddMoney = GetFloat();
    } while (OddMoney < 0);
   
    int Coins[] = {25 , 10 , 5 , 1};
    int MinCoins = 0;
    int Cent = (int) round(OddMoney*100);
    int n = 0;
    
        do {
            if (Cent>=Coins[n]){
                Cent-=Coins[n];
                MinCoins++;
            } 
            else {
                n++;
            }
        }
        while ( Cent > 0 );
        
        printf("%d\n", MinCoins);
    return 0;
}