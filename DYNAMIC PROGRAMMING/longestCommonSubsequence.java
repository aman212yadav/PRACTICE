package com.company;
import java.util.*;
public class Main {
    public static int LCS(String X,String Y,int n,int m,Map<String,Integer> lcs)
    {   if(n==0 || m==0)
          return 0;
        String key= n+" "+m;
        if(!lcs.containsKey(key))
        {
            if(X.charAt(n-1)==Y.charAt(m-1))
            {
                lcs.put(key,1+LCS(X,Y,n-1,m-1,lcs));
            }
            else
            {
                lcs.put(key,Math.max(LCS(X,Y,n-1,m,lcs),LCS(X,Y,n,m-1,lcs)));
            }
        }
        return lcs.get(key);
    }
    public static void main(String[] args) {
        String X,Y;
        Map<String ,Integer> lcs=new HashMap<>();
        Scanner cin=new Scanner(System.in);
        X=cin.next();
        Y=cin.next();
        System.out.println(LCS(X,Y,X.length(),Y.length(),lcs));
    }

}
