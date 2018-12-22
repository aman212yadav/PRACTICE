//CODE WRITTEN BY: Aman Yadav 
//CODECHEF AND HACKEREARTH USERNAME: aman212yadav
package com.company;
import java.util.*;

public class Main {

    public static int minSteps(int[] jumps)
    {
        int n=jumps.length;
        int jumpsResult[]=new int[n];
        jumpsResult[0]=0;
        for(int i=1;i<n;i++)
        {
            jumpsResult[i]=Integer.MAX_VALUE;
            for(int j=0;j<i;j++)
            {
                if(jumps[j]+j >=i)
                {
                    jumpsResult[i]=Integer.min(1+jumpsResult[j], jumpsResult[i]);
                }
            }
        }
        return jumpsResult[n-1];
    }


    public static void main(String[] args) {
        int n;
        Scanner cin=new Scanner(System.in);
        n=cin.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=cin.nextInt();
        }
        System.out.println("Minimum number of jumps to reach end is : "+
                minSteps(arr));
    }

}
