///Bismillahir Rahmanir Raheem---
#include <stdio.h>
#include <conio.h>
#include <time.h>

void timu()
{
    int seconds = 5;

    while (seconds >= 0)
    {
        int h = seconds / 3600;
        int m = (seconds % 3600) / 60;
        int s = seconds % 60;


        printf("\r%02d:%02d:%02d", h, m, s);
        fflush(stdout);

        clock_t stop = clock() + CLOCKS_PER_SEC;

        while (clock() < stop) { }

        seconds--;
    }
    printf("\n");
}

void rate()
{
    int y;
    printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------");

    printf("\n\n``````````````````````````````````````````````````\n");
    printf("Thank you for using our service                  `\n");
    printf("Please Rate Us *_*                               `\n                                                 `\n");
    printf("1. ***** (5 Star)                                `\n");
    printf("2. *** (3 Star)                                  `\n");
    printf("3. * (1 Star)                                    `\n");
    printf("                                                 `\n");
    printf("``````````````````````````````````````````````````\n");
    printf("Type...");

    scanf("%d", &y);


    while (y < 1 || y > 3)
    {
        printf("Invalid. Please enter a value between 1 and 3:.... ");
        scanf("%d", &y);
    }
    if (y == 1)
    {
        printf("\nThank you, sir\n");
    }
    else if (y==2)
    {
        printf("\nThank you, sir\n");
    }
    else if(y==3)
    {
        printf("\nI will try to improve myself\n");

    }
}

