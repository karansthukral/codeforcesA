import java.util.Scanner;

public class A609
{
	public static void main(String[] args) 
	{
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int m = in.nextInt();

		int[] a = new int[n];

		int i, j, tmp, count=0;

		for(i=0;i<n;i++)
			a[i] = in.nextInt();

		for(i=0;i<n;i++)
			for(j=0;j<n-i-1;j++)
				if(a[j]<a[j+1])
				{
					tmp=a[j];
					a[j]=a[j+1];
					a[j+1]=tmp;
				}
		for(i=0;i<n;i++)
			if(m>0)
			{
				m-=a[i];
				count++;
			}
		System.out.println(count);		
	}
}