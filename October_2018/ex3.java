// program on creating user defined exceptions in java program
import java.io.*;
import java.lang.Exception;

class MyException extends Exception
{
	MyException(String message)
	{
		super(message);
	}
}

class ex3
{
	public static void main(String args[])
	{
		int x=5,y=1000;
		try{
			float z = (float)x/(float)y;
			if(z<0.01)
				throw new MyException("number is too smaall");
		}
		catch(Exception e)
		{
			System.out.println("caught the exception");
			System.out.println(e.getMessage());
		}
		finally
		{
			System.out.println("everything is cool");
		}
	}
}