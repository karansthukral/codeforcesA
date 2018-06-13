import java.util.Scanner;

public class A987
{

	static class Gauntlet
	{
		String color;
		String gem;
		int flag;
		Gauntlet(String a, String b, int x)
		{
			color=b;
			gem=a;
			flag=x;
		}
	}
	public static void main(String[] args) 
	{
		Gauntlet[] gemcolor = new Gauntlet[6];
		gemcolor[0] = new Gauntlet("Power", "purple", 0);
		gemcolor[1] = new Gauntlet("Time", "green", 0);
		gemcolor[2] = new Gauntlet("Space", "blue", 0);
		gemcolor[3] = new Gauntlet("Soul", "orange", 0);
		gemcolor[4] = new Gauntlet("Reality", "red", 0);
		gemcolor[5] = new Gauntlet("Mind", "yellow", 0);

		//System.out.println(gemcolor[0].gem);
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();

		String[] clr = new String[n];
		int i, j;

		for(i=0;i<n;i++)
		{
			clr[i] = in.next();
			for(j=0;j<6;j++)
			{	
				//System.out.println(clr[i].equals(gemcolor[j].color));
				//
				if(clr[i].equals(gemcolor[j].color))
				{
					gemcolor[j].flag=1;	
				}
			}
		}

		System.out.println(6-n);

		for(i=0;i<6;i++)
			if(gemcolor[i].flag==0)
				System.out.println(gemcolor[i].gem);
		
	}
}