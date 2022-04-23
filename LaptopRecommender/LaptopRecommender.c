#include <stdio.h>
#include <string.h>
int main()
{
    int x,z,row,Filter,SpecLevel,PriceRange,DisplaySize;
    char Model[45],Spec[10],CPU[25],Size[2],Usage[40];
    char* LapList[][6]={{"HP 15s","Low","Ryzen 3 5300U","15.6","40000","Home use"},{"HP 15s","Low","Intel Core i3 1125G4","15.6","45000","Home use"},
    {"Acer Aspire 5","Low","Intel Core i3 1115G4","14","45000","Home Use"},
    {"Asus Vivobook 15","Low","Intel Core i3 1115G4","15.6","43000","Home Use"},
    {"MSI Modern 15","Mid","AMD Ryzen 5 5500U","15.6","50000","Multipurpose"},{"MSI Modern 14","Mid","Intel Core i5 1155G7","14","50000","Multipurpose & Light"},
    {"Lenovo Ideapad 3","Mid","AMD Ryzen 5 5500U","15.6","49000","Multipurpose"},{"Lenovo Ideapad Slim 5","Mid","AMD Ryzen 5 5500U","14","59000","Content Creation & Convertible"},
    {"HP Pavilion 15","Mid","Intel Core i5 1240P","15.6","65000","Multipurpose"},{"HP Pavilion 14","Mid","AMD Ryzen 5 5500U","14","55000","Multipurpose & Portable"},
    {"HP Pavilion Aero 13","Mid","AMD Ryzen 5 5500U","13","69000","Content Creation & Convertible"},
    {"MSI Modern 15","High","AMD Ryzen 7 5700U","15.6","60000","Multipurpose"},
    {"HP Victus 16","Mid","AMD Ryzen 5 5600H","16.1","60000","Gaming"},{"HP Victus 16","High","AMD Ryzen 7 5800H","16.1","79000","Gaming"},
    {"Lenovo Legion 5","Mid","AMD Ryzen 5 4600H","15.6","64000","Gaming"},{"HP Victus 16","Mid","Intel Core i5 11400H","15.6","70000","Gaming"},
    {"Acer Nitro 5","Mid","Intel Core i5 12500H","15.6","50000","Gaming"},{"Asus Rog Zephyrus M16","Ultra","Intel Core i9 12900H","16","330000","Gaming"},
    {"HP Envy 13","Mid","AMD Ryzen 5 5600U","13","85000","Content Creation & Convertible"},{"HP Envy 13","High","AMD Ryzen 7 5800U","13","100000","Content Creation & Convertible"},
    {"HP Omen 16","High","AMD Ryzen 7 5800H","16.1","110000","Gaming"},{"Asus Zenbook 14","Ultra","AMD Ryzen 9 5900HX","14","100000","Content Creation & Portable"},
    {"MSI GF66 Pulse 15","High","Intel Core i7 12700H","15.6","140000","Gaming"},{"Asus ROG Zephyrus G15","Ultra","AMD Ryzen 9 5900HS","15.6","145000","Gaming"},
    {"MSI GS66 Stealth","High","Intel Core i7 12700H","15.6","280000","Gaming"},
    {"HP Spectre x360","High","Intel Core i7 1165G7","13","150000","Premium & Convertible"},{"Dell XPS 13","Mid","Intel Core i5 1135G7","13","118000","Premium & Portable"},
    {"Apple Macbook Air","High","Apple M1","13","85000","Premium & Portable"},{"Apple Macbook Pro","High","Apple M1 Pro","14","195000","Premium & Portable"},
    {"HP Omen 16","High","Intel Core i7 11800H","16.1","184000","Gaming"},{"Asus ROG Zephyrus G14","Mid","AMD Ryzen 7 4800HS","14","790000","Gaming & Portable"},
    {"Asus ROG Zephyrus M16","Ultra","Intel Core i9 12900H","16.1","330000","Gaming"},{"Asus ROG Zephyrus G14","Ultra","AMD Ryzen 9 5900HS","14","140000","Gaming & Portable"},
    {"Dell Alienware x15 R2","Ultra","Intel Core i9 12900H","15.6","290000","Gaming"},{"Lenovo Legion 5 Pro","High","Intel Core i7 11800H","15.6","160000","Gaming"},
    {"Dell XPS 15","High","Intel Core i7 11800H","15.6","195000","Gaming"},{"Asus ROG Scar G15","Ultra","Intel Core i9 12900H","15.6","286000","Gaming"},
    {"Razer Blade 14","Ultra","AMD Ryzen 9 5900HX","14","270000","Gaming & Content Creation"},{"Razer Blade Stealth 13","High","Intel Core i7 1165G7","13","200000","Gaming, Content Creation & Portable"},
    };


    row = sizeof(LapList)/sizeof(LapList[0]);
    printf("Greeting!\nWelcome to Laptop Recommender\n\n");
    printf("I'm LaiRe!\n\n");

    printf("How do you want to filter the Laptop?\n\n");
    printf("1. Specification Level\n2. Budget\n3. Size\n4. No Filter\n\n");
    printf("Enter the Corresponding Number to start filtering your Product:\n");
    scanf("%d",&Filter);

    switch(Filter)
    {
    case 1:
        printf("\n\nTell me about your Specification Level Preferences.\n\n");
        printf("1. Low\n2. Mid\n3. High\n4. Ultra\n\n");
        printf("Enter the number corresponding to your required Spec:\n");
        scanf("%d",&SpecLevel);
        switch(SpecLevel)
        {
        case 1:

            printf("\n\nYour Preference for Specification Level is Low. \n\n");

            for(x = 0 ; x <= row ; x++)
            {
                z = strcmp("Low",LapList[x][1]);
                if(z == 0)
                    {
                        printf("Model          :  %s\nCPU            :  %s\nSpec Level     :  %s\nDisplay Size   :  %s in\nPrice         :  %s\n\nMy Recommended Usage  :  %s\n\n\n",
                                LapList[x][0],LapList[x][2],LapList[x][1],LapList[x][3],LapList[x][4],LapList[x][5]);
                    }
            }
            break;


        case 2:

            printf("\n\nYour Preference for Specification Level is Mid.\n\n");

            for(x = 0 ; x <= row ; x++)
            {
                z = strcmp("Mid",LapList[x][1]);
                if(z == 0)
                    {
                        printf("Model          :  %s\nCPU            :  %s\nSpec Level     :  %s\nDisplay Size   :  %s in\nPrice         :  %s\n\nMy Recommended Usage  :  %s\n\n\n",
                                LapList[x][0],LapList[x][2],LapList[x][1],LapList[x][3],LapList[x][4],LapList[x][5]);
                    }
            }
            break;


        case 3:

            printf("\n\nYour Preference for Specification Level is High. \n\n");

            for(x = 0 ; x <= row ; x++)
            {
                z = strcmp("High",LapList[x][1]);
                if(z == 0)
                    {
                        printf("Model          :  %s\nCPU            :  %s\nSpec Level     :  %s\nDisplay Size   :  %s in\nPrice         :  %s\n\nMy Recommended Usage  :  %s\n\n\n",
                                LapList[x][0],LapList[x][2],LapList[x][1],LapList[x][3],LapList[x][4],LapList[x][5]);
                    }
            }
            break;


        case 4:

            printf("\n\nYour Preference for Specification Level is Ultra. \n\n");

            for(x = 0 ; x <= row ; x++)
            {
                z = strcmp("Ultra",LapList[x][1]);
                if(z == 0)
                    {
                        printf("Model          :  %s\nCPU            :  %s\nSpec Level     :  %s\nDisplay Size   :  %s in\nPrice         :  %s\n\nMy Recommended Usage  :  %s\n\n\n",
                                LapList[x][0],LapList[x][2],LapList[x][1],LapList[x][3],LapList[x][4],LapList[x][5]);
                    }
            }
            break;

        default :
            printf("Invalid Number\n" );


        }
        break;


    case 2:
        printf("\n\nAlright, Tell me about your Price Range.\n\n");
        printf("1. 40000 - 55000 \n2. 55000 - 80000 \n3. 80000 - 125000 \n4. Budget is Not a Problem ;) \n\n");
        printf("\nEnter the number corresponding to your required Price:\n");
        scanf("%d",&PriceRange);
        switch(PriceRange)
        {
        case 1:

            printf("\n\nHere are some Models in Budget Tier. \n\n");

            for(x = 0 ; x <= row ; x++)
            {
                if(atoi(LapList[x][4]) <= 55000)
                    {
                        printf("Model          :  %s\nCPU            :  %s\nSpec Level     :  %s\nDisplay Size   :  %s in\nPrice         :  %s\n\nMy Recommended Usage  :  %s\n\n\n",
                                LapList[x][0],LapList[x][2],LapList[x][1],LapList[x][3],LapList[x][4],LapList[x][5]);
                    }
            }
            break;
        case 2:

            printf("\n\nSome Models in Mid Tier.\n\n");

            for(x = 0 ; x <= row ; x++)
            {
                if(atoi(LapList[x][4]) >= 55000 && atoi(LapList[x][4]) <= 80000)
                    {
                        printf("Model          :  %s\nCPU            :  %s\nSpec Level     :  %s\nDisplay Size   :  %s in\nPrice         :  %s\n\nMy Recommended Usage  :  %s\n\n\n",
                                LapList[x][0],LapList[x][2],LapList[x][1],LapList[x][3],LapList[x][4],LapList[x][5]);
                    }
            }
            break;
        case 3:

            printf("\n\nLaptop for you at High tier. \n\n");

            for(x = 0 ; x <= row ; x++)
            {
                if(atoi(LapList[x][4]) >= 80000 && atoi(LapList[x][4]) <= 125000)
                    {
                        printf("Model          :  %s\nCPU            :  %s\nSpec Level     :  %s\nDisplay Size   :  %s in\nPrice         :  %s\n\nMy Recommended Usage  :  %s\n\n\n",
                                LapList[x][0],LapList[x][2],LapList[x][1],LapList[x][3],LapList[x][4],LapList[x][5]);
                    }
            }
            break;
        case 4:

            printf("\n\nSo, you want the Best of Best ;) . \nHere are some Ultra Tier Models.  \n\n");

            for(x = 0 ; x <= row ; x++)
            {
                if(atoi(LapList[x][4]) >= 100000)
                    {
                        printf("Model          :  %s\nCPU            :  %s\nSpec Level     :  %s\nDisplay Size   :  %s in\nPrice         :  %s\n\nMy Recommended Usage  :  %s\n\n\n",
                                LapList[x][0],LapList[x][2],LapList[x][1],LapList[x][3],LapList[x][4],LapList[x][5]);
                    }
            }
            break;

        default :
            printf("Invalid Number\n" );


        }
        break;


    case 3:
        printf("\n\nSo,Which size do you prefer to Checkout.\n\n");
        printf("Enter the number corresponding to your required Spec:\n");
        printf("1. 13 \n2. 14 \n3. 15.6 \n4. 16.1 \n\n");
        printf("\nEnter the number corresponding to your required Size:\n");
        scanf("%d",&DisplaySize);
        switch(DisplaySize)
        {
        case 1:

            printf("\n\nYou wanna Compact Portable One. \nI've got it here Bud. \n\n");

            for(x = 0 ; x <= row ; x++)
            {
                z = strcmp("13",LapList[x][3]);
                if(z == 0)
                    {
                        printf("Model          :  %s\nCPU            :  %s\nSpec Level     :  %s\nDisplay Size   :  %s in\nPrice         :  %s\n\nMy Recommended Usage  :  %s\n",
                                LapList[x][0],LapList[x][2],LapList[x][1],LapList[x][3],LapList[x][4],LapList[x][5]);
                    }
            }
            break;
        case 2:

            printf("\n\nSo, You Prefer a Small One.\nLets see what I got for you. \n\n");

            for(x = 0 ; x <= row ; x++)
            {
                z = strcmp("14",LapList[x][3]);
                if(z == 0)
                    {
                        printf("Model          :  %s\nCPU            :  %s\nSpec Level     :  %s\nDisplay Size   :  %s in\nPrice         :  %s\n\nMy Recommended Usage  :  %s\n",
                                LapList[x][0],LapList[x][2],LapList[x][1],LapList[x][3],LapList[x][4],LapList[x][5]);
                    }
            }
            break;
        case 3:

            printf("\n\nYour going with the Standard Sized. \nThese are what we got here. \n\n");

            for(x = 0 ; x <= row ; x++)
            {
                z = strcmp("15.6",LapList[x][3]);
                if(z == 0)
                    {
                        printf("Model          :  %s\nCPU            :  %s\nSpec Level     :  %s\nDisplay Size   :  %s in\nPrice         :  %s\n\nMy Recommended Usage  :  %s\n",
                                LapList[x][0],LapList[x][2],LapList[x][1],LapList[x][3],LapList[x][4],LapList[x][5]);
                    }
            }
            break;
        case 4:

            printf("\n\nSo, you want the Large sized Display.\nThis Display Size is really Immersive.  \nSee What We Got Here.  \n\n");

            for(x = 0 ; x <= row ; x++)
            {
                z = strcmp("16.1",LapList[x][3]);
                if(z == 0)
                    {
                        printf("Model          :  %s\nCPU            :  %s\nSpec Level     :  %s\nDisplay Size   :  %s in\nPrice         :  %s\n\nMy Recommended Usage  :  %s\n",
                                LapList[x][0],LapList[x][2],LapList[x][1],LapList[x][3],LapList[x][4],LapList[x][5]);
                    }
            }
            break;

        default :
            printf("Invalid Number\n" );

        }
        break;


    case 4:
        printf("\n\nYou Wanna see all the Laptop I've got Here. \nThis is going to take along time.\n\n");
        for(x = 0 ; x <= row ; x++)
        {
            printf("Model          :  %s\nCPU            :  %s\nSpec Level     :  %s\nDisplay Size   :  %s in\nPrice         :  %s\n\nMy Recommended Usage  :  %s\n\n\n",
                                LapList[x][0],LapList[x][2],LapList[x][1],LapList[x][3],LapList[x][4],LapList[x][5]);
        }
        break;
    default :
         printf("Invalid Number\n" );
    }

    return(0);
}
