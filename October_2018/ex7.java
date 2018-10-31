import java.awt.*;
import java.applet.*;

public class ex7 extends Applet
{
	TextField text1, text2;
	public void init()
	{
		text1 = new TextField(10);
		text2 = new TextField(10);
		add(text1);
		add(text2);
		text1.setText("0");
		text2.setText("0");
	}

	public void paint(Graphics g)
	{
		String s1,s2,s3;
		int x=0,y=0,z=0;
		g.drawString("input a number in the textfield", 10, 50);
		try
		{
			s1 = text1.getText();
			s2 = text2.getText();
			x = Integer.parseInt(s1);
			y = Integer.parseInt(s2);
		}
		catch(Exception ex){}
		z = x+y;
		s3 = String.valueOf(z);
		g.drawString(s3, 100, 75);
	}

	public boolean action(Event event, Object object)
	{
		repaint();
		return true;
	}
}