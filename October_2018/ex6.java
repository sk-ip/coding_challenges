import java.awt.*;
import java.applet.*;

public class ex6 extends Applet
{
	public void paint(Graphics g)
	{
		int val1=10, val2=20;
		int sum;
		sum = val1+val2;
		String s = "sum:"+String.valueOf(sum);
		g.drawString(s, 100, 100);
	}
}