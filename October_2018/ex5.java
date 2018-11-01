// program in implementing multithreading in java using the runnable interface
import java.io.*;

class A implements Runnable
{
	public void run()
	{
		for(int i=0;i<10;i++)
			System.out.println(" "+ i);
	}
}

class B implements Runnable
{
	public void run()
	{
		for(char ch='a'; ch<'j'; ch++)
			System.out.println(" "+ch);
	}
}

class ex5
{
	public static void main(String args[])
	{
		A thd1 = new A();
		B thd2 = new B();
		Thread th = new Thread(thd1);
		Thread th2 = new Thread(thd2);
		th.start();
		th2.start();
	}
}