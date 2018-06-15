import java.util.Scanner;

public class A938
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		String s = in.next();
		//System.out.println(delchar(s));
		while(check(s)==1)
		{
			//System.out.println(s);
			s=delchar(s);
		}
		//s=delchar(s);
		System.out.println(s);
		//System.out.println(s.length());
	}
	public static int check(String a)
	{
		int i, flag=0;
		for(i=0;i<a.length()-1;i++)
		{
			if(a.charAt(i)=='a'||a.charAt(i)=='e'||a.charAt(i)=='i'||a.charAt(i)=='o'||a.charAt(i)=='u'||a.charAt(i)=='y')
				if(a.charAt(i+1)=='a'||a.charAt(i+1)=='e'||a.charAt(i+1)=='i'||a.charAt(i+1)=='o'||a.charAt(i+1)=='u'||a.charAt(i+1)=='y')					
					flag=1;
		}
		return flag;
	}
	public static String delchar(String a)
	{
		int i;
		for(i=0;i<a.length()-1;i++)
		{
			if(a.charAt(i)=='a'||a.charAt(i)=='e'||a.charAt(i)=='i'||a.charAt(i)=='o'||a.charAt(i)=='y'||a.charAt(i)=='u')
				if(a.charAt(i+1)=='a'||a.charAt(i+1)=='e'||a.charAt(i+1)=='i'||a.charAt(i+1)=='o'||a.charAt(i+1)=='y'||a.charAt(i+1)=='u')
				{
					//System.out.println(a.charAt(i)+" "+a.charAt(i+1));
					break;
				}					
					
			//System.out.println(i);
		}
		//System.out.println(i);
	return a.substring(0, i+1) + a.substring(i+2);
	}
}