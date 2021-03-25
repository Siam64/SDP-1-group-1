#include<stdio.h>
#include<conio.h>

//for deleting information
void Dinfo()
{
    remove("information.txt");
    FILE *admin;
    admin=fopen("information.txt","r");

    if(admin != NULL)
    {
        printf("faild..\n");
        return;
    }
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\tDELETED !\n");
    fclose(admin);

    printf("\t\t\t\t\t\t\t\t\t\t\tpress any key to continue");
    getch();
    system("CLS");
    list1();
}

//for deleting mrdical details
void Ddetail()
{
    remove("mDETAIL.txt");
    FILE *admin;
    admin=fopen("mDETAIL.txt","r");

    if(admin !=NULL)
    {
        printf("Faild to delete\n");
        return;
    }
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\tDELETED !\n");
    fclose(admin);

    printf("\t\t\t\t\t\t\t\t\t\t\tpress any key to continue");
    getch();
    system("CLS");
    list2();
}


//for deleting test
void Dtest()
{
    remove("Tests.txt");
    FILE *admin;
    admin=fopen("Tests.txt","r");

    if(admin !=NULL)
    {
        printf("Faild to delete\n");
        return;
    }
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\tDELETED !\n");
    fclose(admin);

    printf("\t\t\t\t\t\t\t\t\t\t\tpress any key to continue");
    getch();
    system("CLS");
    list3();
}

//for deleting notice
void Din()
{
    remove("Notice.txt");
    FILE *admin;
    admin=fopen("Notice.txt","r");

    if(admin !=NULL)
    {
        printf("Faild to delete\n");
        return;
    }
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\tDELETED !\n");
    fclose(admin);

    printf("\t\t\t\t\t\t\t\t\t\t\tpress any key to continue");
    getch();
    system("CLS");
    list4();
}


//for deleting blood bank
void Dbld()
{
    remove("Blood.txt");
    FILE *admin;
    admin=fopen("Blood.txt","r");

    if(admin !=NULL)
    {
        printf("Faild to delete\n");
        return;
    }
    printf("\t\t\t\t\t\t\t\t\t\t\tDELETED !\n");
    fclose(admin);

    printf("\t\t\t\t\t\t\t\t\t\t\tpress any key to continue");
    getch();
    system("CLS");
    wlcADMIN();
}


//for deleting payment
void Dpay()
{
    remove("payment.txt");
    FILE *admin;
    admin=fopen("payment.txt","r");

    if(admin !=NULL)
    {
        printf("Faild to delete\n");
        return;
    }
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\tDELETED !\n");
    fclose(admin);

    printf("\t\t\t\t\t\t\t\t\t\t\tpress any key to continue");
    getch();
    system("CLS");
    list5();
}

//function delete tab
void Dlt()
{
    printf("\n\n\n\t\t\t\t\t\t\t\t\t*********************************************************************\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\tWhat to delete?\n");
    printf("\t\t\t\t\t\t\t\t\t*********************************************************************\n\n\n");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t1. Information\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t2. Medical detail\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t3. Tests\n");
    //printf("\t\t\t\t\t4. Doctors\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t4. important notice\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t5. Blood bank updates\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t6. payments\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t7. Back\n");

    int ch;
    printf("\t\t\t\t\t\t\t\t\t\t\tEnter choise: ");
    scanf("%d", &ch);
    printf("\n");
    switch(ch)
    {
    case 1:
        Dinfo();
        break;
    case 2:
        Ddetail();
        break;
    case 3:
        Dtest();
        break;
    case 4:
        Din();
        break;
    case 5:
        Dbld();
        break;
    case 6:
        Dpay();
        break;
    case 7:
        wlcADMIN();
        break;
    default:
        Dlt();
    }
}


//editing panel information
int list1()
{
    printf("\n\n\n\t\t\t\t\t\t\t\t\t*********************************************************************\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\tEditing panel(info)\n");
    printf("\t\t\t\t\t\t\t\t\t*********************************************************************\n\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t1.Add info\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t2.Show\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t3.Delete\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t4.update\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t5.Back\n");
    int ch;
    printf("\t\t\t\t\t\t\t\t\t\t\tEnter your choise:");
    scanf("%d", &ch);
    system("CLS");
    switch(ch)
    {
    case 1:
        information();
        break;
    case 2:
        adminshow();
        break;
    case 3:
        Dinfo();
        break;
    case 4:
        information();
        break;
    case 5:
        wlcADMIN();
    default:
        list1();
    }

}


//for show tab information
int adminshow()
{
    FILE *rd;
    char buff[200];
    rd= fopen("information.txt", "r");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tINFORMATION\n");
    printf("\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\n\n");
    while(!feof(rd))
    {

        printf("\t\t\t\t\t\t\t\t\t\t\t");
        fgets(buff, 200, rd);
        puts(buff);
    }
    fclose(rd);

    printf("\t\t\t\t\t\t\t\t\t\t\tPress any key to continue...");
    getch();
    system("CLS");
    list1();
}


//information function
int information()
{
    fflush(stdin);
    char name[50];
    char address[50];
    char date[50];
    char number[50];
    char email[50];
    char blood[50];
    char word[10], gndr[20];
    int age;

    FILE *admin;
    admin= fopen("information.txt", "w");
    if (admin==NULL)
    {
        printf("file dosent exist");
        return;
    }
    printf("\n\n\n\t\t\t\t\t\t\t\t\t*********************************************************************\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\tINFORMATION\n");
    printf("\t\t\t\t\t\t\t\t\t*********************************************************************\n\n\n");

    printf("\n\n\t\t\t\t\t\t\t\t\t\t\tName: ");
    gets(name);
    fprintf(admin, "Name                :%s\n", name);

    printf("\t\t\t\t\t\t\t\t\t\t\tGender: ");
    gets(gndr);
    fprintf(admin, "Gender              :%s\n", gndr);

    printf("\t\t\t\t\t\t\t\t\t\t\tAge: ");
    scanf("%d", &age);
    fprintf(admin, "Age                 :%d\n", age);

    printf("\t\t\t\t\t\t\t\t\t\t\tAddress: ");
    getchar();
    gets(address);
    fprintf(admin, "Address             :%s\n", address);

    printf("\t\t\t\t\t\t\t\t\t\t\tDate of registration(dd.mm.yy): ");
    gets(date);
    fprintf(admin, "Date of rergistration(dd.mm.yy) :%s\n", date);

    printf("\t\t\t\t\t\t\t\t\t\t\tCell number: ");
    gets(number);
    fprintf(admin, "Cell number         :%s\n", number);

    printf("\t\t\t\t\t\t\t\t\t\t\tE-mail: ");
    gets(email);
    fprintf(admin, "E-mail              :%s\n", email);

    printf("\t\t\t\t\t\t\t\t\t\t\tBlood group: ");
    gets(blood);
    fprintf(admin, "Blood group         :%s\n", blood);

    printf("\t\t\t\t\t\t\t\t\t\t\tWord number: ");
    gets(word);
    fprintf(admin, "Word number         :%s\n\n", word);

    printf("\n\t\t\t\t\t\t\t\t\t\t\tRECORD SAVED AS FOLLOWED !\n\n");
    fclose(admin);

    FILE *rd;
    char buff[200];
    rd= fopen("information.txt", "r");
    while(fscanf(rd,"%s\n", buff)!=EOF)
    {
        printf("\t\t\t\t\t\t\t\t\t\t\t%s\n", buff);
    }
    fclose(rd);

    printf("\n\t\t\t\t\t\t\t\t\t\t\tpress any key to continue");
    getch();
    system("CLS");
    list1();

}


