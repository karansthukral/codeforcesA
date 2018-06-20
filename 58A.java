import java.util.Scanner;

public class A58
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		String s = in.next();
		int[] hello = new int[5];

		hello[0]=s.indexOf("h");
		if(hello[0]==-1)
		{
			System.out.println("NO");
			System.exit(0);
		}

		//System.out.println(hello[0]);

		int i, flag=0;

		for(i=(hello[0]);i<s.length();i++)
			if(s.charAt(i)=='e')
			{
				hello[1]=i;
				break;
			}

		for(i=(hello[1]);i<s.length();i++)
			if(s.charAt(i)=='l')
			{
				hello[2]=i;
				break;
			}


		for(i=(hello[2]+1);i<s.length();i++)
			if(s.charAt(i)=='l')
			{
				hello[3]=i;
				break;
			}

		for(i=(hello[3]);i<s.length();i++)
			if(s.charAt(i)=='o')
			{
				hello[4]=i;
				break;
			}
	

		/*for(i=0;i<5;i++)
			System.out.print(hello[i] + " ");*/

		for(i=1;i<5;i++)
			if(hello[i]>0)
				flag++;

		if(flag==4)
			System.out.println("YES");
		else 
			System.out.println("NO");

		
	}

}