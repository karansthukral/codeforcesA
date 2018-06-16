import java.util.Scanner;

public class A875
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int tmp=n, count=0;
		int[] val = new int[1000];

		int i, j=0;

		for(i=0;i<1000;i++)
			val[i]=-1;

		while((n>(tmp-81))&&(n>0))
		{
			n--;
			if(cmp(n)==tmp)
			{
				count++;
				val[j]=n;
				j++;
			}	
		}

		System.out.println(count);

		for(i=999;i>=0;i--)
			if(val[i]!=-1)
				System.out.println(val[i]);

	}
	public static int cmp(int a)
	{
		int sum=a;
         
        while (a!=0)
        {
        	sum+=a%10;
            a=a/10;
        }

        return sum;     
	}
}