//editing panel of medical details
int list2()
{
    printf("\n\n\n\t\t\t\t\t\t\t\t\t*********************************************************************\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\tEditing panel(Medical detail)\n");
    printf("\t\t\t\t\t\t\t\t\t*********************************************************************\n\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t1.Add info\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t2.Show\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t3.Delete\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t4.update\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t5.Back\n");
    int ch;
    printf("\t\t\t\t\t\t\t\t\t\t\tEnter your choise:");
    scanf("%d", &ch);
    system("CLS");
    switch(ch)
    {
    case 1:
        medical_detail();
        break;
    case 2:
        adminshow2();
        break;
    case 3:
        Ddetail();
        break;
    case 4:
        medical_detail();
        break;
    case 5:
        wlcADMIN();
    default:
        list1();
    }

}

//medical detail show tab
int adminshow2()
{
    FILE *rd;
    char buff[200];
    rd= fopen("mDETAIL.txt", "r");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tMEDICAL DETAILS\n");
    printf("\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\n\n");
    while(!feof(rd))
    {

        printf("\t\t\t\t\t\t\t\t\t\t\t");
        fgets(buff, 200, rd);
        puts(buff);
    }
    fclose(rd);

    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tpress any key to continue");
    getch();
    system("CLS");
    list2();

}

//medical detail function
int medical_detail()
{
    fflush(stdin);
    char cc[100];
    char di[200];
    char oc[100];
    char referral[50];
    char ad[50];
    char report[200];
    char GT[200];

    FILE *admin1;
    admin1= fopen("mDETAIL.txt", "w");

    if (admin1==NULL)
    {
        printf("file doesnt exist");
    }
    printf("\n\n\n\t\t\t\t\t\t\t\t\t*********************************************************************\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\tMEDICAL DETAILS\n");
    printf("\t\t\t\t\t\t\t\t\t*********************************************************************\n\n\n");

    printf("\t\t\t\t\t\t\t\t\t\t\tCurrent case: ");
    gets(cc);
    fprintf(admin1, "Current case                    :%s\n", cc);

    printf("\t\t\t\t\t\t\t\t\t\t\tCase details: ");
    gets(di);
    fprintf(admin1, "Case in detail                  :%s\n", di);

    printf("\t\t\t\t\t\t\t\t\t\t\tOther complexities: ");
    gets(oc);
    fprintf(admin1, "Other complexities              :%s\n", oc);

    printf("\t\t\t\t\t\t\t\t\t\t\tReferral: ");
    gets(referral);
    fprintf(admin1, "Referral                        :%s\n", referral);

    printf("\t\t\t\t\t\t\t\t\t\t\tAppointed doctor(s): ");
    gets(ad);
    fprintf(admin1, "Appointed doctor(s)             :%s\n", ad);

    printf("\t\t\t\t\t\t\t\t\t\t\tReports: ");
    gets(report);
    fprintf(admin1, "Reports                         :%s\n", report);

    printf("\t\t\t\t\t\t\t\t\t\t\tGiven tests: ");
    gets(GT);
    fprintf(admin1, "Given tests                     :%s\n\n", GT);

    printf("\n\t\t\t\t\t\t\t\t\t\t\tRECORD SAVED AS FOLLOWED !\n\n");
    fclose(admin1);

    FILE *rd;
    char buff[200];
    rd= fopen("mDETAIL.txt", "r");
    while(fscanf(rd,"%s\n", buff)!=EOF)
    {
        printf("\t\t\t\t\t\t\t\t\t\t\t%s\n", buff);
    }
    fclose(rd);

    printf("\n\t\t\t\t\t\t\t\t\t\t\tpress any key to continue");
    getch();
    system("CLS");
    list2();
}


//editing panel of test
int list3()
{
    printf("\n\n\n\t\t\t\t\t\t\t\t\t*********************************************************************\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\tEditing panel(Tests)\n");
    printf("\t\t\t\t\t\t\t\t\t*********************************************************************\n\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t1.Add info\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t2.Show\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t3.Delete\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t4.update\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t5.Back\n");
    int ch;
    printf("\t\t\t\t\t\t\t\t\t\t\tEnter your choise:");
    scanf("%d", &ch);
    system("CLS");
    switch(ch)
    {
    case 1:
        tests();
        break;
    case 2:
        adminshow3();
        break;
    case 3:
        Dtest();
        break;
    case 4:
        tests();
        break;
    case 5:
        wlcADMIN();
    default:
        list3();
    }

}

//show tab for test
int adminshow3()
{
    FILE *rd;
    char buff[200];
    rd= fopen("Tests.txt", "r");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tTESTS\n");
    printf("\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\n\n");
    while(!feof(rd))
    {

        printf("\t\t\t\t\t\t\t\t\t\t\t");
        fgets(buff, 200, rd);
        puts(buff);
    }
    fclose(rd);
    printf("\n\t\t\t\t\t\t\t\t\t\t\tpress any key to continue");
    getch();
    system("CLS");
    list3();

}

