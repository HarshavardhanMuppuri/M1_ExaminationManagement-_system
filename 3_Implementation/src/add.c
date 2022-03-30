void add(struct student s[50])
{
    printf("Enter the total ");
    printf("number of working days \n");
    scanf("%f", &tdays);
 
    printf("Enter the number");
    printf("of students \n");
    scanf("%d", &n);
 
    for (i = 0; i < n; i++) {
 
        printf("Student number %d \n",
               (i + 1));
 
        printf("Enter the name of"
               " the student \n");
        scanf("%s", s[i].name);
 
        printf("Enter the roll number \n");
        scanf(" %d", &s[i].rno);
 
        printf("Enter the fees of the"
               "student 'P' for paid "
               ", 'N' for not paid \n");
        scanf(" %c", &s[i].fees);
 
        printf("Enter the number of"
               "days the student was "
               "present \n");
        scanf("%f", &s[i].days);
 
        s[i].attend = (s[i].days
                       / tdays)
                      * 100;
        printf("student attendence = %f \n",
               s[i].attend);
    }
    execute();
}