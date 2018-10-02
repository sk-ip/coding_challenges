//package project;
import java.util.Scanner;
import java.lang.*;
public class Loan{
    public static void main(String[] args) {
        {
            int j = 3;
            float n, p;
            int password = 1;
            Scanner sc = new Scanner(System.in);
            loop: while(true){
            System.out.println("\nEnter Password ");
            int password1 = sc.nextInt();
            if (password == password1) {
                System.out.println("\nEnter Age ");
                int age = sc.nextInt();
                if (age > 17) {
                    System.out.println("\nEnter the following details:-");
                    System.out.print("First Name ");
                    String fname = sc.nextLine();
                    System.out.println("\nLast Name ");
                    String lname = sc.nextLine();
                    System.out.println("\nOccupation ");
                    String occupation = sc.nextLine();
                    System.out.println("\nAnnual Income ");
                    int salary = sc.nextInt();
                    System.out.println("\nPlease Enter Your PAN Card Number ");
                    int pn = sc.nextInt();
                    System.out.println("\n");
                    System.out.println("\nPlease Enter Your Aadhar Card Number ");
                    int an = sc.nextInt();
                    System.out.println("\n");
                    System.out.println("\nPlease submit original and self attested xerox documents at\n");
                    System.out.println("\n");
                    System.out.println("\n");
                    System.out.println("\n1.Domicile Certificate\n2.Passport\n3.Driving License\n");
                    System.out.println("\n");
                    System.out.println("\n");
                    System.out.println("\nSelect The Type of Loan");
                    System.out.println("\n 1.Home Loan\n 2.Car Loan\n 3.Personal Loan\n 4.Business Loan\n 5.Education Loan\n 6.Medical Loan\n");
                    int c1 = sc.nextInt();
                    switch (c1) {
                        case 1:
                            System.out.println("\nEnter The Time Period For Loan Repayment In Months\n");
                            n = sc.nextFloat();
                            System.out.println("\nENTER PRINCIPAL AMOUNT\n");
                            p = sc.nextFloat();
                            home(p,n);
                            break;
                        case 2:
                            System.out.println("\nEnter The Time Period For Loan Repayment In Months\n");
                            n = sc.nextFloat();
                            System.out.println("\nENTER PRINCIPAL AMOUNT\n");
                            p = sc.nextFloat();
                            car(p,n);
                            break;
                        case 3:
                            System.out.println("\nEnter The Time Period For Loan Repayment In Months\n");
                            n = sc.nextFloat();
                            System.out.println("\nENTER PRINCIPAL AMOUNT\n");
                            p = sc.nextFloat();
                            personal(p,n);
                            break;
                        case 4:
                            System.out.println("\nEnter The Time Period For Loan Repayment In Months\n");
                            n = sc.nextFloat();
                            System.out.println("\nENTER PRINCIPAL AMOUNT\n");
                            p = sc.nextFloat();
                            business(p,n);
                            break;
                        case 5:
                            System.out.println("\nEnter The Time Period For Loan Repayment In Months\n");
                            n = sc.nextFloat();
                            System.out.println("\nENTER PRINCIPAL AMOUNT\n");
                            p = sc.nextFloat();
                            education(p,n);
                            break;
                        case 6:
                            System.out.println("\nEnter The Time Period For Loan Repayment In Months\n");
                            n = sc.nextFloat();
                            System.out.println("\nENTER PRINCIPAL AMOUNT\n");
                            p = sc.nextFloat();
                            break;
                        default:
                            System.out.println("ERROR");
                            break;
                    }

                } else {
                    System.out.println("Loan Cannot Be Sanctioned");
                }
            } else {
                System.out.println("\nAccess Denied\n");
                j--;
                System.out.println("\nTries left:\n");
                System.out.println(j);
                if (j == 0) {
                    break loop;
                }
                }
            }
        }
    }
    static void home(float a,float z)
    {
        float E,X;
        E= (float)(a*0.00833333333*(Math.pow(1.00416666666,z))/((Math.pow(1.00416666666,z))-1));
        System.out.println("EMI to be paid monthly:");
        System.out.println(E);
        X=E*12;
        System.out.println("Total Repayment:");
        System.out.println(X);
    }

    static void car(float a,float z)
    {
        float E,X;
        E= (float)(a*0.00416666666*(Math.pow(1.00416666666,z))/((Math.pow(1.00416666666,z))-1));
        System.out.println("EMI to be paid monthly:");
        System.out.println(E);
        X=E*12;
        System.out.println("Total Repayment:");
        System.out.println(X);
    }

    static void medical(float a,float z)
    {
        float E,X;
        E= (float)(a*0.005*(Math.pow(1.00416666666,z))/((Math.pow(1.00416666666,z))-1));
        System.out.println("EMI to be paid monthly:");
        System.out.println(E);
        X=E*12;
        System.out.println("Total Repayment:");
        System.out.println(X);
    }

    static void personal(float a,float z)
    {
        float E,X;
        E= (float)(a*0.01416666666*(Math.pow(1.00416666666,z))/((Math.pow(1.00416666666,z))-1));
        System.out.println("EMI to be paid monthly:");
        System.out.println(E);
        X=E*12;
        System.out.println("Total Repayment:");
        System.out.println(X);
    }

    static void education(float a,float z)
    {
        float E,X;
        E= (float)(a*0.00870833333*(Math.pow(1.00416666666,(z)))/((Math.pow(1.00416666666,z))-1));
        System.out.println("EMI to be paid monthly:");
        System.out.println(E);
        X=E*12;
        System.out.println("Total Repayment:");
        System.out.println(X);
    }

    static void business(float a,float z)
    {
        float E,X;
        E= (float)(a*0.01525*(Math.pow(1.00416666666,z))/((Math.pow(1.00416666666,z))-1));
        System.out.println("EMI to be paid monthly:");
        System.out.println(E);
        X=E*12;
        System.out.println("Total Repayment:");
        System.out.println(X);
    }
}