//test function
int tests()
{
    fflush(stdin);
    char blt[20], gluc[20], prgnc[20], ngo[20], endsp[20];
    char ult[20], krna[20], otr[50];

    FILE *admin2;
    admin2= fopen("Tests.txt", "w");

    if(admin2==NULL)
    {
        printf("file doesnt exist");
    }
    printf("\n\n\n\t\t\t\t\t\t\t\t\t*********************************************************************\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\tTESTS\n");
    printf("\t\t\t\t\t\t\t\t\t*********************************************************************\n\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t\tAvailable tests in hospital: \n");

    printf("\n\n\t\t\t\t\t\t\t\t\t\t\tCellular and chemical analysis: \n");

    printf("\t\t\t\t\t\t\t\t\t\t\tCorona: ");
    gets(krna);
    fprintf(admin2, "Corona                    :%s\n", krna);

    printf("\t\t\t\t\t\t\t\t\t\t\tBlood test: ");
    gets(blt);
    fprintf(admin2, "Blood test                :%s\n", blt);

    printf("\t\t\t\t\t\t\t\t\t\t\tDiabetics: ");
    gets(gluc);
    fprintf(admin2,"Diabetics                 :%s\n", gluc);

    printf("\t\t\t\t\t\t\t\t\t\t\tPregnency: ");
    gets(prgnc);
    fprintf(admin2, "Pregnancy                 :%s\n", prgnc);

    printf("\n\n\t\t\t\t\t\t\t\t\t\t\tDiagnostoc Imaging: \n");

    printf("\t\t\t\t\t\t\t\t\t\t\tAngiography: ");
    gets(ngo);
    fprintf(admin2, "Angiography               :%s\n", ngo);

    printf("\t\t\t\t\t\t\t\t\t\t\tEndoscopy: ");
    gets(endsp);
    fprintf(admin2,"Endoscopy                 :%s\n", endsp);

    printf("\t\t\t\t\t\t\t\t\t\t\tUltrasound: ");
    gets(ult);
    fprintf(admin2, "Ultrasound                :%s\n", ult);

    printf("\t\t\t\t\t\t\t\t\t\t\tOther: ");
    gets(otr);
    fprintf(admin2, "Other                     :%s\n\n", otr);

    printf("\n\t\t\t\t\t\t\t\t\t\t\tRECORD SAVED AS FOLLOWED !\n\n");
    fclose(admin2);

    FILE *rd;
    char buff[200];
    rd= fopen("tests.txt", "r");
    while(fscanf(rd,"%s\n", buff)!=EOF)
    {
        printf("\t\t\t\t\t\t\t\t\t\t\t%s\n", buff);
    }
    fclose(rd);

    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tpress any key to continue");
    getch();
    system("CLS");
    list3();
}


//doctor list (heart)
int Heart()
{
    fflush(stdin);
    char bd[100];
    char nm[100];
    char eml[100];

    FILE *admin3;
    admin3= fopen("Doctorsheart.txt", "a");
    if(admin3==NULL)
    {
        printf("file doesnt exist");
    }
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\tHEART UNIT  \n");
    printf("\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\n\n");
    printf("\t\t\t\t\t\t\t\t\tHeart Doctors: ");
    gets(bd);
    fprintf(admin3, "Doctor %s(Cardiothoracic Surgeon)\n", bd);

    printf("\t\t\t\t\t\t\t\t\tNumber(for office): ");
    gets(nm);
    fprintf(admin3, "Number: %s\n", nm);

    printf("\t\t\t\t\t\t\t\t\tMail: ");
    gets(eml);
    fprintf(admin3, " E-mail: %s \n\n", eml);

    printf("\n\t\t\t\t\t\t\t\t\tRECORD SAVED AS FOLLOWED !\n\n");
    fclose(admin3);

    FILE *rd;
    char buff[200];
    rd= fopen("Doctorsheart.txt", "r");
    while(fscanf(rd,"%s\n", buff)!=EOF)
    {
        printf("\t\t\t\t\t\t\t\t\t%s\n", buff);
    }
    fclose(rd);

    printf("\t\t\t\t\t\t\t\t\t\t\tpress any key to continue");
    getch();
    system("CLS");
    wlcADMIN();

}

//doctor list kidny
int KDNY()
{
    fflush(stdin);

    char sd[100];
    char nm[100];
    char eml[100];

    FILE *admin33;
    admin33= fopen("Doctorskdny.txt", "a");
    if(admin33==NULL)
    {
        printf("file doesnt exist");
    }
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\tKidny \n");
    printf("\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\n\n");
    printf("\t\t\t\t\t\t\t\tDoctors: ");
    gets(sd);
    fprintf(admin33, "Doctor %s (Nephorologist)\n", sd);

    printf("\t\t\t\t\t\t\t\tNumber(for office): ");
    gets(nm);
    fprintf(admin33, "Number(office): %s\n", nm);

    printf("\t\t\t\t\t\t\t\tMail: ");
    gets(eml);
    fprintf(admin33, "E-mail: %s \n\n", eml);

    printf("\n\t\t\t\t\t\t\t\t\t\t\tRECORD SAVED AS FOLLOWED !\n\n");
    fclose(admin33);

    FILE *rd;
    char buff[200];
    rd= fopen("Doctorskdny.txt", "r");
    while(fscanf(rd,"%s\n", buff)!=EOF)
    {
        printf("\t\t\t\t\t\t\t\t\t\t\t%s\n", buff);
    }
    fclose(rd);

    printf("\t\t\t\t\t\t\t\t\t\t\tpress any key to continue");
    getch();
    system("CLS");
    wlcADMIN();

}


//doctor tab switch case
int doctors()
{
    printf("\n\n\n\t\t\t\t\t\t\t\t\t*********************************************************************\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\tDOCTORS\n");
    printf("\t\t\t\t\t\t\t\t\t*********************************************************************\n\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t1. Heart unit\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t2. Kedny\n");
    int cj;
    printf("\t\t\t\t\t\t\t\t\t\t\tEnter your choise: ");
    scanf("%d", &cj);
    system("CLS");
    switch(cj)
    {
    case 1:
        Heart();
        break;
    case 2:
        KDNY();
        break;
    default:
        doctors();
        ADMIN();
    }

}


//editing panel of notice
int list4()
{

    printf("\n\n\n\t\t\t\t\t\t\t\t\t*********************************************************************\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\tEditing panel(Notice)\n");
    printf("\t\t\t\t\t\t\t\t\t*********************************************************************\n\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t1.Add info\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t2.Show\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t3.Delete\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t4.update\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t5.Back\n");
    int ch;
    printf("\t\t\t\t\t\t\t\t\t\t\tEnter your choise:");
    scanf("%d", &ch);
    system("CLS");
    switch(ch)
    {
    case 1:
        important_notice();
        break;
    case 2:
        adminshow4();
        break;
    case 3:
        Din();
        break;
    case 4:
        important_notice();
        break;
    case 5:
        wlcADMIN();
    default:
        list4();
    }

}


//show tab for notice
int adminshow4()
{
    FILE *rd;
    char buff[200];
    rd= fopen("Blood.txt", "r");
    printf("\n\t\t\t\t\t\t\t\t\t\t\tAvailable blood groups in blood bank\n");
    printf("\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\n\n");
    while(!feof(rd))
    {

        printf("\t\t\t\t\t\t\t\t\t\t\t");
        fgets(buff, 200, rd);
        puts(buff);
    }
    fclose(rd);
    printf("\t\t\t\t\t\t\t\t\t\t\t****Blood Bank open 24/7****");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\tpress any key to continue");
    getch();
    system("CLS");
    list4();
}


