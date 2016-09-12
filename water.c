#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int bpm = 12; // bottles per minute
    printf("minutes: ");
    int minutes = GetInt();
    int bottles = bpm * minutes;
    printf("bottles: %d\n", bottles);
}