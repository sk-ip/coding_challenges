import java.io.*;
import java.lang.*;

class Number1 extends Thread{
	something some;

	Number1(something some1){
		this.some = some;
	}

	public void run()
	{
		some.running(5);
	}
}

class Number2 extends Thread{
	something some;

	Number2(something some1){
		this.some = some;
	}

	public void run()
	{
		some.running(100);
	}
}

class something {
	synchronized void running(int n)
	{
		for(int i=1;i<10;i++)
			System.out.println(n*i);
		try{  
      Thread.sleep(400);  
     }catch(Exception e){System.out.println(e);}
	}

}

class sync{
	public static void main(String args[])
	{
		something someobj = new something();
		Number1 some1 = new Number1(someobj);
		Number2 some2 = new Number2(someobj);
		some1.start();
		some2.start();
	}
}