//notice function
int important_notice()
{
    fflush(stdin);
    char notice[200];

    FILE *admin4;
    admin4= fopen("Notice.txt", "a");
    if(admin4==NULL)
    {
        printf("file doesntr exist");
    }
    printf("\n\n\n\t\t\t\t\t\t\t\t\t*********************************************************************\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\tNotice\n");
    printf("\t\t\t\t\t\t\t\t\t*********************************************************************\n\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t\tNotice: ");
    gets(notice);
    fprintf(admin4, "NOTICE=  %s\n\n", notice);

    printf("\n\t\t\t\t\t\t\t\t\t\t\tRECORD SAVED AS FOLLOWED !\n");
    fclose(admin4);

    FILE *rd;
    char buff[200];
    rd= fopen("Notice.txt", "r");
    while(fscanf(rd,"%s\n", buff)!=EOF)
    {
        printf("\t\t\t\t\t\t\t\t\t\t\t%s\n", buff);
    }
    fclose(rd);

    printf("\n\t\t\t\t\t\t\t\t\t\t\tpress any key to continue");
    getch();
    system("CLS");
    list4();
}


//editing panel of blood bank
int list6()
{
    printf("\n\n\n\t\t\t\t\t\t\t\t\t*********************************************************************\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\tEditing panel(Blood bank)\n");
    printf("\t\t\t\t\t\t\t\t\t*********************************************************************\n\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t1.Add info\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t2.Show\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t3.Delete\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t4.update\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t5.Back\n");
    int ch;
    printf("\t\t\t\t\t\t\t\t\t\t\tEnter your choise:");
    scanf("%d", &ch);
    system("CLS");
    switch(ch)
    {
    case 1:
        blood();
        break;
    case 2:
        adminshow6();
        break;
    case 3:
        Din();
        break;
    case 4:
        blood();
        break;
    case 5:
        wlcADMIN();
    default:
        list6();
    }

}


//show tab of notice
int adminshow6()
{
   FILE *rd;
    char buff[200];
    rd= fopen("Blood.txt", "r");
    printf("\n\t\t\t\t\t\t\t\t\t\t\tAvailable blood groups in blood bank\n");
    printf("\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\n\n");
    while(!feof(rd))
    {

        printf("\t\t\t\t\t\t\t\t\t\t\t");
        fgets(buff, 200, rd);
        puts(buff);
    }
    fclose(rd);
    printf("\t\t\t\t\t\t\t\t\t\t\t****Blood Bank open 24/7****");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\tpress any key to continue");
    getch();
    system("CLS");
    list6();
}


//blood bank function
int blood()
{
    fflush(stdin);
    char bld[200];

    FILE *adminb;
    adminb= fopen("Blood.txt", "a");
    if(adminb==NULL)
    {
        printf("file doesntr exist");
    }
    printf("\n\n\n\t\t\t\t\t\t\t\t\t*********************************************************************\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\tBLOOD BANK\n");
    printf("\t\t\t\t\t\t\t\t\t*********************************************************************\n\n\n");

    printf("\t\t\t\t\t\t\t\t\t\t\tBlood available: ");
    gets(bld);
    fprintf(adminb, "%s blood\n\n", bld);

    printf("\n\t\t\t\t\t\t\t\t\t\t\tRECORD SAVED AS FOLLOWED !\n");
    fclose(adminb);

    FILE *rd;
    char buff[200];
    rd= fopen("Blood.txt", "r");
    while(fscanf(rd,"%s\n", buff)!=EOF)
    {
        printf("\t\t\t\t\t\t\t\t\t\t\t%s\n", buff);
    }
    fclose(rd);

    printf("\n\t\t\t\t\t\t\t\t\t\t\tpress any key to continue");
    getch();
    system("CLS");
    wlcADMIN();
}


//editing panel of payments
int list5()
{
    printf("\n\n\n\t\t\t\t\t\t\t\t\t*********************************************************************\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\tEditing panel(Payments)\n");
    printf("\t\t\t\t\t\t\t\t\t*********************************************************************\n\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t1.Add info\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t2.Show\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t3.Delete\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t4.update\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t5.Back\n");
    int ch;
    printf("\t\t\t\t\t\t\t\t\t\t\tEnter your choise:");
    scanf("%d", &ch);
    system("CLS");
    switch(ch)
    {
    case 1:
        payments();
        break;
    case 2:
        adminshow5();
        break;
    case 3:
        Dpay();
        break;
    case 4:
        payments();
        break;
    case 5:
        wlcADMIN();
    default:
        list4();
    }

}


//show tab for payments
adminshow5()
{
    FILE *rd;
    char buff[200];
    rd= fopen("payment.txt", "r");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPAYMENTS\n");
    printf("\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\n\n");
    while(!feof(rd))
    {

        printf("\t\t\t\t\t\t\t\t\t");
        fgets(buff, 200, rd);
        puts(buff);
    }
    fclose(rd);
    printf("\n\t\t\t\t\t\t\t\t\t\t\tpress any key to continue");
    getch();
    system("CLS");
    list5();
}


//payment function
int payments()
{
    fflush(stdin);
    printf("\n\n\n\t\t\t\t\t\t\t\t\t*********************************************************************\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\tPAYMENTS\n");
    printf("\t\t\t\t\t\t\t\t\t*********************************************************************\n\n\n");
    char af[50];
    char TESTS[100];
    char OT[20];
    char other[20];
    int factor, total=0,i, pay;

    FILE *admin5;
    admin5= fopen("payment.txt", "w");

    if(admin5==NULL)
    {
        printf("file doesnt exist");
    }
    printf("\t\t\t\t\t\t\t\t\t\t\tAdmission fees: ");
    gets(af);
    fprintf(admin5, "Admission fees                                   %s\n", af);

    printf("\t\t\t\t\t\t\t\t\t\t\tTests: ");
    gets(TESTS);
    fprintf(admin5, "Tests                                            %s\n", TESTS);

    printf("\t\t\t\t\t\t\t\t\t\t\tSurgery: ");
    gets(OT);
    fprintf(admin5, "Surgery                                          %s\n", OT);

    printf("\t\t\t\t\t\t\t\t\t\t\tOthers: ");
    gets(other);
    fprintf(admin5, "Other costs                                      %s\n", other);

    printf("\t\t\t\t\t\t\t\t\t\t\ttotal factors: ");
    scanf("%d", &factor);
    printf("\t\t\t\t\t\t\t\t\t\t\tEnter %d payments: ", factor);
    for(i=1; i<=factor; i++)
    {
        scanf("%d", &pay);
        total=total+pay;
    }
    printf("\t\t\t\t\t\t\t\t\t\t\ttotal is= %d tk\n", total);
    fprintf(admin5, "---------------------------------------------------------------------------\ntotal                                            %d tk\n\n", total);

    printf("\n\t\t\t\t\t\t\t\t\t\t\tRECORD SAVED AS FOLLOWED!\n\n");
    fclose(admin5);

    FILE *rd;
    char buff[200];
    rd= fopen("payment.txt", "r");
    while(fscanf(rd,"%s\n", buff)!=EOF)
    {
        printf("\t\t\t\t\t\t\t\t\t%s\n", buff);
    }
    fclose(rd);

    printf("\t\t\t\t\t\t\t\t\t\t\tpress any key to continue");
    getch();
    system("CLS");
    list5();
}