int main()
{
    system("COLOR 0B");
    int destination, travelMode, rating, mealRate,k,sum,z,m,n,x,continueMenu,h,seconds;

    char input[12];

    printf("                                                                 ________________________________________\n"
           "                                                               _/_                                      _\\_\n"
           "                                                            __/__/           As-salamu alaykum          \\__\\__\n"
           "                                                           | « « |     welcome to my Travel Agency      | » » |\n"
           "                                                            ¯¯\\¯¯\\  You will never forget our service   /¯¯/¯¯\n"
           "                                                               ¯\\¯                                      ¯/¯\n"
           "                                                                 ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯\n\n\n");


    do
    {
        printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
        printf("                                                                             Here is the Menu__\n");
        printf("                                                                       ------------------------------\n");
        printf("                                                                      1.Distance from dhaka to others\n");
        printf("                                                                              2. Total Cost\n");
        printf("                                                                         3. Beautiful Visiting Site\n");
        printf("                                                                              4. Travel Time\n");
        printf("                                                                          5. Book a Tour Package\n\n");
        printf("                                                               If you don't want to know anything then Press (6)\n");
        printf("                                                                                  6. Exit\n");
        printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");


        printf("\ntype any number from 1 to 6\n"
               "....");
        scanf("%d", &x);

        while (x < 1 || x > 6)
        {
            printf("Invalid input. Please try again....\n"
                   "....");
            scanf("%d", &x);
        }

        switch(x)
        {

        case 1:                     ///     ///     ///
            printf("\n");
            printf("Where do you want to go from Dhaka?...\n");
            printf("--------------------\n");
            printf("1. Cox's Bazar\n");
            printf("2. Sylhet\n");
            printf("3. Bandarban\n");
            printf("4. Kuakata\n");
            printf("--------------------\n");
            printf("\nType any number from 1 to 4...");

            int y;
            scanf("%d", &y);
            while (y < 1 || y > 4)
            {
                printf("Invalid input. Please try again....\n"
                       "....");
                scanf("%d", &y);
            }
            switch(y)
            {
            case 1:
                printf("\nThe total Distance is 398KM\nThe farthest destination in our website\n");
                break;
            case 2:
                printf("\nThe total Distance is 235KM\nThe closest destination in our website\n");
                break;
            case 3:
                printf("\nThe total Distance is 326KM\n");
                break;
            case 4:
                printf("\nThe total Distance is 295KM\n");
                break;

            }
            break;

        case 2:                    ///     ///     ///
            printf("\n");
            printf("Where do you want to go from Dhaka?...\n");
            printf("------------------------------------------\n");
            printf("1. Cox's Bazar\n");
            printf("2. Sylhet\n");
            printf("3. Bandarban\n");
            printf("4. Kuakata\n");

            printf("\nType any number from 1 to 4...");
            scanf("%d", &destination);

            while (destination < 1 || destination > 4)
            {
                printf("Invalid. Please enter a value between 1 and 4:... ");
                scanf("%d", &destination);
            }

            switch (destination)
            {
            case 1: //cox's

                printf("\nWhich type of vehicle do you want to go:\n");
                printf("------------------------------------------\n");
                printf("1. Plane\n");
                printf("2. Bus\n");
                printf("3. Train\n");

                printf("Type...");
                scanf("%d", &travelMode);

                while (travelMode < 1 || travelMode > 3)
                {
                    printf("Invalid. Please enter a value between 1 and 3: ");
                    scanf("%d", &travelMode);
                }

                switch (travelMode)
                {
                case 1: // Plane
                    printf("\nWhich type of hotel do you want to live:\n");
                    printf("------------------------------------------\n");
                    printf("1. 5 star\n");
                    printf("2. 3 star\n");
                    printf("3. 2 star\n");

                    printf("Type...");
                    scanf("%d", &rating);
                    while (rating < 1 || rating > 3)
                    {
                        printf("Invalid. Please enter a value between 1 and 3:... ");
                        scanf("%d", &rating);
                    }
                    switch (rating)
                    {
                    case 1:
                        printf("\nChoice your meal rate in a day??\n");
                        printf("------------------------------------------\n");
                        printf("1. Approximately 800 Taka in a day\n");
                        printf("2. Approximately 1200 Taka in a day\n");
                        printf("3. Approximately 1500 Taka in a day\n");

                        printf("Type...");
                        scanf("%d", &mealRate);

                        while (mealRate < 1 || mealRate > 3)
                        {
                            printf("Invalid. Please enter a value between 1 and 3:... ");
                            scanf("%d", &mealRate);
                        }

                        switch (mealRate)
                        {
                        case 1: // 2k
                            printf("\nThe total Cost of a single person is 20000 Taka include visiting various tourist spots in Cox's Bazar-(3 days 2 night)\n");
                            break;
                        case 2: // 3k
                            printf("\nThe total Cost of a single person is 18000 Taka include visiting various tourist spots in Cox's Bazar-(3 days 2 night)\n");
                            break;
                        case 3: // 5k
                            printf("\nThe total Cost of a single person is 17000 Taka include visiting various tourist spots in Cox's Bazar-(3 days 2 night)\n");
                            break;
                        default:
                            printf("Invalid meal rate\n");
                            break;
                        }
                        break;

                    case 2:
                        printf("\nChoice your meal rate in a day?\n");
                        printf("------------------------------------------\n");
                        printf("1. Approximately 800 Taka in a day\n");
                        printf("2. Approximately 1200 Taka in a day\n");
                        printf("3. Approximately 1500 Taka in a day\n");
                        printf("Type...");
                        scanf("%d", &mealRate);

                        while (mealRate < 1 || mealRate > 3)
                        {
                            printf("Invalid. Please enter a value between 1 and 3: ");
                            scanf("%d", &mealRate);
                        }

                        switch (mealRate)
                        {
                        case 1: // 2k
                            printf("\nThe total Cost of a single person is 17000 Taka include visiting various tourist spots in Cox's Bazar-(3 days 2 night)\n");
                            break;
                        case 2: // 3k
                            printf("\nThe total Cost of a single person is 15000 Taka include visiting various tourist spots in Cox's Bazar-(3 days 2 night)\n");
                            break;
                        case 3: // 5k
                            printf("\nThe total Cost of a single person is 14000 Taka include visiting various tourist spots in Cox's Bazar-(3 days 2 night)\n");
                            break;
                        default:
                            printf("Invalid meal rate\n");
                            break;
                        }
                        break;

                    case 3:
                        printf("\nChoice your meal rate in a day?\n");
                        printf("------------------------------------------\n");
                        printf("1. Approximately 800 Taka in a day\n");
                        printf("2. Approximately 1200 Taka in a day\n");
                        printf("3. Approximately 1500 Taka in a day\n");
                        printf("Type...");
                        scanf("%d", &mealRate);

                        while (mealRate < 1 || mealRate > 3)
                        {
                            printf("Invalid. Please enter a value between 1 and 3: ");
                            scanf("%d", &mealRate);
                        }

                        switch (mealRate)
                        {
                        case 1: // 2k
                            printf("\nThe total Cost of a single person is 15000 Taka include visiting various tourist spots in Cox's Bazar-(3 days 2 night)\n");
                            break;
                        case 2: // 3k
                            printf("\nThe total Cost of a single person is 13500 Taka include visiting various tourist spots in Cox's Bazar-(3 days 2 night)\n");
                            break;
                        case 3: // 5k
                            printf("\nThe total Cost of a single person is 12000 Taka include visiting various tourist spots in Cox's Bazar-(3 days 2 night)\n");
                            break;
                        default:
                            printf("Invalid meal rate\n");
                            break;
                        }
                        break;

                    }
                    break;

                case 2: // Bus
                    printf("\nWhich type of hotel do you want to live:\n");
                    printf("------------------------------------------\n");
                    printf("1. 5 star\n");
                    printf("2. 3 star\n");
                    printf("3. 2 star\n");
                    printf("Type...");
                    scanf("%d", &rating);
                    while (rating < 1 || rating > 3)
                    {
                        printf("Invalid. Please enter a value between 1 and 3: ");
                        scanf("%d", &rating);
                    }
                    switch (rating)
                    {
                    case 1:
                        printf("\nChoice your meal rate in a day??\n");
                        printf("------------------------------------------\n");
                        printf("1. Approximately 800 Taka in a day\n");
                        printf("2. Approximately 1200 Taka in a day\n");
                        printf("3. Approximately 1500 Taka in a day\n");
                        printf("Type...");
                        scanf("%d", &mealRate);

                        while (mealRate < 1 || mealRate > 3)
                        {
                            printf("Invalid. Please enter a value between 1 and 3: ");
                            scanf("%d", &mealRate);
                        }

                        switch (mealRate)
                        {
                        case 1: // 2k
                            printf("\nThe total Cost of a single person is 18000 Taka include visiting various tourist spots in Cox's Bazar-(3 days 2 night)\n");
                            break;
                        case 2: // 3k
                            printf("\nThe total Cost of a single person is 16000 Taka include visiting various tourist spots in Cox's Bazar-(3 days 2 night)\n");
                            break;
                        case 3: // 5k
                            printf("\nThe total Cost of a single person is 15000 Taka include visiting various tourist spots in Cox's Bazar-(3 days 2 night)\n");
                            break;
                        default:
                            printf("Invalid meal rate\n");
                            break;
                        }
                        break;

                    case 2:
                        printf("\nChoice your meal rate in a day?\n");
                        printf("------------------------------------------\n");
                        printf("1. Approximately 800 Taka in a day\n");
                        printf("2. Approximately 1200 Taka in a day\n");
                        printf("3. Approximately 1500 Taka in a day\n");
                        printf("Type...");
                        scanf("%d", &mealRate);

                        while (mealRate < 1 || mealRate > 3)
                        {
                            printf("Invalid. Please enter a value between 1 and 3: ");
                            scanf("%d", &mealRate);
                        }

                        switch (mealRate)
                        {
                        case 1: // 2k
                            printf("\nThe total Cost of a single person is 16000 Taka include visiting various tourist spots in Cox's Bazar-(3 days 2 night)\n");
                            break;
                        case 2: // 3k
                            printf("\nThe total Cost of a single person is 15000 Taka include visiting various tourist spots in Cox's Bazar-(3 days 2 night)\n");
                            break;
                        case 3: // 5k
                            printf("\nThe total Cost of a single person is 13000 Taka include visiting various tourist spots in Cox's Bazar-(3 days 2 night)\n");
                            break;
                        default:
                            printf("Invalid meal rate\n");
                            break;
                        }
                        break;

                    case 3:
                        printf("\nChoice your meal rate in a day?\n");
                        printf("------------------------------------------\n");
                        printf("1. Approximately 800 Taka in a day\n");
                        printf("2. Approximately 1200 Taka in a day\n");
                        printf("3. Approximately 1500 Taka in a day\n");
                        printf("Type...");
                        scanf("%d", &mealRate);

                        while (mealRate < 1 || mealRate > 3)
                        {
                            printf("Invalid. Please enter a value between 1 and 3: ");
                            scanf("%d", &mealRate);
                        }

                        switch (mealRate)
                        {
                        case 1: // 2k
                            printf("\nThe total Cost of a single person is 14000 Taka include visiting various tourist spots in Cox's Bazar-(3 days 2 night)\n");
                            break;
                        case 2: // 3k
                            printf("\nThe total Cost of a single person is 13000 Taka include visiting various tourist spots in Cox's Bazar-(3 days 2 night)\n");
                            break;
                        case 3: // 5k
                            printf("\nThe total Cost of a single person is 11000 Taka include visiting various tourist spots in Cox's Bazar-(3 days 2 night)\n");
                            break;
                        default:
                            printf("Invalid meal rate\n");
                            break;
                        }
                        break;

                    }
                    break;


                case 3: // Train
                    printf("\nWhich type of hotel do you want to live:\n");
                    printf("------------------------------------------\n");
                    printf("1. 5 star\n");
                    printf("2. 3 star\n");
                    printf("3. 2 star\n");
                    printf("Type...");
                    scanf("%d", &rating);
                    while (rating < 1 || rating > 3)
                    {
                        printf("Invalid. Please enter a value between 1 and 3: ");
                        scanf("%d", &rating);
                    }
                    switch (rating)
                    {
                    case 1:
                        printf("\nChoice your meal rate in a day??\n");
                        printf("------------------------------------------\n");
                        printf("1. Approximately 800 Taka in a day\n");
                        printf("2. Approximately 1200 Taka in a day\n");
                        printf("3. Approximately 1500 Taka in a day\n");
                        printf("Type...");
                        scanf("%d", &mealRate);

                        while (mealRate < 1 || mealRate > 3)
                        {
                            printf("Invalid. Please enter a value between 1 and 3: ");
                            scanf("%d", &mealRate);
                        }

                        switch (mealRate)
                        {
                        case 1: // 2k
                            printf("\nThe total Cost of a single person is 18000 Taka include visiting various tourist spots in Cox's Bazar-(3 days 2 night)\n");
                            break;
                        case 2: // 3k
                            printf("\nThe total Cost of a single person is 16500 Taka include visiting various tourist spots in Cox's Bazar-(3 days 2 night)\n");
                            break;
                        case 3: // 5k
                            printf("\nThe total Cost of a single person is 15000 Taka include visiting various tourist spots in Cox's Bazar-(3 days 2 night)\n");
                            break;
                        default:
                            printf("Invalid meal rate\n");
                            break;
                        }
                        break;

                    case 2:
                        printf("\nChoice your meal rate in a day?\n");
                        printf("------------------------------------------\n");
                        printf("1. Approximately 800 Taka in a day\n");
                        printf("2. Approximately 1200 Taka in a day\n");
                        printf("3. Approximately 1500 Taka in a day\n");
                        printf("Type...");
                        scanf("%d", &mealRate);

                        while (mealRate < 1 || mealRate > 3)
                        {
                            printf("Invalid. Please enter a value between 1 and 3: ");
                            scanf("%d", &mealRate);
                        }

                        switch (mealRate)
                        {
                        case 1: // 2k
                            printf("\nThe total Cost of a single person is 16000 Taka include visiting various tourist spots in Cox's Bazar-(3 days 2 night)\n");
                            break;
                        case 2: // 3k
                            printf("\nThe total Cost of a single person is 14000 Taka include visiting various tourist spots in Cox's Bazar-(3 days 2 night)\n");
                            break;
                        case 3: // 5k
                            printf("\nThe total Cost of a single person is 13000 Taka include visiting various tourist spots in Cox's Bazar-(3 days 2 night)\n");
                            break;
                        default:
                            printf("Invalid meal rate\n");
                            break;
                        }
                        break;

                    case 3:
                        printf("\nChoice your meal rate in a day?\n");
                        printf("------------------------------------------\n");
                        printf("1. Approximately 800 Taka in a day\n");
                        printf("2. Approximately 1200 Taka in a day\n");
                        printf("3. Approximately 1500 Taka in a day\n");
                        printf("Type...");
                        scanf("%d", &mealRate);

                        while (mealRate < 1 || mealRate > 3)
                        {
                            printf("Invalid. Please enter a value between 1 and 3: ");
                            scanf("%d", &mealRate);
                        }

                        switch (mealRate)
                        {
                        case 1: // 2k
                            printf("\nThe total Cost of a single person is 15000 Taka include visiting various tourist spots in Cox's Bazar-(3 days 2 night)\n");
                            break;
                        case 2: // 3k
                            printf("\nThe total Cost of a single person is 13000 Taka include visiting various tourist spots in Cox's Bazar-(3 days 2 night)\n");
                            break;
                        case 3: // 5k
                            printf("\nThe total Cost of a single person is 11000 Taka include visiting various tourist spots in Cox's Bazar-(3 days 2 night)\n");
                            break;
                        default:
                            printf("Invalid meal rate\n");
                            break;
                        }
                        break;

                    }
                    break;

                default:
                    printf("Invalid travel mode\n");
                    break;
                }

                break;
            case 2: // Sylhet
                printf("\nWhich type of vehicle do you want to go:\n");
                printf("------------------------------------------\n");
                printf("1. Plane\n");
                printf("2. Bus\n");
                printf("3. Train\n");
                printf("Type...");

                scanf("%d", &travelMode);

                while (travelMode < 1 || travelMode > 3)
                {
                    printf("Invalid. Please enter a value between 1 and 3: ");
                    scanf("%d", &travelMode);
                }

                switch (travelMode)
                {
                case 1: // Plane
                    printf("\nWhich type of hotel do you want to live:\n");
                    printf("------------------------------------------\n");
                    printf("1. 5 star\n");
                    printf("2. 3 star\n");
                    printf("3. 2 star\n");
                    printf("Type...");
                    scanf("%d", &rating);
                    while (rating < 1 || rating > 3)
                    {
                        printf("Invalid. Please enter a value between 1 and 3: ");
                        scanf("%d", &rating);
                    }
                    switch (rating)
                    {
                    case 1:
                        printf("\nChoice your meal rate in a day??\n");
                        printf("------------------------------------------\n");
                        printf("1. Approximately 800 Taka in a day\n");
                        printf("2. Approximately 1200 Taka in a day\n");
                        printf("3. Approximately 1500 Taka in a day\n");
                        printf("Type...");
                        scanf("%d", &mealRate);

                        while (mealRate < 1 || mealRate > 3)
                        {
                            printf("Invalid. Please enter a value between 1 and 3: ");
                            scanf("%d", &mealRate);
                        }

                        switch (mealRate)
                        {
                        case 1: // 2k
                            printf("\nThe total Cost of a single person is 22000 Taka include visiting various tourist spots in Sylhet-(3 days 2 night)\n");
                            break;
                        case 2: // 3k
                            printf("\nThe total Cost of a single person is 20000 Taka include visiting various tourist spots in Sylhet-(3 days 2 night)\n");
                            break;
                        case 3: // 5k
                            printf("\nThe total Cost of a single person is 17000 Taka include visiting various tourist spots in Sylhet-(3 days 2 night)\n");
                            break;
                        default:
                            printf("Invalid meal rate\n");
                            break;
                        }
                        break;

                    case 2:
                        printf("\nChoice your meal rate in a day?\n");
                        printf("------------------------------------------\n");
                        printf("1. Approximately 800 Taka in a day\n");
                        printf("2. Approximately 1200 Taka in a day\n");
                        printf("3. Approximately 1500 Taka in a day\n");
                        printf("Type...");
                        scanf("%d", &mealRate);

                        while (mealRate < 1 || mealRate > 3)
                        {
                            printf("Invalid. Please enter a value between 1 and 3: ");
                            scanf("%d", &mealRate);
                        }

                        switch (mealRate)
                        {
                        case 1: // 2k
                            printf("\nThe total Cost of a single person is 17000 Taka include visiting various tourist spots in Sylhet-(3 days 2 night)\n");
                            break;
                        case 2: // 3k
                            printf("\nThe total Cost of a single person is 15000 Taka include visiting various tourist spots in Sylhet-(3 days 2 night)\n");
                            break;
                        case 3: // 5k
                            printf("\nThe total Cost of a single person is 14000 Taka include visiting various tourist spots in Sylhet-(3 days 2 night)\n");
                            break;
                        default:
                            printf("Invalid meal rate\n");
                            break;
                        }
                        break;

                    case 3:
                        printf("\nChoice your meal rate in a day?\n");
                        printf("------------------------------------------\n");
                        printf("1. Approximately 800 Taka in a day\n");
                        printf("2. Approximately 1200 Taka in a day\n");
                        printf("3. Approximately 1500 Taka in a day\n");
                        printf("Type...");
                        scanf("%d", &mealRate);

                        while (mealRate < 1 || mealRate > 3)
                        {
                            printf("Invalid. Please enter a value between 1 and 3: ");
                            scanf("%d", &mealRate);
                        }

                        switch (mealRate)
                        {
                        case 1: // 2k
                            printf("\nThe total Cost of a single person is 15000 Taka include visiting various tourist spots in Sylhet-(3 days 2 night)\n");
                            break;
                        case 2: // 3k
                            printf("\nThe total Cost of a single person is 13500 Taka include visiting various tourist spots in Sylhet-(3 days 2 night)\n");
                            break;
                        case 3: // 5k
                            printf("\nThe total Cost of a single person is 12000 Taka include visiting various tourist spots in Sylhet-(3 days 2 night)\n");
                            break;
                        default:
                            printf("Invalid meal rate\n");
                            break;
                        }
                        break;

                    }
                    break;

                case 2: // Bus
                    printf("\nWhich type of hotel do you want to live:\n");
                    printf("------------------------------------------\n");
                    printf("1. 5 star\n");
                    printf("2. 3 star\n");
                    printf("3. 2 star\n");
                    printf("Type...");
                    scanf("%d", &rating);
                    while (rating < 1 || rating > 3)
                    {
                        printf("Invalid. Please enter a value between 1 and 3: ");
                        scanf("%d", &rating);
                    }
                    switch (rating)
                    {
                    case 1:
                        printf("\nChoice your meal rate in a day??\n");
                        printf("------------------------------------------\n");
                        printf("1. Approximately 800 Taka in a day\n");
                        printf("2. Approximately 1200 Taka in a day\n");
                        printf("3. Approximately 1500 Taka in a day\n");
                        printf("Type...");
                        scanf("%d", &mealRate);

                        while (mealRate < 1 || mealRate > 3)
                        {
                            printf("Invalid. Please enter a value between 1 and 3: ");
                            scanf("%d", &mealRate);
                        }

                        switch (mealRate)
                        {
                        case 1: // 2k
                            printf("\nThe total Cost of a single person is 18000 Taka include visiting various tourist spots in Sylhet-(3 days 2 night)\n");
                            break;
                        case 2: // 3k
                            printf("\nThe total Cost of a single person is 16000 Taka include visiting various tourist spots in Sylhet-(3 days 2 night)\n");
                            break;
                        case 3: // 5k
                            printf("\nThe total Cost of a single person is 15000 Taka include visiting various tourist spots in Sylhet-(3 days 2 night)\n");
                            break;
                        default:
                            printf("Invalid meal rate\n");
                            break;
                        }
                        break;

                    case 2:
                        printf("\nChoice your meal rate in a day?\n");
                        printf("------------------------------------------\n");
                        printf("1. Approximately 800 Taka in a day\n");
                        printf("2. Approximately 1200 Taka in a day\n");
                        printf("3. Approximately 1500 Taka in a day\n");
                        printf("Type...");
                        scanf("%d", &mealRate);

                        while (mealRate < 1 || mealRate > 3)
                        {
                            printf("Invalid. Please enter a value between 1 and 3: ");
                            scanf("%d", &mealRate);
                        }

                        switch (mealRate)
                        {
                        case 1: // 2k
                            printf("\nThe total Cost of a single person is 16000 Taka include visiting various tourist spots in Sylhet-(3 days 2 night)\n");
                            break;
                        case 2: // 3k
                            printf("\nThe total Cost of a single person is 15000 Taka include visiting various tourist spots in Sylhet-(3 days 2 night)\n");
                            break;
                        case 3: // 5k
                            printf("\nThe total Cost of a single person is 13000 Taka include visiting various tourist spots in Sylhet-(3 days 2 night)\n");
                            break;
                        default:
                            printf("Invalid meal rate\n");
                            break;
                        }
                        break;

                    case 3:
                        printf("\nChoice your meal rate in a day?\n");
                        printf("------------------------------------------\n");
                        printf("1. Approximately 800 Taka in a day\n");
                        printf("2. Approximately 1200 Taka in a day\n");
                        printf("3. Approximately 1500 Taka in a day\n");
                        printf("Type...");
                        scanf("%d", &mealRate);

                        while (mealRate < 1 || mealRate > 3)
                        {
                            printf("Invalid. Please enter a value between 1 and 3: ");
                            scanf("%d", &mealRate);
                        }

                        switch (mealRate)
                        {
                        case 1: // 2k
                            printf("\nThe total Cost of a single person is 14000 Taka include visiting various tourist spots in Sylhet-(3 days 2 night)\n");
                            break;
                        case 2: // 3k
                            printf("\nThe total Cost of a single person is 13000 Taka include visiting various tourist spots in Sylhet-(3 days 2 night)\n");
                            break;
                        case 3: // 5k
                            printf("\nThe total Cost of a single person is 11000 Taka include visiting various tourist spots in Sylhet-(3 days 2 night)\n");
                            break;
                        default:
                            printf("Invalid meal rate\n");
                            break;
                        }
                        break;

                    }
                    break;


                case 3: // Train
                    printf("\nWhich type of hotel do you want to live:\n");
                    printf("------------------------------------------\n");
                    printf("1. 5 star\n");
                    printf("2. 3 star\n");
                    printf("3. 2 star\n");
                    printf("Type...");
                    scanf("%d", &rating);
                    while (rating < 1 || rating > 3)
                    {
                        printf("Invalid. Please enter a value between 1 and 3: ");
                        scanf("%d", &rating);
                    }
                    switch (rating)
                    {
                    case 1:
                        printf("\nChoice your meal rate in a day??\n");
                        printf("------------------------------------------\n");
                        printf("1. Approximately 800 Taka in a day\n");
                        printf("2. Approximately 1200 Taka in a day\n");
                        printf("3. Approximately 1500 Taka in a day\n");
                        printf("Type...");
                        scanf("%d", &mealRate);

                        while (mealRate < 1 || mealRate > 3)
                        {
                            printf("Invalid. Please enter a value between 1 and 3: ");
                            scanf("%d", &mealRate);
                        }

                        switch (mealRate)
                        {
                        case 1: // 2k
                            printf("\nThe total Cost of a single person is 18000 Taka include visiting various tourist spots in Sylhet-(3 days 2 night)\n");
                            break;
                        case 2: // 3k
                            printf("\nThe total Cost of a single person is 16500 Taka include visiting various tourist spots in Sylhet-(3 days 2 night)\n");
                            break;
                        case 3: // 5k
                            printf("\nThe total Cost of a single person is 15000 Taka include visiting various tourist spots in Sylhet-(3 days 2 night)\n");
                            break;
                        default:
                            printf("Invalid meal rate\n");
                            break;
                        }
                        break;

                    case 2:
                        printf("\nChoice your meal rate in a day?\n");
                        printf("------------------------------------------\n");
                        printf("1. Approximately 800 Taka in a day\n");
                        printf("2. Approximately 1200 Taka in a day\n");
                        printf("3. Approximately 1500 Taka in a day\n");
                        printf("Type...");
                        scanf("%d", &mealRate);

                        while (mealRate < 1 || mealRate > 3)
                        {
                            printf("Invalid. Please enter a value between 1 and 3: ");
                            scanf("%d", &mealRate);
                        }

                        switch (mealRate)
                        {
                        case 1: // 2k
                            printf("\nThe total Cost of a single person is 16000 Taka include visiting various tourist spots in Sylhet-(3 days 2 night)\n");
                            break;
                        case 2: // 3k
                            printf("\nThe total Cost of a single person is 14000 Taka include visiting various tourist spots in Sylhet-(3 days 2 night)\n");
                            break;
                        case 3: // 5k
                            printf("\nThe total Cost of a single person is 13000 Taka include visiting various tourist spots in Sylhet-(3 days 2 night)\n");
                            break;
                        default:
                            printf("Invalid meal rate\n");
                            break;
                        }
                        break;

                    case 3:
                        printf("\nChoice your meal rate in a day?\n");
                        printf("------------------------------------------\n");
                        printf("1. Approximately 800 Taka in a day\n");
                        printf("2. Approximately 1200 Taka in a day\n");
                        printf("3. Approximately 1500 Taka in a day\n");
                        printf("Type...");
                        scanf("%d", &mealRate);

                        while (mealRate < 1 || mealRate > 3)
                        {
                            printf("Invalid. Please enter a value between 1 and 3: ");
                            scanf("%d", &mealRate);
                        }

                        switch (mealRate)
                        {
                        case 1: // 2k
                            printf("\nThe total Cost of a single person is 15000 Taka include visiting various tourist spots in Sylhet-(3 days 2 night)\n");
                            break;
                        case 2: // 3k
                            printf("\nThe total Cost of a single person is 13000 Taka include visiting various tourist spots in Sylhet-(3 days 2 night)\n");
                            break;
                        case 3: // 5k
                            printf("\nThe total Cost of a single person is 11000 Taka include visiting various tourist spots in Sylhet-(3 days 2 night)\n");
                            break;
                        default:
                            printf("Invalid meal rate\n");
                            break;
                        }
                        break;

                    }
                    break;
                default:
                    printf("Invalid travel mode\n");
                    break;
                }
                break;

            case 3: // Bandarban
                printf("\nWhich type of vehicle do you want to go:\n");
                printf("------------------------------------------\n");
                printf("1. Plane\n");
                printf("2. Bus\n");
                printf("3. Train\n");
                printf("Type...");

                scanf("%d", &travelMode);
                while (travelMode < 1 || travelMode > 3)
                {
                    printf("Invalid. Please enter a value between 1 and 3: ");
                    scanf("%d", &travelMode);
                }
                switch (travelMode)
                {
                case 1: // Plane
                    printf("\nWhich type of hotel do you want to live:\n");
                    printf("------------------------------------------\n");
                    printf("1. 5 star\n");
                    printf("2. 3 star\n");
                    printf("3. 2 star\n");
                    printf("Type...");
                    scanf("%d", &rating);
                    while (rating < 1 || rating > 3)
                    {
                        printf("Invalid. Please enter a value between 1 and 3: ");
                        scanf("%d", &rating);
                    }
                    switch (rating)
                    {
                    case 1:
                        printf("\nChoice your meal rate in a day??\n");
                        printf("------------------------------------------\n");
                        printf("1. Approximately 800 Taka in a day\n");
                        printf("2. Approximately 1200 Taka in a day\n");
                        printf("3. Approximately 1500 Taka in a day\n");
                        printf("Type...");
                        scanf("%d", &mealRate);

                        while (mealRate < 1 || mealRate > 3)
                        {
                            printf("Invalid. Please enter a value between 1 and 3: ");
                            scanf("%d", &mealRate);
                        }

                        switch (mealRate)
                        {
                        case 1: // 2k
                            printf("\nThe total Cost of a single person is 19000 Taka include visiting various tourist spots in Bandarban-(3 days 2 night)\n");
                            break;
                        case 2: // 3k
                            printf("\nThe total Cost of a single person is 17500 Taka include visiting various tourist spots in Bandarban-(3 days 2 night)\n");
                            break;
                        case 3: // 5k
                            printf("\nThe total Cost of a single person is 16000 Taka include visiting various tourist spots in Bandarban-(3 days 2 night)\n");
                            break;
                        default:
                            printf("Invalid meal rate\n");
                            break;
                        }
                        break;

                    case 2:
                        printf("\nChoice your meal rate in a day?\n");
                        printf("------------------------------------------\n");
                        printf("1. Approximately 800 Taka in a day\n");
                        printf("2. Approximately 1200 Taka in a day\n");
                        printf("3. Approximately 1500 Taka in a day\n");
                        printf("Type...");
                        scanf("%d", &mealRate);

                        while (mealRate < 1 || mealRate > 3)
                        {
                            printf("Invalid. Please enter a value between 1 and 3: ");
                            scanf("%d", &mealRate);
                        }

                        switch (mealRate)
                        {
                        case 1: // 2k
                            printf("\nThe total Cost of a single person is 17000 Taka include visiting various tourist spots in Bandarban-(3 days 2 night)\n");
                            break;
                        case 2: // 3k
                            printf("\nThe total Cost of a single person is 15000 Taka include visiting various tourist spots in Bandarban-(3 days 2 night)\n");
                            break;
                        case 3: // 5k
                            printf("\nThe total Cost of a single person is 14000 Taka include visiting various tourist spots in Bandarban-(3 days 2 night)\n");
                            break;
                        default:
                            printf("Invalid meal rate\n");
                            break;
                        }
                        break;

                    case 3:
                        printf("\nChoice your meal rate in a day?\n");
                        printf("------------------------------------------\n");
                        printf("1. Approximately 800 Taka in a day\n");
                        printf("2. Approximately 1200 Taka in a day\n");
                        printf("3. Approximately 1500 Taka in a day\n");
                        printf("Type...");
                        scanf("%d", &mealRate);

                        while (mealRate < 1 || mealRate > 3)
                        {
                            printf("Invalid. Please enter a value between 1 and 3: ");
                            scanf("%d", &mealRate);
                        }

                        switch (mealRate)
                        {
                        case 1: // 2k
                            printf("\nThe total Cost of a single person is 15000 Taka include visiting various tourist spots in Bandarban-(3 days 2 night)\n");
                            break;
                        case 2: // 3k
                            printf("\nThe total Cost of a single person is 13500 Taka include visiting various tourist spots in Bandarban-(3 days 2 night)\n");
                            break;
                        case 3: // 5k
                            printf("\nThe total Cost of a single person is 12000 Taka include visiting various tourist spots in Bandarban-(3 days 2 night)\n");
                            break;
                        default:
                            printf("Invalid meal rate\n");
                            break;
                        }
                        break;

                    }
                    break;

                case 2: // Bus
                    printf("\nWhich type of hotel do you want to live:\n");
                    printf("------------------------------------------\n");
                    printf("1. 5 star\n");
                    printf("2. 3 star\n");
                    printf("3. 2 star\n");
                    printf("Type...");
                    scanf("%d", &rating);
                    while (rating < 1 || rating > 3)
                    {
                        printf("Invalid. Please enter a value between 1 and 3: ");
                        scanf("%d", &rating);
                    }
                    switch (rating)
                    {
                    case 1:
                        printf("\nChoice your meal rate in a day??\n");
                        printf("------------------------------------------\n");
                        printf("1. Approximately 800 Taka in a day\n");
                        printf("2. Approximately 1200 Taka in a day\n");
                        printf("3. Approximately 1500 Taka in a day\n");
                        printf("Type...");
                        scanf("%d", &mealRate);

                        while (mealRate < 1 || mealRate > 3)
                        {
                            printf("Invalid. Please enter a value between 1 and 3: ");
                            scanf("%d", &mealRate);
                        }

                        switch (mealRate)
                        {
                        case 1: // 2k
                            printf("\nThe total Cost of a single person is 18000 Taka include visiting various tourist spots in Bandarban-(3 days 2 night)\n");
                            break;
                        case 2: // 3k
                            printf("\nThe total Cost of a single person is 16000 Taka include visiting various tourist spots in Bandarban-(3 days 2 night)\n");
                            break;
                        case 3: // 5k
                            printf("\nThe total Cost of a single person is 15000 Taka include visiting various tourist spots in Bandarban-(3 days 2 night)\n");
                            break;
                        default:
                            printf("Invalid meal rate\n");
                            break;
                        }
                        break;

                    case 2:
                        printf("\nChoice your meal rate in a day?\n");
                        printf("------------------------------------------\n");
                        printf("1. Approximately 800 Taka in a day\n");
                        printf("2. Approximately 1200 Taka in a day\n");
                        printf("3. Approximately 1500 Taka in a day\n");
                        printf("Type...");
                        scanf("%d", &mealRate);

                        while (mealRate < 1 || mealRate > 3)
                        {
                            printf("Invalid. Please enter a value between 1 and 3: ");
                            scanf("%d", &mealRate);
                        }

                        switch (mealRate)
                        {
                        case 1: // 2k
                            printf("\nThe total Cost of a single person is 16000 Taka include visiting various tourist spots in Bandarban-(3 days 2 night)\n");
                            break;
                        case 2: // 3k
                            printf("\nThe total Cost of a single person is 15000 Taka include visiting various tourist spots in Bandarban-(3 days 2 night)\n");
                            break;
                        case 3: // 5k
                            printf("\nThe total Cost of a single person is 13000 Taka include visiting various tourist spots in Bandarban-(3 days 2 night)\n");
                            break;
                        default:
                            printf("Invalid meal rate\n");
                            break;
                        }
                        break;

                    case 3:
                        printf("\nChoice your meal rate in a day?\n");
                        printf("------------------------------------------\n");
                        printf("1. Approximately 800 Taka in a day\n");
                        printf("2. Approximately 1200 Taka in a day\n");
                        printf("3. Approximately 1500 Taka in a day\n");
                        printf("Type...");
                        scanf("%d", &mealRate);

                        while (mealRate < 1 || mealRate > 3)
                        {
                            printf("Invalid. Please enter a value between 1 and 3: ");
                            scanf("%d", &mealRate);
                        }

                        switch (mealRate)
                        {
                        case 1: // 2k
                            printf("\nThe total Cost of a single person is 14000 Taka include visiting various tourist spots in Bandarban-(3 days 2 night)\n");
                            break;
                        case 2: // 3k
                            printf("\nThe total Cost of a single person is 13000 Taka include visiting various tourist spots in Bandarban-(3 days 2 night)\n");
                            break;
                        case 3: // 5k
                            printf("\nThe total Cost of a single person is 11000 Taka include visiting various tourist spots in Bandarban-(3 days 2 night)\n");
                            break;
                        default:
                            printf("Invalid meal rate\n");
                            break;
                        }
                        break;

                    }
                    break;


                case 3: // Train
                    printf("\nWhich type of hotel do you want to live:\n");
                    printf("------------------------------------------\n");
                    printf("1. 5 star\n");
                    printf("2. 3 star\n");
                    printf("3. 2 star\n");
                    printf("Type...");
                    scanf("%d", &rating);
                    while (rating < 1 || rating > 3)
                    {
                        printf("Invalid. Please enter a value between 1 and 3: ");
                        scanf("%d", &rating);
                    }
                    switch (rating)
                    {
                    case 1:
                        printf("\nChoice your meal rate in a day??\n");
                        printf("------------------------------------------\n");
                        printf("1. Approximately 800 Taka in a day\n");
                        printf("2. Approximately 1200 Taka in a day\n");
                        printf("3. Approximately 1500 Taka in a day\n");
                        printf("Type...");
                        scanf("%d", &mealRate);

                        while (mealRate < 1 || mealRate > 3)
                        {
                            printf("Invalid. Please enter a value between 1 and 3: ");
                            scanf("%d", &mealRate);
                        }

                        switch (mealRate)
                        {
                        case 1: // 2k
                            printf("\nThe total Cost of a single person is 18000 Taka include visiting various tourist spots in Bandarban-(3 days 2 night)\n");
                            break;
                        case 2: // 3k
                            printf("\nThe total Cost of a single person is 16500 Taka include visiting various tourist spots in Bandarban-(3 days 2 night)\n");
                            break;
                        case 3: // 5k
                            printf("\nThe total Cost of a single person is 15000 Taka include visiting various tourist spots in Bandarban-(3 days 2 night)\n");
                            break;
                        default:
                            printf("Invalid meal rate\n");
                            break;
                        }
                        break;

                    case 2:
                        printf("\nChoice your meal rate in a day?\n");
                        printf("------------------------------------------\n");
                        printf("1. Approximately 800 Taka in a day\n");
                        printf("2. Approximately 1200 Taka in a day\n");
                        printf("3. Approximately 1500 Taka in a day\n");
                        printf("Type...");
                        scanf("%d", &mealRate);

                        while (mealRate < 1 || mealRate > 3)
                        {
                            printf("Invalid. Please enter a value between 1 and 3: ");
                            scanf("%d", &mealRate);
                        }

                        switch (mealRate)
                        {
                        case 1: // 2k
                            printf("\nThe total Cost of a single person is 16000 Taka include visiting various tourist spots in Bandarban-(3 days 2 night)\n");
                            break;
                        case 2: // 3k
                            printf("\nThe total Cost of a single person is 14000 Taka include visiting various tourist spots in Bandarban-(3 days 2 night)\n");
                            break;
                        case 3: // 5k
                            printf("\nThe total Cost of a single person is 13000 Taka include visiting various tourist spots in Bandarban-(3 days 2 night)\n");
                            break;
                        default:
                            printf("Invalid meal rate\n");
                            break;
                        }
                        break;

                    case 3:
                        printf("\nChoice your meal rate in a day?\n");
                        printf("------------------------------------------\n");
                        printf("1. Approximately 800 Taka in a day\n");
                        printf("2. Approximately 1200 Taka in a day\n");
                        printf("3. Approximately 1500 Taka in a day\n");
                        printf("Type...");
                        scanf("%d", &mealRate);

                        while (mealRate < 1 || mealRate > 3)
                        {
                            printf("Invalid. Please enter a value between 1 and 3: ");
                            scanf("%d", &mealRate);
                        }

                        switch (mealRate)
                        {
                        case 1: // 2k
                            printf("\nThe total Cost of a single person is 15000 Taka include visiting various tourist spots in Bandarban-(3 days 2 night)\n");
                            break;
                        case 2: // 3k
                            printf("\nThe total Cost of a single person is 13000 Taka include visiting various tourist spots in Bandarban-(3 days 2 night)\n");
                            break;
                        case 3: // 5k
                            printf("\nThe total Cost of a single person is 11000 Taka include visiting various tourist spots in Bandarban-(3 days 2 night)\n");
                            break;
                        default:
                            printf("Invalid meal rate\n");
                            break;
                        }
                        break;

                    }
                    break;

                default:
                    printf("Invalid travel mode\n");
                    break;
                }

                break;
            case 4: // Kuakata
                printf("\nWhich type of vehicle do you want to go:\n");
                printf("------------------------------------------\n");
                printf("1. Plane\n");
                printf("2. Bus\n");
                printf("3. Train\n");
                printf("Type...");

                scanf("%d", &travelMode);
                while (travelMode < 1 || travelMode > 3)
                {
                    printf("Invalid. Please enter a value between 1 and 3: ");
                    scanf("%d", &travelMode);
                }
                switch (travelMode)
                {
                case 1: // Plane
                    printf("\nWhich type of hotel do you want to live:\n");
                    printf("------------------------------------------\n");
                    printf("1. 5 star\n");
                    printf("2. 3 star\n");
                    printf("3. 2 star\n");
                    printf("Type...");
                    scanf("%d", &rating);
                    while (rating < 1 || rating > 3)
                    {
                        printf("Invalid. Please enter a value between 1 and 3: ");
                        scanf("%d", &rating);
                    }
                    switch (rating)
                    {
                    case 1:
                        printf("\nChoice your meal rate in a day??\n");
                        printf("------------------------------------------\n");
                        printf("1. Approximately 800 Taka in a day\n");
                        printf("2. Approximately 1200 Taka in a day\n");
                        printf("3. Approximately 1500 Taka in a day\n");
                        printf("Type...");
                        scanf("%d", &mealRate);

                        while (mealRate < 1 || mealRate > 3)
                        {
                            printf("Invalid. Please enter a value between 1 and 3: ");
                            scanf("%d", &mealRate);
                        }

                        switch (mealRate)
                        {
                        case 1: // 2k
                            printf("\nThe total Cost of a single person is 21000 Taka include visiting various tourist spots in Kuakata-(3 days 2 night)\n");
                            break;
                        case 2: // 3k
                            printf("\nThe total Cost of a single person is 19000 Taka include visiting various tourist spots in Kuakata-(3 days 2 night)\n");
                            break;
                        case 3: // 5k
                            printf("\nThe total Cost of a single person is 17000 Taka include visiting various tourist spots in Kuakata-(3 days 2 night)\n");
                            break;
                        default:
                            printf("Invalid meal rate\n");
                            break;
                        }
                        break;

                    case 2:
                        printf("\nChoice your meal rate in a day?\n");
                        printf("------------------------------------------\n");
                        printf("1. Approximately 800 Taka in a day\n");
                        printf("2. Approximately 1200 Taka in a day\n");
                        printf("3. Approximately 1500 Taka in a day\n");
                        printf("Type...");
                        scanf("%d", &mealRate);

                        while (mealRate < 1 || mealRate > 3)
                        {
                            printf("Invalid. Please enter a value between 1 and 3: ");
                            scanf("%d", &mealRate);
                        }

                        switch (mealRate)
                        {
                        case 1: // 2k
                            printf("\nThe total Cost of a single person is 17000 Taka include visiting various tourist spots in Kuakata-(3 days 2 night)\n");
                            break;
                        case 2: // 3k
                            printf("\nThe total Cost of a single person is 15000 Taka include visiting various tourist spots in Kuakata-(3 days 2 night)\n");
                            break;
                        case 3: // 5k
                            printf("\nThe total Cost of a single person is 14000 Taka include visiting various tourist spots in Kuakata-(3 days 2 night)\n");
                            break;
                        default:
                            printf("Invalid meal rate\n");
                            break;
                        }
                        break;

                    case 3:
                        printf("\nChoice your meal rate in a day?\n");
                        printf("------------------------------------------\n");
                        printf("1. Approximately 800 Taka in a day\n");
                        printf("2. Approximately 1200 Taka in a day\n");
                        printf("3. Approximately 1500 Taka in a day\n");
                        printf("Type...");
                        scanf("%d", &mealRate);

                        while (mealRate < 1 || mealRate > 3)
                        {
                            printf("Invalid. Please enter a value between 1 and 3: ");
                            scanf("%d", &mealRate);
                        }

                        switch (mealRate)
                        {
                        case 1: // 2k
                            printf("\nThe total Cost of a single person is 15000 Taka include visiting various tourist spots in Kuakata-(3 days 2 night)\n");
                            break;
                        case 2: // 3k
                            printf("\nThe total Cost of a single person is 13500 Taka include visiting various tourist spots in Kuakata-(3 days 2 night)\n");
                            break;
                        case 3: // 5k
                            printf("\nThe total Cost of a single person is 12000 Taka include visiting various tourist spots in Kuakata-(3 days 2 night)\n");
                            break;
                        default:
                            printf("Invalid meal rate\n");
                            break;
                        }
                        break;

                    }
                    break;

                case 2: // Bus
                    printf("\nWhich type of hotel do you want to live:\n");
                    printf("------------------------------------------\n");
                    printf("1. 5 star\n");
                    printf("2. 3 star\n");
                    printf("3. 2 star\n");
                    printf("Type...");
                    scanf("%d", &rating);
                    while (rating < 1 || rating > 3)
                    {
                        printf("Invalid. Please enter a value between 1 and 3: ");
                        scanf("%d", &rating);
                    }
                    switch (rating)
                    {
                    case 1:
                        printf("\nChoice your meal rate in a day??\n");
                        printf("------------------------------------------\n");
                        printf("1. Approximately 800 Taka in a day\n");
                        printf("2. Approximately 1200 Taka in a day\n");
                        printf("3. Approximately 1500 Taka in a day\n");
                        printf("Type...");
                        scanf("%d", &mealRate);

                        while (mealRate < 1 || mealRate > 3)
                        {
                            printf("Invalid. Please enter a value between 1 and 3: ");
                            scanf("%d", &mealRate);
                        }

                        switch (mealRate)
                        {
                        case 1: // 2k
                            printf("\nThe total Cost of a single person is 18000 Taka include visiting various tourist spots in Kuakata-(3 days 2 night)\n");
                            break;
                        case 2: // 3k
                            printf("\nThe total Cost of a single person is 16000 Taka include visiting various tourist spots in Kuakata-(3 days 2 night)\n");
                            break;
                        case 3: // 5k
                            printf("\nThe total Cost of a single person is 15000 Taka include visiting various tourist spots in Kuakata-(3 days 2 night)\n");
                            break;
                        default:
                            printf("Invalid meal rate\n");
                            break;
                        }
                        break;

                    case 2:
                        printf("\nChoice your meal rate in a day?\n");
                        printf("------------------------------------------\n");
                        printf("1. Approximately 800 Taka in a day\n");
                        printf("2. Approximately 1200 Taka in a day\n");
                        printf("3. Approximately 1500 Taka in a day\n");
                        printf("Type...");
                        scanf("%d", &mealRate);

                        while (mealRate < 1 || mealRate > 3)
                        {
                            printf("Invalid. Please enter a value between 1 and 3: ");
                            scanf("%d", &mealRate);
                        }

                        switch (mealRate)
                        {
                        case 1: // 2k
                            printf("\nThe total Cost of a single person is 16000 Taka include visiting various tourist spots in Kuakata-(3 days 2 night)\n");
                            break;
                        case 2: // 3k
                            printf("\nThe total Cost of a single person is 15000 Taka include visiting various tourist spots in Kuakata-(3 days 2 night)\n");
                            break;
                        case 3: // 5k
                            printf("\nThe total Cost of a single person is 13000 Taka include visiting various tourist spots in Kuakata-(3 days 2 night)\n");
                            break;
                        default:
                            printf("Invalid meal rate\n");
                            break;
                        }
                        break;

                    case 3:
                        printf("\nChoice your meal rate in a day?\n");
                        printf("------------------------------------------\n");
                        printf("1. Approximately 800 Taka in a day\n");
                        printf("2. Approximately 1200 Taka in a day\n");
                        printf("3. Approximately 1500 Taka in a day\n");
                        printf("Type...");
                        scanf("%d", &mealRate);

                        while (mealRate < 1 || mealRate > 3)
                        {
                            printf("Invalid. Please enter a value between 1 and 3: ");
                            scanf("%d", &mealRate);
                        }

                        switch (mealRate)
                        {
                        case 1: // 2k
                            printf("\nThe total Cost of a single person is 14000 Taka include visiting various tourist spots in Kuakata-(3 days 2 night)\n");
                            break;
                        case 2: // 3k
                            printf("\nThe total Cost of a single person is 13000 Taka include visiting various tourist spots in Kuakata-(3 days 2 night)\n");
                            break;
                        case 3: // 5k
                            printf("\nThe total Cost of a single person is 11000 Taka include visiting various tourist spots in Kuakata-(3 days 2 night)\n");
                            break;
                        default:
                            printf("Invalid meal rate\n");
                            break;
                        }
                        break;

                    }
                    break;


                case 3: // Train
                    printf("\nWhich type of hotel do you want to live:\n");
                    printf("------------------------------------------\n");
                    printf("1. 5 star\n");
                    printf("2. 3 star\n");
                    printf("3. 2 star\n");
                    printf("Type...");
                    scanf("%d", &rating);
                    while (rating < 1 || rating > 3)
                    {
                        printf("Invalid. Please enter a value between 1 and 3: ");
                        scanf("%d", &rating);
                    }
                    switch (rating)
                    {
                    case 1:
                        printf("\nChoice your meal rate in a day??\n");
                        printf("------------------------------------------\n");
                        printf("1. Approximately 800 Taka in a day\n");
                        printf("2. Approximately 1200 Taka in a day\n");
                        printf("3. Approximately 1500 Taka in a day\n");
                        printf("Type...");
                        scanf("%d", &mealRate);

                        while (mealRate < 1 || mealRate > 3)
                        {
                            printf("Invalid. Please enter a value between 1 and 3: ");
                            scanf("%d", &mealRate);
                        }

                        switch (mealRate)
                        {
                        case 1: // 2k
                            printf("\nThe total Cost of a single person is 18000 Taka include visiting various tourist spots in Kuakata-(3 days 2 night)\n");
                            break;
                        case 2: // 3k
                            printf("\nThe total Cost of a single person is 16500 Taka include visiting various tourist spots in Kuakata-(3 days 2 night)\n");
                            break;
                        case 3: // 5k
                            printf("\nThe total Cost of a single person is 15000 Taka include visiting various tourist spots in Kuakata-(3 days 2 night)\n");
                            break;
                        default:
                            printf("Invalid meal rate\n");
                            break;
                        }
                        break;

                    case 2:
                        printf("\nChoice your meal rate in a day?\n");
                        printf("------------------------------------------\n");
                        printf("1. Approximately 800 Taka in a day\n");
                        printf("2. Approximately 1200 Taka in a day\n");
                        printf("3. Approximately 1500 Taka in a day\n");
                        printf("Type...");
                        scanf("%d", &mealRate);

                        while (mealRate < 1 || mealRate > 3)
                        {
                            printf("Invalid. Please enter a value between 1 and 3: ");
                            scanf("%d", &mealRate);
                        }

                        switch (mealRate)
                        {
                        case 1: // 2k
                            printf("\nThe total Cost of a single person is 16000 Taka include visiting various tourist spots in Kuakata-(3 days 2 night)\n");
                            break;
                        case 2: // 3k
                            printf("\nThe total Cost of a single person is 14000 Taka include visiting various tourist spots in Kuakata-(3 days 2 night)\n");
                            break;
                        case 3: // 5k
                            printf("\nThe total Cost of a single person is 13000 Taka include visiting various tourist spots in Kuakata-(3 days 2 night)\n");
                            break;
                        default:
                            printf("Invalid meal rate\n");
                            break;
                        }
                        break;

                    case 3:
                        printf("\nChoice your meal rate in a day?\n");
                        printf("------------------------------------------\n");
                        printf("1. Approximately 800 Taka in a day\n");
                        printf("2. Approximately 1200 Taka in a day\n");
                        printf("3. Approximately 1500 Taka in a day\n");
                        printf("Type...");
                        scanf("%d", &mealRate);

                        while (mealRate < 1 || mealRate > 3)
                        {
                            printf("Invalid. Please enter a value between 1 and 3: ");
                            scanf("%d", &mealRate);
                        }

                        switch (mealRate)
                        {
                        case 1: // 2k
                            printf("\nThe total Cost of a single person is 15000 Taka include visiting various tourist spots in Kuakata-(3 days 2 night)\n");
                            break;
                        case 2: // 3k
                            printf("\nThe total Cost of a single person is 13000 Taka include visiting various tourist spots in Kuakata-(3 days 2 night)\n");
                            break;
                        case 3: // 5k
                            printf("\nThe total Cost of a single person is 11000 Taka include visiting various tourist spots in Kuakata-(3 days 2 night)\n");
                            break;
                        default:
                            printf("Invalid meal rate\n");
                            break;
                        }
                        break;

                    }
                    break;

                default:
                    printf("Invalid travel mode\n");
                    break;
                }

            default:
                printf("Invalid destination\n");
                break;
            }

            break;

        case 3:                       ///      ///     ///

            printf("\nWhere do you want to go from Dhaka?...\n");
            printf("------------------------------------------\n");
            printf("1.Cox's Bazar\n");
            printf("2.Sylhet\n");
            printf("3.Bandarban\n");
            printf("4.Kuakata\n");

            int x;
            printf("\nType any number from 1 to 4...");
            scanf("%d", &x);
            printf("\n------------------------------------------\n");
            while (x < 1 || x > 4)
            {
                printf("Invalid input. Please enter a value between 1 and 4:....\n"
                       "....");
                scanf("%d", &x);
            }

            switch(x)
            {
            case 1:
                printf("\nTourist Spot\n"
                       "--------------\n"
                       "-Himchori \n"
                       "--Mini Bandarban\n"
                       "---Inani Beach\n"
                       "----Parasailing Spot\n"
                       "-----Marine Drive\n\n"

                       "There are 3 beach\n"
                       "--------------------\n"
                       "-Laboni Beach\n"
                       "--Kolatoli Beach\n"
                       "---Sugondha Beach\n"

                      );
                break;

            case 2:
                printf("\nTourist Spot\n"
                       "--------------\n"
                       "*Ratargul Swamp Forest\n"

                       "*Lalakhal\n"

                       "*Tanguar Haor\n"

                       "*Sreemongol & Around\n"

                       "*Hazrat Shahjalal Mazar Sharif\n"

                       "*Luvachora\n"

                       "*Jaflong\n"

                       "*adukata\n");
                break;

            case 3:
                printf("\nTourist Spot\n"
                       "--------------\n"
                       "1. Nilgiri Hills\n"
                       "2. Golden Temple\n"
                       "3. Nilachal\n"
                       "4. Sangu River\n"
                       "5. Chimbuk Hill\n"
                       "6. Meghla Tourist Spot\n"
                       "7. Shoilo Propat\n"
                       "8. Nafa-khum waterfall\n"
                       "9. Keokradong Peak\n"
                       "10.Rajvihar Monastery\n"

                      );
                break;

            case 4:
                printf("\nTourist Spot\n"
                       "--------------\n"

                       "-Ilish Park\n"

                       "-Jhau Bon\n"

                       "-Andharmanik River\n"

                       "-Fatrar Char\n"

                       "-Boat Museum\n"

                       "-Lal Kakra Beach\n"
                       "...............................................\n"
                       "***The main attrection is - Sunrise & sunset\n");
                break;
            }

            break;

        case 4:       ///      ///     ///
            printf("\n");
            printf("Where do you want to go from Dhaka?...\n");
            printf("---------------------------------------------\n");
            printf("1. Cox's Bazar\n");
            printf("2. Sylhet\n");
            printf("3. Bandarban\n");
            printf("4. Kuakata\n");
            printf("\nType any number from 1 to 4...");

            scanf("%d", &destination);

            while (destination < 1 || destination > 4)
            {
                printf("Invalid. Please enter a value between 1 and 4: ");
                scanf("%d", &destination);
            }

            switch (destination)
            {
            case 1:
                printf("\n\nWhich type of vehicle do you want to go:\n");
                printf("---------------------------------------------\n");
                printf("1. Plane\n");
                printf("2. Bus\n");
                printf("3. Train\n");
                printf("Type...");
                scanf("%d", &mealRate);

                while (mealRate < 1 || mealRate > 3)
                {
                    printf("Invalid. Please enter a value between 1 and 3:... ");
                    scanf("%d", &mealRate);
                }
                switch (mealRate)
                {

                case 1:
                    printf("\nProbably reach within 1 hour 5 minutes\n");
                    break;
                case 2:
                    printf("\nProbably reach within 10 to 12 hours\n");
                    break;
                case 3:
                    printf("\nProbably reach within 9 hours 30 minutes\n");
                    break;


                }
                break;

            case 2:
                printf("\n\nWhich type of vehicle do you want to go:\n");
                printf("---------------------------------------------\n");
                printf("1. Plane\n");
                printf("2. Bus\n");
                printf("3. Train\n");
                printf("Type...");
                scanf("%d", &mealRate);
                while (mealRate < 1 || mealRate > 3)
                {
                    printf("Invalid. Please enter a value between 1 and 3: ");
                    scanf("%d", &mealRate);
                }
                switch (mealRate)
                {

                case 1:
                    printf("\nProbably reach within 50 minutes\n");
                    break;
                case 2:
                    printf("\nProbably reach within 5 to 6 hours\n");
                    break;
                case 3:
                    printf("\nProbably reach within 6 hours 40 minutes\n");
                    break;


                }
                break;

            case 3:
                printf("\n\nWhich type of vehicle do you want to go:\n");
                printf("---------------------------------------------\n");
                printf("1. Plane\n");
                printf("2. Bus\n");
                printf("3. Train\n");
                printf("Type...");
                scanf("%d", &mealRate);
                while (mealRate < 1 || mealRate > 3)
                {
                    printf("Invalid. Please enter a value between 1 and 3: ");
                    scanf("%d", &mealRate);
                }
                switch (mealRate)
                {

                case 1:
                    printf("\nProbably reach within 55 minutes\n");
                    break;
                case 2:
                    printf("\nProbably reach within 6 to 8 hours\n");
                    break;
                case 3:
                    printf("\nProbably reach within 7 hours 51 minutes\n");
                    break;

                }
                break;

            case 4:
                printf("\n\nWhich type of vehicle do you want to go:\n");
                printf("---------------------------------------------\n");
                printf("1. Plane\n");
                printf("2. Bus\n");
                printf("3. Train\n");
                printf("Type...");
                scanf("%d", &mealRate);
                while (mealRate < 1 || mealRate > 3)
                {
                    printf("Invalid. Please enter a value between 1 and 3: ");
                    scanf("%d", &mealRate);
                }
                switch (mealRate)
                {

                case 1:
                    printf("\nProbably reach within 50 minutes\n");
                    break;
                case 2:
                    printf("\nProbably reach within 5 hours\n");
                    break;
                case 3:
                    printf("\nThe train line has not started yet but when it starts It will take Probably 5 hours\n");
                    break;


                }
            }
            break;


        case 5:             ///      ///     ///

            printf("\n");
            printf("Where do you want to go from Dhaka?...\n");
            printf("-----------------------------------------------------------\n");
            printf("1. Cox's Bazar\n");
            printf("2. Sylhet\n");
            printf("3. Bandarban\n");
            printf("4. Kuakata\n");
            printf("type any number from 1 to 4...");
            scanf("%d", &destination);

            while (destination < 1 || destination > 4)
            {
                printf("Invalid. Please enter a value between 1 to 4:... ");
                scanf("%d", &destination);
            }

            switch (destination)
            {

            case 1:
                printf("\nHow many person do you have....");
                scanf("%d",&k);
                printf("\nPlease choice your budget...\n");
                printf("-----------------------------------------------------------\n");
                printf("1. High\n");
                printf("2. Medium\n");
                printf("Type...");
                scanf("%d",&h);

                while (h < 1 || h > 2)
                {
                    printf("Invalid. Please enter a value between 1 or 2:... ");
                    scanf("%d", &h);
                }
                switch(h)
                {

                case 1:
                    sum=13000*k;
                    printf("\nThe total cost is %d Taka\n", sum);
                    printf("-----------------------------------------------------------\n");
                    printf("\nPackage Details\n--------------------\n3-day, 2-night tour packages\n\n"
                           "Sleeper Coach Bus\nLuxurious Bedroom\nThree times Meal\nEvening Snacks\n"
                           "\nThere will be a guide who will show you the visiting site\n");
                    printf("-----------------------------------------------------------\n");
                    printf("\nPlease enter your 13 digit bank account number...");

                    do
                    {
                        scanf("%s", input);

                        if (strlen(input) != 13)
                        {
                            printf("Invalid input. Please enter exactly 13 Digit...");
                        }
                    }
                    while (strlen(input) != 13);


                    printf("\nPlease enter your 3 or 5 digit pin....");
                    do
                    {
                        scanf("%s", input);

                        if (strlen(input) != 3 && strlen(input) != 5)
                        {
                            printf("Invalid input. Please enter exactly 3 or 5 Digit...");
                        }
                    }
                    while (strlen(input) != 3 && strlen(input) != 5);


                    printf("\nPlease Pay %d Taka\n", sum);
                    printf("......");
                    scanf("%d", &z);
                    if (z == sum)
                    {
                        timu();
                        printf("\n**Payment is done**");

                    }
                    else if (sum > z)
                    {
                        printf("Your payment failed due to incomplete payment. Please\n");

                        while (z!=sum)
                        {
                            printf("Try Again....");
                            scanf("%d", &z);
                        }
                        timu();
                        printf("\nPayment is done\n");
                    }
                    else
                    {
                        timu();
                        printf("\nI will send back your cash %d within 5 Minutes in your bank account number %d\n",z-sum, m);

                    }
                    break;

                case 2:
                    sum=9000*k;
                    printf("\nThe total cost is %d Taka\n", sum);
                    printf("-----------------------------------------------------------\n");
                    printf("\nPackage Details\n--------------------\n3-day, 2-night tour packages\n\n"
                           "Non A/C bus\nComfortable Bedroom\nThree times Meal\n"
                           "\nThere will be a guide who will show you the visiting site\n");
                    printf("-----------------------------------------------------------\n");
                    printf("\nPlease enter your 13 digit bank account number...");

                    do
                    {
                        scanf("%s", input);

                        if (strlen(input) != 13)
                        {
                            printf("Invalid input. Please enter exactly 13 Digit...");
                        }
                    }
                    while (strlen(input) != 13);


                    printf("\nPlease enter your 3 or 5 digit pin....");
                    do
                    {
                        scanf("%s", input);

                        if (strlen(input) != 3 && strlen(input) != 5)
                        {
                            printf("Invalid input. Please enter exactly 3 or 5 Digit...");
                        }
                    }
                    while (strlen(input) != 3 && strlen(input) != 5);


                    printf("\nPlease Pay %d Taka\n", sum);
                    printf("......");
                    scanf("%d", &z);
                    if (z == sum)
                    {
                        timu();
                        printf("\n**Payment is done**");

                    }
                    else if (sum > z)
                    {
                        printf("Your payment failed due to incomplete payment. Please\n");

                        while (z!=sum)
                        {
                            printf("Try Again....");
                            scanf("%d", &z);
                        }
                        timu();
                        printf("\nPayment is done\n");
                    }
                    else
                    {
                        timu();
                        printf("\nI will send back your cash %d within 5 Minutes in your bank account number %d\n",z-sum, m);

                    }
                    break;
                }
                break;


            case 2:
                printf("How many person do you have....");
                scanf("%d",&k);
                printf("\nPlease choice your budget...\n");
                printf("1. High\n");
                printf("2. Medium\n");
                printf("Type...");
                scanf("%d",&h);
                while (h < 1 || h > 2)
                {
                    printf("Invalid. Please enter a value between 1 or 2:... ");
                    scanf("%d", &h);
                }
                switch(h)
                {

                case 1:
                    sum=10000*k;
                    printf("\nThe total cost is %d Taka\n", sum);
                    printf("-----------------------------------------------------------\n");
                    printf("\nPackage Details\n--------------------\n3-day, 2-night tour packages\n\n"
                           "Sleeper Coach Bus\nLuxurious Bedroom\nThree times Meal\nEvening Snacks\n"
                           "\nThere will be a guide who will show you the visiting site\n");
                    printf("-----------------------------------------------------------\n");
                    printf("\nPlease enter your 13 digit bank account number...");

                    do
                    {
                        scanf("%s", input);

                        if (strlen(input) != 13)
                        {
                            printf("Invalid input. Please enter exactly 13 Digit...");
                        }
                    }
                    while (strlen(input) != 13);


                    printf("\nPlease enter your 3 or 5 digit pin....");
                    do
                    {
                        scanf("%s", input);

                        if (strlen(input) != 3 && strlen(input) != 5)
                        {
                            printf("Invalid input. Please enter exactly 3 or 5 Digit...");
                        }
                    }
                    while (strlen(input) != 3 && strlen(input) != 5);


                    printf("\nPlease Pay %d Taka\n", sum);
                    printf("......");
                    scanf("%d", &z);
                    if (z == sum)
                    {
                        timu();
                        printf("\n**Payment is done**");

                    }
                    else if (sum > z)
                    {
                        printf("Your payment failed due to incomplete payment. Please\n");

                        while (z!=sum)
                        {
                            printf("Try Again....");
                            scanf("%d", &z);
                        }
                        timu();
                        printf("\nPayment is done\n");
                    }
                    else
                    {
                        timu();
                        printf("\nI will send back your cash %d within 5 Minutes in your bank account number %d\n",z-sum, m);

                    }
                    break;

                case 2:
                    sum=7500*k;
                    printf("\nThe total cost is %d Taka\n", sum);
                    printf("-----------------------------------------------------------\n");
                    printf("\nPackage Details\n--------------------\n3-day, 2-night tour packages\n\n"
                           "Non A/C bus\nComfortable Bedroom\nThree times Meal\n"
                           "\nThere will be a guide who will show you the visiting site\n");
                    printf("-----------------------------------------------------------\n");
                    printf("\nPlease enter your 13 digit bank account number...");

                    do
                    {
                        scanf("%s", input);

                        if (strlen(input) != 13)
                        {
                            printf("Invalid input. Please enter exactly 13 Digit...");
                        }
                    }
                    while (strlen(input) != 13);


                    printf("\nPlease enter your 3 or 5 digit pin....");
                    do
                    {
                        scanf("%s", input);

                        if (strlen(input) != 3 && strlen(input) != 5)
                        {
                            printf("Invalid input. Please enter exactly 3 or 5 Digit...");
                        }
                    }
                    while (strlen(input) != 3 && strlen(input) != 5);


                    printf("\nPlease Pay %d Taka\n", sum);
                    printf("......");
                    scanf("%d", &z);
                    if (z == sum)
                    {
                        timu();
                        printf("\n**Payment is done**");

                    }
                    else if (sum > z)
                    {
                        printf("Your payment failed due to incomplete payment. Please\n");

                        while (z!=sum)
                        {
                            printf("Try Again....");
                            scanf("%d", &z);
                        }
                        timu();
                        printf("\nPayment is done\n");
                    }
                    else
                    {
                        timu();
                        printf("\nI will send back your cash %d within 5 Minutes in your bank account number %d\n",z-sum, m);

                    }
                    break;

                }
                break;


            case 3:
                printf("How many person do you have....");
                scanf("%d",&k);
                printf("Please choice your budget...\n");
                printf("1. High\n");
                printf("2. Medium\n");
                printf("Type...");
                scanf("%d",&h);
                while (h < 1 || h > 2)
                {
                    printf("Invalid. Please enter a value between 1 or 2:... ");
                    scanf("%d", &h);
                }
                switch(h)
                {

                case 1:
                    sum=12000*k;
                    printf("\nThe total cost is %d Taka\n", sum);
                    printf("-----------------------------------------------------------\n");
                    printf("\nPackage Details\n--------------------\n3-day, 2-night tour packages\n\n"
                           "Sleeper Coach Bus\nLuxurious Bedroom\nThree times Meal\nEvening Snacks\n"
                           "\nThere will be a guide who will show you the visiting site\n");
                    printf("-----------------------------------------------------------\n");
                    printf("\nPlease enter your 13 digit bank account number...");

                    do
                    {
                        scanf("%s", input);

                        if (strlen(input) != 13)
                        {
                            printf("Invalid input. Please enter exactly 13 Digit...");
                        }
                    }
                    while (strlen(input) != 13);


                    printf("\nPlease enter your 3 or 5 digit pin....");
                    do
                    {
                        scanf("%s", input);

                        if (strlen(input) != 3 && strlen(input) != 5)
                        {
                            printf("Invalid input. Please enter exactly 3 or 5 Digit...");
                        }
                    }
                    while (strlen(input) != 3 && strlen(input) != 5);


                    printf("\nPlease Pay %d Taka\n", sum);
                    printf("......");
                    scanf("%d", &z);
                    if (z == sum)
                    {
                        timu();
                        printf("\n**Payment is done**");

                    }
                    else if (sum > z)
                    {
                        printf("Your payment failed due to incomplete payment. Please\n");

                        while (z!=sum)
                        {
                            printf("Try Again....");
                            scanf("%d", &z);
                        }
                        timu();
                        printf("\nPayment is done\n");
                    }
                    else
                    {
                        timu();
                        printf("\nI will send back your cash %d within 5 Minutes in your bank account number %d\n",z-sum, m);

                    }
                    break;

                case 2:
                    sum=8000*k;
                    printf("\nThe total cost is %d Taka\n", sum);
                    printf("-----------------------------------------------------------\n");
                    printf("\nPackage Details\n--------------------\n3-day, 2-night tour packages\n\n"
                           "Non A/C bus\nComfortable Bedroom\nThree times Meal\n"
                           "\nThere will be a guide who will show you the visiting site\n");
                    printf("-----------------------------------------------------------\n");
                    printf("\nPlease enter your 13 digit bank account number...");

                    do
                    {
                        scanf("%s", input);

                        if (strlen(input) != 13)
                        {
                            printf("Invalid input. Please enter exactly 13 Digit...");
                        }
                    }
                    while (strlen(input) != 13);


                    printf("\nPlease enter your 3 or 5 digit pin....");
                    do
                    {
                        scanf("%s", input);

                        if (strlen(input) != 3 && strlen(input) != 5)
                        {
                            printf("Invalid input. Please enter exactly 3 or 5 Digit...");
                        }
                    }
                    while (strlen(input) != 3 && strlen(input) != 5);


                    printf("\nPlease Pay %d Taka\n", sum);
                    printf("......");
                    scanf("%d", &z);
                    if (z == sum)
                    {
                        timu();
                        printf("\n**Payment is done**");

                    }
                    else if (sum > z)
                    {
                        printf("Your payment failed due to incomplete payment. Please\n");

                        while (z!=sum)
                        {
                            printf("Try Again....");
                            scanf("%d", &z);
                        }
                        timu();
                        printf("\nPayment is done\n");
                    }
                    else
                    {
                        timu();
                        printf("\nI will send back your cash %d within 5 Minutes in your bank account number %d\n",z-sum, m);

                    }
                    break;

                }
                break;


            case 4:
                printf("How many person do you have....");
                scanf("%d",&k);
                printf("Please choice your budget...\n");
                printf("1. High\n");
                printf("2. Medium\n");
                printf("Type...");
                scanf("%d",&h);
                while (h < 1 || h > 2)
                {
                    printf("Invalid. Please enter a value between 1 or 2:... ");
                    scanf("%d", &h);
                }
                switch(h)
                {

                case 1:
                    sum=7000*k;
                    printf("\nThe total cost is %d Taka\n", sum);
                    printf("-----------------------------------------------------------\n");
                    printf("\nPackage Details\n--------------------\n3-day, 2-night tour packages\n\n"
                           "Sleeper Coach Bus\nLuxurious Bedroom\nThree times Meal\nEvening Snacks\n"
                           "\nThere will be a guide who will show you the visiting site\n");
                    printf("-----------------------------------------------------------\n");
                    printf("\nPlease enter your 13 digit bank account number...");

                    do
                    {
                        scanf("%s", input);

                        if (strlen(input) != 13)
                        {
                            printf("Invalid input. Please enter exactly 13 Digit...");
                        }
                    }
                    while (strlen(input) != 13);


                    printf("\nPlease enter your 3 or 5 digit pin....");
                    do
                    {
                        scanf("%s", input);

                        if (strlen(input) != 3 && strlen(input) != 5)
                        {
                            printf("Invalid input. Please enter exactly 3 or 5 Digit...");
                        }
                    }
                    while (strlen(input) != 3 && strlen(input) != 5);


                    printf("\nPlease Pay %d Taka\n", sum);
                    printf("......");
                    scanf("%d", &z);
                    if (z == sum)
                    {
                        timu();
                        printf("\n**Payment is done**");

                    }
                    else if (sum > z)
                    {
                        printf("Your payment failed due to incomplete payment. Please\n");

                        while (z!=sum)
                        {
                            printf("Try Again....");
                            scanf("%d", &z);
                        }
                        timu();
                        printf("\nPayment is done\n");
                    }
                    else
                    {
                        timu();
                        printf("\nI will send back your cash %d within 5 Minutes in your bank account number %d\n",z-sum, m);

                    }
                    break;

                case 2:
                    sum=4000*k;
                    printf("\nThe total cost is %d Taka\n", sum);
                    printf("-----------------------------------------------------------\n");
                    printf("\nPackage Details\n--------------------\n3-day, 2-night tour packages\n\n"
                           "Non A/C bus\nComfortable Bedroom\nThree times Meal\n"
                           "\nThere will be a guide who will show you the visiting site\n");
                    printf("-----------------------------------------------------------\n");
                    printf("\nPlease enter your 13 digit bank account number...");

                    do
                    {
                        scanf("%s", input);

                        if (strlen(input) != 13)
                        {
                            printf("Invalid input. Please enter exactly 13 Digit...");
                        }
                    }
                    while (strlen(input) != 13);


                    printf("\nPlease enter your 3 or 5 digit pin....");
                    do
                    {
                        scanf("%s", input);

                        if (strlen(input) != 3 && strlen(input) != 5)
                        {
                            printf("Invalid input. Please enter exactly 3 or 5 Digit...");
                        }
                    }
                    while (strlen(input) != 3 && strlen(input) != 5);


                    printf("\nPlease Pay %d Taka\n", sum);
                    printf("......");
                    scanf("%d", &z);
                    if (z == sum)
                    {
                        timu();
                        printf("\n**Payment is done**");

                    }
                    else if (sum > z)
                    {
                        printf("Your payment failed due to incomplete payment. Please\n");

                        while (z!=sum)
                        {
                            printf("Try Again....");
                            scanf("%d", &z);
                        }
                        timu();
                        printf("\nPayment is done\n");
                    }
                    else
                    {
                        timu();
                        printf("\nI will send back your cash %d within 5 Minutes in your bank account number %d\n",z-sum, m);

                    }
                    break;

                }
                break;
            }
            break;


        case 6:           ///      ///     ///
            printf("\nThank you for visit our site *_* \n");
            return 0;

        }
        printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

        printf("\nDo you want to continue?...\n" "Press 1 for [Yes] and Anything for [No]:...");
        scanf("%d", &continueMenu);
        printf("\n");
        //printf("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    }
    while (continueMenu == 1);

    //printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
    rate();
    printf("\n-----------------------------------\n");
    printf("Good Bye Sir, Have a nice Day *.* |\n");
    printf("-----------------------------------\n");
}

