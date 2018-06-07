import java.util.Scanner;

public class A599
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		int d1 = in.nextInt();// h to s1
		int d2 = in.nextInt();// h to s2
		int d3 = in.nextInt();// s1 to s2

		int dis=0;

		if((d1+d2)==d3)
			dis=2*d3;
		else if((d1+d2)<d3)
			dis=2*(d1+d2);
		else
		{	
			if(((2*d3)<=d1)||((2*d3)<=d2))
			{	
				dis=(2*d3);
				if(d1>d2)
					dis+=(2*d2);
				else if(d1<d2)
					dis+=(2*d1);
				else
					dis=d1+d2+d3;
			}
			else
				dis=d1+d2+d3;
		}
		System.out.println(dis);
	}
}