//reading opinion and reply switch case
void opnn()
{
    FILE *rd;
    char buff[200];
    rd= fopen("opinion.txt", "r");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tOpinion\n");
    printf("\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\n\n");
    while(!feof(rd))
    {
        printf("\t\t\t\t\t\t\t\t\t\t\t");
        fgets(buff, 200, rd);
        puts(buff);
    }
    fclose(rd);

    printf("\n\n\t\t\t\t\t\t\t\t\t1. reply\n");
    printf("\t\t\t\t\t\t\t\t\t2. Back\n");
    int ch;
    printf("\t\t\t\t\t\t\t\t\t\t\tEnter your choise: ");
    scanf("%d", &ch);
    //system("CLS");
    switch(ch)
    {
    case 1:

        reply();
        break;
    case 2:
        system("CLS");
        wlcADMIN();
        break;
    default:
        system("CLS");
        opnn();
    }
}


//function for reply
void reply()
{
    fflush(stdin);
    char ans[200];
    FILE *aaa;
    aaa=fopen("adminreply.txt", "w");
    if(aaa==NULL)
    {
        printf("file doesnt exist");
    }
    printf("\n\n\t\t\t\t\t\t\t\t\tHere: ");
    gets(ans);
    fprintf(aaa, "%s\n\n", ans);
    fclose(aaa);
    printf("\n\t\t\t\t\t\t\t\t\t\t\tpress any key to continue");
    getch();
    system("CLS");
    wlcADMIN();
}


//------------------------------------------------------------------------

//user section
//chnage information in user
int cnginfo()
{
    fflush(stdin);
    char name[50];
    char address[50];
    char date[50];
    char number[50];
    char email[50];
    char blood[50];
    char word[10], gndr[20];
    int age;

    FILE *admin;
    admin= fopen("information.txt", "w");
    if (admin==NULL)
    {
        printf("file dosent exist");
        return;
    }
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tCHANGE\n");
    printf("\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\n\n");

    printf("\n\n\t\t\t\t\t\t\t\t\t\t\tName: ");
    gets(name);
    fprintf(admin, "Name                :%s\n", name);

    printf("\t\t\t\t\t\t\t\t\t\t\tGender: ");
    gets(gndr);
    fprintf(admin, "Gender              :%s\n", gndr);

    printf("\t\t\t\t\t\t\t\t\t\t\tAge: ");
    scanf("%d", &age);
    fprintf(admin, "Age                 :%d\n", age);

    printf("\t\t\t\t\t\t\t\t\t\t\tAddress: ");
    getchar();
    gets(address);
    fprintf(admin, "Address             :%s\n", address);

    printf("\t\t\t\t\t\t\t\t\t\t\tDate of registration(dd.mm.yy): ");
    gets(date);
    fprintf(admin, "Date of rergistration(dd.mm.yy) :%s\n", date);

    printf("\t\t\t\t\t\t\t\t\t\t\tCell number: ");
    gets(number);
    fprintf(admin, "Cell number         :%s\n", number);

    printf("\t\t\t\t\t\t\t\t\t\t\tE-mail: ");
    gets(email);
    fprintf(admin, "E-mail              :%s\n", email);

    printf("\t\t\t\t\t\t\t\t\t\t\tBlood group: ");
    gets(blood);
    fprintf(admin, "Blood group         :%s\n", blood);

    printf("\t\t\t\t\t\t\t\t\t\t\tWord number: ");
    gets(word);
    fprintf(admin, "Word number         :%s\n\n", word);

    printf("\n\t\t\t\t\t\t\t\t\t\t\tRECORD SAVED AS FOLLOWED !\n\n");
    fclose(admin);
    system("CLS");

    FILE *rd;
    char buff[200];
    rd= fopen("information.txt", "r");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\tUPDATED INFORMATION\n");
    printf("\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\n\n");
    while(!feof(rd))
    {

        printf("\t\t\t\t\t\t\t\t\t\t\t");
        fgets(buff, 200, rd);
        puts(buff);
    }
    fclose(rd);

    printf("\n\t\t\t\t\t\t\t\t\t\t\tpress any key to continue");
    getch();
    system("CLS");
    wlcuser();
}

//informaton in user
int userInfo()
{
    FILE *rd;
    char buff[200];
    rd= fopen("information.txt", "r");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tINFORMATION\n");
    printf("\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\n\n");
    while(!feof(rd))
    {

        printf("\t\t\t\t\t\t\t\t\t\t\t");
        fgets(buff, 200, rd);
        puts(buff);
    }
    fclose(rd);
    printf("\t\t\t\t\t\t\t\t\t\t\t1. Require change?\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t2. Back\n");

    int ch;
    printf("\t\t\t\t\t\t\t\t\t\t\tEnter choise: ");
    scanf("%d", &ch);
    system("CLS");
    switch(ch)
    {
    case 1:
        cnginfo();
        break;
    case 2:
        wlcuser();
        break;
    default:
        userInfo();
    }


}

//medical details in user
int userDetail()
{
    FILE *rd;
    char buff[200];
    rd= fopen("mDETAIL.txt", "r");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tMEDICAL DETAILS\n");
    printf("\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\n\n");
    while(!feof(rd))
    {

        printf("\t\t\t\t\t\t\t\t\t\t\t");
        fgets(buff, 200, rd);
        puts(buff);
    }
    fclose(rd);

    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tpress any key to continue");
    getch();
    system("CLS");
    wlcuser();

}


