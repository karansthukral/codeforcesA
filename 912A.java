import java.util.Scanner;

public class A912
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		long yc = in.nextLong();
		long bc = in.nextLong();

		long x = in.nextLong();
		long y = in.nextLong();
		long z = in.nextLong();

		long ryc=0, rbc=0;

		ryc=(2*x)+y;
		rbc=(3*z)+y;

		long dyc, dbc;

		dyc=yc-ryc;
		dbc=bc-rbc;

		//System.out.println((ryc+rbc) + " " + (yc+bc));

		if(dyc<=0&&dbc<=0)
			System.out.println((dyc+dbc)*(-1));		
		else if(dyc<0&&dbc>0)
			System.out.println(dyc*(-1));
		else if(dyc>0&&dbc<0)
			System.out.println(dbc*(-1));	
		else		
			System.out.println("0");
	}
}