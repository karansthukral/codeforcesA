import java.util.Scanner;

public class A460
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);

		int n = in.nextInt();
		int m = in.nextInt();

		int days=0, tmp=0, log;

		if(n<m)
			days=n;
		else if(n==m)
			days=n+1;
		else
		{
			log=n;
			days=0;
			while(log!=0)
			{
				//System.out.println(days + " " + tmp + " " + log);
				log--;
				tmp++;
				days++;
				if(tmp-m==0)
				{
					tmp=0;
					log++;
				}
			}

			//System.out.println(days + " " + tmp + " " + log);
			
		}
		System.out.println(days);
	}
}