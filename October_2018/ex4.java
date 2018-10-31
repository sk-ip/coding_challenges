import java.io.*;

class A extends Thread
{
	public void run()
	{
		for(int i=0; i<10 ; i++)
			System.out.println("\n"+i);
	}
}

class B extends Thread
{
	public void run()
	{
		for(char ch='a'; ch<'j';ch++)
			System.out.println("\n"+ch);
	}
}

class ex4
{
	public static void main(String args[])
	{
		A thd1 = new A();
		B thd2 = new B();
		thd1.start();
		thd2.start();
	} 
}