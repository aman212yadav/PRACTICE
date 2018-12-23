package com.company;
import java.util.*;
class KmpAlgorithm{
    public int[] getLpsArray(String s)
    {
        int[] lps=new int[s.length()];
        lps[0]=0;
        int i=1,j=0;
        while(i<s.length())
        {
            if(s.charAt(j)==s.charAt(i))
            {

                lps[i]=1+j;
                j++;
                i++;
            }
            else
            {
                if(j!=0)
                {
                    j=lps[j-1];
                }
                else
                {
                    lps[i]=0;
                    i++;
                }
            }
        }
         return lps;
        }
        public int getMatchedIndex(String pattern,String sequence)
        {   int j=0,i;

            int[] lps=getLpsArray(pattern);
            for(i=0;i<sequence.length();i++)
            {
                if(sequence.charAt(i)==pattern.charAt(j))
                {
                    j++;
                    if(j==pattern.length())
                        return i-j+1;
                }
                else
                {
                    if(j!=0)
                    {
                        j=lps[j-1];
                        i--;
                    }
                }


            }
            return -1;
        }

    }
public class Main {
    public static void main(String[] args) {
        String sequence,pattern;
        Scanner cin=new Scanner(System.in);
       KmpAlgorithm kmpAlgorithm=new KmpAlgorithm();
       sequence=cin.next();
       pattern=cin.next();
       int index=kmpAlgorithm.getMatchedIndex(pattern,sequence);
       System.out.println(index);

    }

}