//test in user
int userTest()
{
    FILE *rd;
    char buff[200];
    rd= fopen("Tests.txt", "r");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tTESTS\n");
    printf("\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\n\n");
    while(!feof(rd))
    {

        printf("\t\t\t\t\t\t\t\t\t\t\t");
        fgets(buff, 200, rd);
        puts(buff);
    }
    fclose(rd);
    printf("\n\t\t\t\t\t\t\t\t\t\t\tpress any key to continue");
    getch();
    system("CLS");
    wlcuser();

}


//heart doctor view in user
int shwhrt()
{
    FILE *rd;
    char buff[200];
    rd= fopen("Doctorsheart.txt", "r");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tDOCTORS\n");
    printf("\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\n\n");
    while(!feof(rd))
    {

        printf("\t\t\t\t\t\t\t\t\t\t\t");
        fgets(buff, 200, rd);
        puts(buff);
    }
    fclose(rd);

    printf("\n\t\t\t\t\t\t\t\t\t\t\tpress any key to continue");
    getch();
    system("CLS");
    userDoctor();
}

//kidny doctor view in user
int shwkdny()
{
    FILE *rd;
    char buff[200];
    rd= fopen("Doctorskdny.txt", "r");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tDOCTORS\n");
    printf("\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\n\n");
    while(!feof(rd))
    {

        printf("\t\t\t\t\t\t\t\t\t\t\t");
        fgets(buff, 200, rd);
        puts(buff);
    }
    fclose(rd);

    printf("\n\t\t\t\t\t\t\t\t\t\t\tpress any key to continue");
    getch();
    system("CLS");
    userDoctor();
}

//doctor list in user section switch case
int userDoctor()
{

    printf("\n\n\n\t\t\t\t\t\t\t\t\t*********************************************************************\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\tDoctors\n");
    printf("\t\t\t\t\t\t\t\t\t*********************************************************************\n\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t1.Heart\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t2.kedny\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t3.Back\n");
    int ch;
    printf("\t\t\t\t\t\t\t\t\t\t\tEnter your choise: ");
    scanf("%d", &ch);
    system("CLS");
    switch(ch)
    {
    case 1:
        shwhrt();
        break;
    case 2:
        shwkdny();
        break;
    case 3:
        wlcuser();
    default:
        userDoctor();
    }
}

//notice in user section
int userNotice()
{
    FILE *rd;
    char buff[200];
    rd= fopen("Notice.txt", "r");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tNOTIFICATION\n");
    printf("\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\n\n");
    while(!feof(rd))
    {

        printf("\t\t\t\t\t\t\t\t\t\t");
        fgets(buff, 200, rd);
        puts(buff);
    }
    fclose(rd);

    printf("\n\t\t\t\t\t\t\t\t\t\t\tpress any key to continue");
    getch();
    system("CLS");
    wlcuser();
}

//blood bank in user section
int bldbnk()
{
    FILE *rd;
    char buff[200];
    rd= fopen("Blood.txt", "r");
    printf("\n\t\t\t\t\t\t\t\t\t\t\tAvailable blood groups in blood bank\n");
    printf("\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\n\n");
    while(!feof(rd))
    {

        printf("\t\t\t\t\t\t\t\t\t\t\t");
        fgets(buff, 200, rd);
        puts(buff);
    }
    fclose(rd);
    printf("\t\t\t\t\t\t\t\t\t\t\t****Blood Bank open 24/7****");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\tpress any key to continue");
    getch();
    system("CLS");
    wlcuser();

}

//writing complaint in file
void aco()
{
    fflush(stdin);
    char op[200];
    FILE *usr;
    usr= fopen("opinion.txt", "w");
    if(usr==NULL)
    {
        printf("file doesnt exist");
        return;
    }
    printf("\n\n\t\t\t\t\t\t\t\t\tWritr here: ");
    gets(op);
    fprintf(usr,"%s\n\n", op);
    fclose(usr);
    printf("\n\t\t\t\t\t\t\t\t\t\t\tPress any key to continue");
    getch();
    system("CLS");
    help();

}

//for reading admin reply
void rply()
{
    FILE *rd;
    char buff[200];
    rd= fopen("adminreply.txt", "r");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tReply\n");
    printf("\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\n\n");
    while(!feof(rd))
    {

        printf("\t\t\t\t\t\t\t\t\t\t\t");
        fgets(buff, 200, rd);
        puts(buff);
    }
    fclose(rd);

    printf("\n\t\t\t\t\t\t\t\t\t\t\tpress any key to continue");
    getch();
    system("CLS");
    help();
}

//complaints
void help()
{
    fflush(stdin);
    printf("\n\n\n\t\t\t\t\t\t\t\t\t*********************************************************************\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\tWe want to know\n");
    printf("\t\t\t\t\t\t\t\t\t*********************************************************************\n\n\n");
    printf("\n\n\t\t\t\t\t\t\t\t\t\tFor any kind of help connect to reception-> 555666\n");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t1. Any complain or opinion\n");
    printf("\t\t\t\t\t\t\t\t\t\t2. Replies\n");
    printf("\t\t\t\t\t\t\t\t\t\t3. Back\n");
    int ch;
    printf("\t\t\t\t\t\t\t\t\t\tEnter your choise: ");
    scanf("%d", &ch);

    switch(ch)
    {
    case 1:
        aco();
        break;
    case 2:
        system("CLS");
        rply();
        break;
    case 3:
        system("CLS");
        wlcuser();
        break;
    default:
        help();
    }
}

//blash
int bkash()
{
    char number[11];
    char pin[10];
    int taka;
    printf("\n\n\n\t\t\t\t\t\t\t\t\t*********************************************************************\n");
    printf("***************************************************************************************************JUST FEW STEPS TO GO********************************************************************************************\n");
    printf("\t\t\t\t\t\t\t\t\t*********************************************************************\n");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\tBKASH\n");
    printf("\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t\tEnter your account number: ");
    scanf("%s", &number);

    printf("\t\t\t\t\t\t\t\t\t\t\tEnter ammount: ");
    scanf("%d", &taka);

    printf("\t\t\t\t\t\t\t\t\t\t\tNumber: %s, ammount: %d, ", number, taka);

    printf("Enter pin: ");
    scanf("%s", &pin);

    if(strcmp(pin, "54321")==0)
    {
        printf("\t\t\t\t\t\t\t\t\t\t\t***PAYMENT SUCCESSFUL !***\n");
        printf("\t\t\t\t\t\t\t\t\t\t\tPRESS ANY KEY TO PROCEED");
        getch();
        system("CLS");
        wlcuser();
    }
    else
    {
        printf("\t\t\t\t\t\t\t\t\t\t\twrong pin, PRESS ANY KEY TO TRY AGAIN");
        getch();
        system("CLS");
        userPayment();
    }
}


