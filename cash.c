#include<cs50.h>
#include<stdio.h>
int main(void)
{
    int amount;
do
{
    amount = get_int("Change owed: ");
}
while (amount < 0);

int coins = 0;

while (amount >= 25)
{
    amount = amount - 25;
    coins++;
}
while (amount >= 10)
{
    amount = amount - 10;
    coins++;
}
while (amount >= 5)
{
    amount = amount - 5;
    coins++;
}
while (amount >= 1)
{
    amount = amount - 1;
    coins++;
}
printf("%d\n", coins);
}
