
      


printf("%s %s %-30s %-18s %s\n", "####", "Type", "Holder name", "Open date", "Balance");
printf("%04d  %c   %-30s %04d-%02d-%02d %15.2f\n", //insert your vars here );


        printf("openDate: %s.\n year: %d.\nday: %d.\nmonth: %d.\n", openDate, year, day, month);
        // sscanf(openDate, "%4s-%2s-%2s", yearStr, dayStr, monthStr);
        // printf("%s, %s, %s\n", yearStr, dayStr, monthStr);
        // printf("%c%c%c%c", yearStr[0],yearStr[1],yearStr[2],yearStr[3]);
        /*sscanf(openDate, "%d-%d-%d", &year, &day, &month);

        if ((strlen(yearStr) > 4 || strlen(dayStr) < 2 || strlen(monthStr) < 2) || ((year < 0 || year > 9999) || (day < 1 || day > 31) || (month < 1 || month > 12)))
        {
            printf("%s Wrong date format.\n", openDate);
            continue;
        }
        for (int i = 0; i < strlen(openDate); i++)
        {
            newAccount.accountOwner[i] = accountOwner[i];
        }

        break;
        */