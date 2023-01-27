// Headers
#include <stdio.h>
#include <conio.h>

// Main Function
int main()
{
    int z, x,temp;
    printf("Enter the num1:");
    scanf("%d", &z);
    printf("Enter the num2:");
    scanf("%d", &x);
    printf("ENTER 1 FOR HCF\nENTER 2 FOR LCM");
    scanf("%d",&temp);
    switch (temp)
    {
    case 1:
        printf("HCF = %d",hcf(z, x));
        break;
    case 2:
        printf("LCM = %d",lcm(z,x));
        break;
    
    default:
        printf("You entered a wrong No.");
        break;
    }
    return 0;
}

//  Function to finf LCM

int lcm(int m, int n){
    int lcm = (m*n)/hcf(m,n);
    return lcm;
}

// Function to find HCF

int hcf(int m, int n)
{
    // using a = bq+r (Euclids Division Lema)

    int a, b, q, r;
    int i;
    if (m > n)
    {
        r = m % n;
        if (r == 0)
        {
            printf("HCF = %d", n);
        }
        else
        {
            for (i = 1; r != 0; i++)
            {
                a = m;
                b = n;
                q = a / b;
                a = b;
                b = r;
                r = a % b;
            }
            return q;
        }
    }

    if (m == n)
    {
        return q;
    }

    if (m < n)
    {
        r = n % m;
        if (r == 0)
        {
            printf("HCF = %d", m);
        }
        else
        {

            for (i = 1; r != 0; i++)
            {
                a = n;
                b = m;
                q = a / b;
                a = b;
                b = r;
                r = a % b;
            }
            return q;
        }
    } 
}