//rocket
void rocket()
{
    char number[11];
    char pin[10];
    int taka;
    printf("\n\n\n\t\t\t\t\t\t\t\t\t*********************************************************************\n");
    printf("***************************************************************************************************JUST FEW STEPS TO GO********************************************************************************************\n");
    printf("\t\t\t\t\t\t\t\t\t*********************************************************************\n");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\tROCKET\n");
    printf("\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t\tEnter your account number: ");
    scanf("%s", &number);

    printf("\t\t\t\t\t\t\t\t\t\t\tEnter ammount: ");
    scanf("%d", &taka);

    printf("\t\t\t\t\t\t\t\t\t\t\tNumber: %s, ammount: %d, ", number, taka);

    printf("Enter pin: ");
    scanf("%s", &pin);

    if(strcmp(pin, "54321")==0)
    {
        printf("\t\t\t\t\t\t\t\t\t\t\t***PAYMENT SUCCESSFUL !***\n");
        printf("\t\t\t\t\t\t\t\t\t\t\tPRESS ANY KEY TO PROCEED");
        getch();
        system("CLS");
        wlcuser();
    }
    else
    {
        printf("\t\t\t\t\t\t\t\t\t\t\twrong pin, PRESS ANY KEY TO TRY AGAIN");
        getch();
        system("CLS");
        userPayment();
    }
}

//nogod
void nogod()
{
    char number[11];
    char pin[10];
    int taka;
    printf("\n\n\n\t\t\t\t\t\t\t\t\t*********************************************************************\n");
    printf("***************************************************************************************************JUST FEW STEPS TO GO********************************************************************************************\n");
    printf("\t\t\t\t\t\t\t\t\t*********************************************************************\n");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\tNOGOD\n");
    printf("\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t\tEnter your account number: ");
    scanf("%s", &number);

    printf("\t\t\t\t\t\t\t\t\t\t\tEnter ammount: ");
    scanf("%d", &taka);

    printf("\t\t\t\t\t\t\t\t\t\t\tNumber: %s, ammount: %d, ", number, taka);

    printf("Enter pin: ");
    scanf("%s", &pin);

    if(strcmp(pin, "54321")==0)
    {
        printf("\t\t\t\t\t\t\t\t\t\t\t***PAYMENT SUCCESSFUL !***\n");
        printf("\t\t\t\t\t\t\t\t\t\t\tPRESS ANY KEY TO PROCEED");
        getch();
        system("CLS");
        wlcuser();
    }
    else
    {
        printf("\t\t\t\t\t\t\t\t\t\t\twrong pin, PRESS ANY KEY TO TRY AGAIN");
        getch();
        system("CLS");
        userPayment();
    }
}


//digital payment switch case
int digital()
{
    printf("\n\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t1. Bkash\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t2. Rocket\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t3. Nogod\n");
    printf("\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\n");
    int ch;
    printf("\t\t\t\t\t\t\t\t\tEnter your choise: ");
    scanf("%d", &ch);
    system("CLS");
    switch(ch)
    {
    case 1:
        bkash();
        break;
    case 2:
        rocket();
        break;
    case 3:
        nogod();
        break;
    default:
        digital();
    }


}

//payment in user section
int userPayment()
{
    FILE *rd;
    char buff[200];
    rd= fopen("payment.txt", "r");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\tPAYMENTS\n");
    printf("\t\t\t\t\t\t\t\t\t---------------------------------------------------------------------\n\n\n");
    while(!feof(rd))
    {

        printf("\t\t\t\t\t\t\t\t\t");
        fgets(buff, 200, rd);
        puts(buff);
    }
    fclose(rd);

    printf("\n\t\t\t\t\t\t\t\t\t\tHow do you want to pay?\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t1. Cash\n");
    printf("\t\t\t\t\t\t\t\t\t\t2. Digital\n");

    int CH;
    printf("\t\t\t\t\t\t\t\t\t\tEnter your choise: ");
    scanf("%d", &CH);
    //system("CLS");
    switch(CH)
    {
    case 1:

        printf("\n\t\t\t\t\t\t\t\t\t\t\t***Great ! Go ahead, thank you***\n");
        break;
    case 2:
        system("CLS");
        digital();
        break;
    default:
        printf("\t\t\t\t\t\t\t\t\t\t\tWrong input");
    }

    printf("\n\t\t\t\t\t\t\t\t\t\t\tpress any key to continue");
    getch();
    system("CLS");
    wlcuser();
}


//welcome user
int wlcuser()
{
    printf("\n\n\t\t\t\t\t\t\t\t\t*********************************************************************\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t**WELCOME USER**\n");
    printf("\t\t\t\t\t\t\t\t\t*********************************************************************\n");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t1. Your Information\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t2. Your Medical details\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t3. Your Tests\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t4. Doctors list of hospital\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t5. Notification\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t6. Blood Bank\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t7. payments\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t8. Let us know about your thoughts\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t9. Log out\n");

    int ch;
    printf("\t\t\t\t\t\t\t\t\t\t\tEnter your choice: ");
    scanf("%d", &ch);
    system("CLS");
    switch(ch)
    {
    case 1:
        userInfo();
        break;

    case 2:
        userDetail();
        break;

    case 3:
        userTest();
        break;

    case 4:
        userDoctor();
        break;

    case 5:
        userNotice();
        break;

    case 6:
        bldbnk();

    case 7:
        userPayment();
        break;
    case 8:
        help();
        break;
    case 9:
        main();
        break;
    default:
        wlcuser();
        break;
    }
}



//registration for user
struct login
{


    char fname[100];
    char lname[20];
    char username[20];
    char password[20];

};
registration()
{
    FILE *log;
    log=fopen("login.txt", "w");
    struct login l;

    printf("\n\n\n\t\t\t\t\t\t\t\t\t*********************************************************************\n");
    printf("*************************************************************************************************REGISTRATION*****************************************************************************************************\n");
    printf("\t\t\t\t\t\t\t\t\t*********************************************************************\n");

    printf("\n\n\t\t\t\t\t\t\t\t\t\t\tEnter first name: ");
    scanf("%s", l.fname);

    printf("\t\t\t\t\t\t\t\t\t\t\tEnter last name: ");
    scanf("%s", l.lname);

    printf("\n\t\t\t\t\t\t\t\t\t\t\tEnter userID provided by admin: ");
    scanf("%s", l.username);

    printf("\t\t\t\t\t\t\t\t\t\t\tEnter password carefully: ");
    scanf("%s", l.password);
    fwrite(&l,sizeof(l),1,log);

    fclose(log);

    printf("\n\t\t\t\t\t\t\tRegistration successful! Now you have to login with the provided USERID from administration and password\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\tPress any key to continue to login....");
    getch();
    system("CLS");
    login();

}


