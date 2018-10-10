//miniproject
import java.util.Scanner;
import java.lang.*;
import java.math.*;
import java.sql.*;
import java.lang.*;
import java.sql.DriverManager;
class Loan
{
	static float ex, xx;
	static final String JDBC_DRIVER = "com.mysql.jdbc.Driver";  
   static final String DB_URL = "jdbc:mysql://localhost:3306/db";

   //  Database credentials
   static final String USER = "root";
   static final String PASS = "root";
   
	public static void insert(int age,String fname,String lname,String occupation,int salary,String pn,int an,float n,float p,float ex,float xx)
{
   // JDBC driver name and database URL
   
   Connection conn = null;
   Statement stmt = null;
   try{
      //STEP 2: Register JDBC driver
      Class.forName("com.mysql.jdbc.Driver");

      //STEP 3: Open a connection
      System.out.println("Connecting to a selected database...");
      conn = DriverManager.getConnection(DB_URL, USER, PASS);
      System.out.println("Connected database successfully...");
      
      //STEP 4: Execute a query
      System.out.println("Inserting records into the table...");
      stmt = conn.createStatement();


      String sql = "INSERT INTO Loan_Details " +
                   "VALUES ('"+age+"','"+fname+"','"+lname+"','"+occupation+"','"+salary+"','"+pn+"','"+an+"','"+n+"','"+p+"','"+ex+"','"+xx+"');"; 
                    // passing all the values which are to be stored in the database.
      stmt.executeUpdate(sql);

      System.out.println("Inserted records into the table...");

   }catch(SQLException se){
      //Handle errors for JDBC
      se.printStackTrace();
   }catch(Exception e){
      //Handle errors for Class.forName
      e.printStackTrace();
   }finally{
      //finally block used to close resources
      try{
         if(stmt!=null)
            conn.close();
      }catch(SQLException se){
      }// do nothing
      try{
         if(conn!=null)
            conn.close();
      }catch(SQLException se){
         se.printStackTrace();
      }//end finally try
   }//end try
   System.out.println("##### D O N E #####");
}//end main
//end JDBCExample
static void display(int a)
{ 
try{ 
    Class.forName("com.mysql.jdbc.Driver"); 
    Connection con=DriverManager.getConnection( 
    "jdbc:mysql://localhost:3306/db","root","root");

    //here db is database name, root is username and password

    Statement stmt=con.createStatement(); 
    ResultSet rs=stmt.executeQuery("SELECT * FROM Loan_Details WHERE Aadhar_Number ="+""+a);
    while(rs.next()) 
    System.out.printf(rs.getInt(1)+"  "+rs.getString(2)+"  "+rs.getString(3)+"  "+rs.getString(4)+"  "+rs.getInt(5)+"  "+rs.getString(6)+"  "+rs.getString(7)+"  "+rs.getInt(8)+"  "+rs.getInt(9)+"  "+rs.getInt(10)+"  "+rs.getInt(11), a); 
    con.close(); 
    }catch(Exception e){ System.out.println(e);} 
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
        ex = E;
        xx = X;
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
        ex = E;
        xx = X;
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
        ex = E;
        xx = X;
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
        ex = E;
        xx = X;
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
        ex = E;
        xx = X;
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
        ex = E;
        xx = X;
    }

    public static void main(String[] args) 
    {
            Scanner sc=new Scanner(System.in);
            int j = 3;
            float n=0, p=0;
            System.out.println("1.Existing User\n2.New User");
            System.out.println("Enter Choice");
            int ch=sc.nextInt();
            if(ch==1)
            {
                //method call to display details
                System.out.println("Enter Your Aadhar Number");
                int an=sc.nextInt();
                display(an);
            }
            else if(ch==2)
            {
                loop: while(true){
                System.out.println("\nEnter Age ");
                int age = sc.nextInt();
                if (age > 20)
                {
                    System.out.println("\nEnter the following details:-");
                    sc.nextLine();
                    System.out.println("\nFirst Name ");
                    String fname = sc.nextLine();
                    System.out.println("\nLast Name ");
                    String lname = sc.nextLine();
                    System.out.println("\nOccupation ");
                    String occupation = sc.nextLine();
                    System.out.println("\nAnnual Income ");
                    int salary = sc.nextInt();
                    sc.nextLine();
                    System.out.print("\nPlease Enter Your PAN Card Number ");
                    String pn = sc.nextLine();
                    if((pn.compareTo("AAAAA0000A")>0)&&((pn.compareTo("ZZZZZ9999Z")<0))) 
                    {
                        System.out.println("\n");
                        System.out.println("\nPlease Enter Your Aadhar Card Number ");
                        int an = sc.nextInt();
                        if((an>10000000L)&&(an<99999999L)) 
                        {
                            System.out.println("\nSelect The Type of Loan");
                            System.out.println("\n 1.Home Loan\n 2.Car Loan\n 3.Personal Loan\n 4.Business Loan\n 5.Education Loan\n 6.Medical Loan\n");
                            int c1 = sc.nextInt();
                            switch (c1) 
                            {
                                case 1:
                                    System.out.println("\nEnter The Time Period For Loan Repayment In Months\n");
                                    n = sc.nextFloat();
                                    System.out.println("\nENTER PRINCIPAL AMOUNT\n");
                                    p = sc.nextFloat();
                                    home(p, n);
                                    break;
                                case 2:
                                    System.out.println("\nEnter The Time Period For Loan Repayment In Months\n");
                                    n = sc.nextFloat();
                                    System.out.println("\nENTER PRINCIPAL AMOUNT\n");
                                    p = sc.nextFloat();
                                    car(p, n);
                                    break;
                                case 3:
                                    System.out.println("\nEnter The Time Period For Loan Repayment In Months\n");
                                    n = sc.nextFloat();
                                    System.out.println("\nENTER PRINCIPAL AMOUNT\n");
                                    p = sc.nextFloat();
                                    personal(p, n);
                                    break;
                                case 4:
                                    System.out.println("\nEnter The Time Period For Loan Repayment In Months\n");
                                    n = sc.nextFloat();
                                    System.out.println("\nENTER PRINCIPAL AMOUNT\n");
                                    p = sc.nextFloat();
                                    business(p, n);
                                    break;
                                case 5:
                                    System.out.println("\nEnter The Time Period For Loan Repayment In Months\n");
                                    n = sc.nextFloat();
                                    System.out.println("\nENTER PRINCIPAL AMOUNT\n");
                                    p = sc.nextFloat();
                                    education(p, n);
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
                            // calling the insert function to insert in the database.
							insert(age, fname, lname, occupation, salary, pn, an, n, p, ex, xx);
                        }
                            else
                        {
                            System.out.println("Invalid Aadhar Number");
                        }
                    }
                    else
                    {
                        System.out.println("Invalid PAN Number");
                    }

                }
                else
                    {
                      System.out.println("Loan Cannot Be Sanctioned");
                    }
                }
            }
}
}             

