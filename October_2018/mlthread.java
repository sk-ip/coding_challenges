import java.io.*;

class Number extends Thread{
	public void run()
	{
		int n;
		for(n=0;n<10;n++)
		{
			System.out.print(n+" ");
		}
	}
}

class Alphabet extends Thread{
	public void run()
	{
		char ch;
		for(ch='a';ch<'i';ch++)
		{
			System.out.print(ch+" ");
		}
	}
}

class mlthread {

	public static void main(String args[])
	{
		Number num = new Number();
		Alphabet alpha = new Alphabet();
		num.start();
		alpha.start();

	}
}