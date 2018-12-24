package com.company;
import java.util.*;
public class Main {
    public static int[] getZarray(String a)
    {
        int l=0,r=0,i,n=a.length();
        int[] zArray=new int[n];
        zArray[0]=0;
        for(i=1;i< n ;i++)
        {
            if(i>r)
            {
                l=r=i;
                while(r<n && a.charAt(r)==a.charAt(r-l))
                    r++;
                zArray[i]=r-l;
                r--;

            }
            else{
                 int k=i-l;
                 if(zArray[k]<r-i+1)
                     zArray[i]=zArray[k];
                 else
                 {
                     l=i;
                     while(r<n &&  a.charAt(r)==a.charAt(r-l))
                        r++;
                        zArray[i]=r-l;
                        r--;
                 }
            }

        }
        return zArray;
    }

    public static ArrayList<Integer> zAlgorithm(String text, String pattern)
    {
        int[] zArray=getZarray(pattern+"$"+text);
        ArrayList<Integer> indices=new ArrayList<Integer>();
        for (int i=0;i<zArray.length;i++) {
            if(zArray[i]==pattern.length())
                indices.add(i-pattern.length());
        }
        return indices;


    }
    public static void main(String[] args) {
        String text,pattern;
        Scanner cin=new Scanner(System.in);
        text=cin.next();
        pattern=cin.next();
        ArrayList<Integer> indices=zAlgorithm(text,pattern);
        for (Integer k:indices) {
            System.out.println(k);

        }



    }

}
