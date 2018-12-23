package com.company;
import java.util.*;
public class Main {
    public static void main(String[] args) {
        int n,j,i;
        Scanner cin=new Scanner(System.in);
        n=cin.nextInt();
        int[] price=new int[n+1];
        int[] profit=new int[n+1];
        price[0]=0;
        profit[0]=0;
        for(i=1;i<=n;i++)
        {price[i]=cin.nextInt();
              profit[i]=0;}
        for(i=1;i<=n;i++)
        {
            for(j=i;j<=n;j++) {
                profit[j] = Math.max(profit[j], price[i] + profit[j - i]);
                
            }
            
        }
        System.out.println(profit[n]);
        
    }

}
