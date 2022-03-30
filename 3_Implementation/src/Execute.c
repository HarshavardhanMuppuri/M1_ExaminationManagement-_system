void execute()
{
    printf(
        " Enter the serial number"
        "to select the option \n");
    printf(" 1. To show Eligible"
           "candidates \n");
    printf(" 2. To delete the "
           "student record \n");
    printf(" 3. To change the "
           "eligibility criteria \n");
    printf(" 4. Reset the "
           "eligibility criteria \n");
    printf(" 5. Print the list "
           "of all the student \n");
    printf(" Enter 0 to exit \n");
 
    scanf("%d", &option);
 
    // Switch Statement for choosing
    // the desired option for the user
    switch (option) {
    case 1:
        eligibleStudents(s);
        execute();
        break;
 
    case 2:
        deleteRecord(s);
        execute();
        break;
 
    case 3:
        printf("Old Attendance "
               "required = %f",
               present);
        printf(
            "\n Enter the updated "
            "attendence required \n");
        scanf("%f", &present);
        printf("fees status required"
               " was %c \n",
               money);
        printf("Enter the new fees "
               "status 'P' for paid 'N' "
               "for not paid and "
               "'B' for both \n");
        scanf("%c", &money);
        printf("Eligibility Criteria updated \n");
        execute();
        break;
 
    case 4:
        present = 75.00;
        money = 'P';
        printf("Eligibility creitria reset \n");
        execute();
        break;
 
    case 5:
        printStudents(s);
        execute();
        break;
 
    case 6:
        execute();
        break;
 
    case 0:
        exit(0);
 
    default:
        printf("Enter number only from 0-4 \n");
        execute();
    }
}