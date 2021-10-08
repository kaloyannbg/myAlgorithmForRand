    #include <stdio.h>

    int algorithm(long long int iNum);

    int main()
    {

        int iNumber = 1;

        while (iNumber != 0)
        {

            printf(" -- Enter number 0 for exit! --\n");

            printf(" -- Please enter number : ");

            scanf("%d", &iNumber);

            printf(" Algorithm random number: %d", algorithm(iNumber));
        }

        return 0;
    }

    int algorithm(long long int iNum)
    {

        static int i = 2; // Static variable i

        int j = 0;

        int someRand = 0;

        for(j = 0; j < i+16; j++) {
            someRand = someRand + j;
        }


        iNum = (iNum << i) ^ someRand; // down will be valid if iNum = (iNum << i) ^ i and i++
        // !! FUNC PARAMETER - 0001 // , 0100, , 1000, 10000, 100000, 1000000, 10000000
        // 0100 ^ 0010 = 0110 , 1000 ^ 0011 = 1011, 10000 ^ 0100 = 10100
        if (i > 30)
        {
            i = 2;
        }
        else
        {
            i = i + 2;
        }

        return iNum;
    }
