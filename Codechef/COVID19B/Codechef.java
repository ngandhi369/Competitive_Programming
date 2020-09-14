/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
        
        int t;
        t = sc.nextInt();
        
        for(int o=0;o<t;o++)
        {
            int n = sc.nextInt();
            int[] v = new int[n];
            int[] q = new int[n];

            int maximum = 0, minimum = n + 1;

            for (int i=0;i<n;i++)
            {
                v[i] = sc.nextInt();
            }

            for(int i=0;i<n;i++)
            {
                int c = 1;
                int maxi = v[i];

                for(int j=0;j<n;j++)
                {
                    q[j]=0;
                }
                //System.out.println("c1:"+c);


                q[i]=1;
                for(int j=0;j<i;j++)
                {
                    if(v[i] < v[j])
                    {
                        q[j]=1;
                        c=c+1;
                    }
                    if(maxi < v[j])
                    {
                        maxi = v[j];
                    }
                }
                //System.out.println("c2:"+c);
                for(int j=i+1;j<n;j++)
                {
                    if(v[j] < maxi)
                    {
                        for(int l=0;l<i;l++)
                        {
                            if(q[l]==0 && v[j] < v[l])
                            {
                                c=c+1;
                                //System.out.println("c3:"+c);
                                q[l]=1;
                            }
                        }
                        q[j]=1;
                        c=c+1;
                    }
                }
                //System.out.println("c:"+c);
                minimum = Math.min(c,minimum);
                maximum = Math.max(c,maximum);
                c=1;
            }
            System.out.println(minimum+" "+maximum);
        }
	}
}
