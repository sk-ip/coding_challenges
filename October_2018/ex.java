import java.io.*;

class Student
{
	int rollno;
	void getNumber(int n)
	{
		rollno = n;
	}
	void putNumber()
	{
		System.out.println("roll number is:" + rollno);
	}
}

class Test extends Student
{
	float part1, part2;
	void getMarks(float m1,float m2)
	{
		part1 = m1;
		part2 = m2;
	}

	void putMarks()
	{
		System.out.println("marks in 1 :"+part1);
		System.out.println("marks in 2 :"+part2);
	}
}

interface Sports
{
	float sportwt = 0.6F;
	void putwt();
}

class Results extends Test implements Sports
{
	float total;
	public void putwt()
	{
		System.out.println("sports wt"+ sportwt);
	}
	void Display()
	{
		total = part1 + part2 + sportwt;
		putNumber();
		putMarks();
		putwt();
		System.out.println("total score = "+ total);
	}
}

class ex
{
	public static void main(String args[])
	{
		Results s = new Results();
		s.getNumber(1234);
		s.getMarks(27.5F, 33.0F);
		s.Display();
	}
}