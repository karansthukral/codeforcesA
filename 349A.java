import java.util.Scanner;

public class A349
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int i, tf=0, ff=0, hu=0, flag=0;
		int[] a = new int[n];

		for(i=0;i<n;i++)
		{	
			a[i] = in.nextInt();

			if(a[i]==25)
				tf++;
			else if(a[i]==50)
			{
				ff++;
				tf--;
			}	
			else
			{
				hu++;
				if(ff>0)
				{		
					ff--;
					tf--;
				}
				else
					tf-=3;
			}

			if(tf<0||ff<0||hu<0)
				flag=1;
		}

		if(flag==1)
			System.out.println("NO");
		else
			System.out.println("YES");
	}
}