//login for user
login()
{
    printf("\n\n\n\t\t\t\t\t\t\t\t\t*********************************************************************\n");
    printf("********************************************************************************************************LOGIN*****************************************************************************************************\n");
    printf("\t\t\t\t\t\t\t\t\t*********************************************************************\n");
    char username[200];
    char password[20];

    FILE *log;
    log=fopen("login.txt", "r");
    struct login l;
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\tUSERID: ");
    scanf("%s", &username);
    printf("\t\t\t\t\t\t\t\t\t\t\tPASSWORD: ");
    scanf("%s", &password);

    while(fread(&l,sizeof(l),1,log))
    {
        if(strcmp(username,l.username)==0 && strcmp(password, l.password)==0)
        {
            printf("\t\t\t\t\t\t\t\t\t\t\tLOGIN SUCCESSFUL !\n");
            printf("\t\t\t\t\t\t\t\t\t\t\tPRESS ANY KEY TO CONTINUE TO NEXT....");
            getch();
            system("CLS");
            wlcuser();
        }
        else
        {
            printf("\t\t\t\t\t\t\t\t\t\t\tSomething went wrong ! Enter currect username and password\n");
            printf("\t\t\t\t\t\t\t\t\t\t\tPress any key to continue....");
            getch();
            system("CLS");
            user();
        }
    }
    fclose(log);
}

//login or reg for user
int user()
{
    printf("\n\n\n\t\t\t\t\t\t\t\t\t*********************************************************************\n");
    printf("***************************************************************************************************JUST FEW STEPS TO GO********************************************************************************************\n");
    printf("\t\t\t\t\t\t\t\t\t*********************************************************************\n");
    int ch;
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t1. Registration\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t2. Login\n");
    printf("\t\t\t\t\t\t\t\t\t\t\tEnter choise: ");
    scanf("%d", &ch);
    system("CLS");
    switch(ch)
    {
    case 1:
        registration();
        break;
    case 2:
        login();
        break;
    default:
        user();
    }
    getch();
}


//welcome admin
int wlcADMIN()
{
    printf("\n\n\n\t\t\t\t\t\t\t\t\t*********************************************************************\n");
    printf("\t\t\t\t\t\t\t\t\t\t\tEDITING SECTION OF ADMIN PANEL\n");
    printf("\t\t\t\t\t\t\t\t\t*********************************************************************\n");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t1. Information\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t2. Medical Details\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t3. Tests\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t4. Doctors\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t5. important notice\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t6. payments\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t7. Blood bank update\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t8. Delete something\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t9. Read opinion\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t10. Back\n");
    int ch;
    printf("\t\t\t\t\t\t\t\t\t\t\tEnter your choice: ");
    scanf("%d", &ch);
    system("CLS");
    switch(ch)
    {
    case 1:
        list1();
        break;
    case 2:
        list2();
        break;
    case 3:
        list3();
        break;
    case 4:
        doctors();
        break;
    case 5:
        list4();
        break;
    case 6:
        list5();
        break;
    case 7:
        list6();
        break;
    case 8:
        Dlt();
        break;
    case 9:
        opnn();
        break;
    case 10:
        main();
        break;
    default:
        wlcADMIN();
    }

}

//Admin login
int ADMIN()
{
    char username[10];
    char password[10];
    printf("\n\n\n\t\t\t\t\t\t\t\t\t*********************************************************************\n");
    printf("***************************************************************************************************JUST FEW STEPS TO GO********************************************************************************************\n");
    printf("\t\t\t\t\t\t\t\t\t*********************************************************************\n");
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\tEnter your username: ");
    scanf("%s", &username);

    printf("\t\t\t\t\t\t\t\t\t\t\tEnter your password: ");
    scanf("%s", &password);

    if(strcmp(username, "sam")==0)
    {
        if(strcmp(password, "54321")==0)
        {
            printf("\t\t\t\t\t\t\t\t\t\t\tLOGIN SUCCESSFUL !\n");
            printf("\t\t\t\t\t\t\t\t\t\t\tPRESS ANY KEY TO PROCEED");
            getch();
            system("CLS");
            wlcADMIN();
        }
        else
        {
            printf("\t\t\t\t\t\t\t\t\t\t\twrong password, PRESS ANY KEY TO TRY AGAIN");
            getch();
            system("CLS");
            ADMIN();
        }

    }
    else
    {
        printf("\t\t\t\t\t\t\t\t\t\t\twrong username or password, PRESS ANY KEY TO TRY AGAIN");
        getch();
        system("CLS");
        ADMIN();
    }
}

void about()
{
    printf("\n\n\n\t\t\t\t\t\t\t\t\t*********************************************************************\n");
    printf("********************************************************************************************************ABOUT*****************************************************************************************************\n");
    printf("\t\t\t\t\t\t\t\t\t*********************************************************************\n");
    printf("\n\t\t\t\t\t\t\t\t\tIts a system that will make your hospital experience smoother\n\t\t\t\t\t\t\t\t\tNow you can see and get to know about your informations together at one place\n");
    printf("\t\t\t\t\t\t\t\t\tIts a one stop solution where a patient can be informed about their next step in the hospital\n");
    printf("\n\t\t\t\t\t\t\t\t\tHow to use");
    printf("\n\t\t\t\t\t\t\t\t\t1. Go to registration or login");
    printf("\n\t\t\t\t\t\t\t\t\t2. Then go to registration");
    printf("\n\t\t\t\t\t\t\t\t\t3. Give first name and last name");
    printf("\n\t\t\t\t\t\t\t\t\t4. Then give a username and password carefully");
    printf("\n\t\t\t\t\t\t\t\t\t5. You will be redirected to login page, login with your username and password and you're good to go\n\n");
    printf("\n\t\t\t\t\t\t\t\t\tcontact me: siamahmed64038@gmail.com");
    printf("\n\n\t\t\t\t\t\t\t\t\t\tpress any key to continue");
    getch();
    system("CLS");
    main();

}

int main()
{
    system("COLOR 0A");
    printf("\n\n\t\t\t\t\t\t\t\t\t*********************************************************************\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t***WELCOME TO PATIENT MANAGEMENT SYSTEM***\n");
    printf("\t\t\t\t\t\t\t\t\t*********************************************************************\n\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t1. User login or new registration\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t2. Admin panel\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t3. About\n");
    printf("\t\t\t\t\t\t\t\t\t\t\tEnter your choise: ");
    int ch;
    scanf("%d", &ch);
    system("CLS");
    switch(ch)
    {
    case 1:
        user();
        break;
    case 2:
        ADMIN();
        break;
    case 3:
        about();
        break;
    default:
        main();
    }
    getch();
}
