package com.company;
import java.util.*;
class RabinKarp{

    public int rabinKarp(String sequence,String pattern)
    {    final int MAX_CHAR=26, MOD=15139;

        int patternLength=pattern.length();
        int sequenceLength=sequence.length();
        int hashSequence=0,hashPattern=0,h=1;
        for(int i=0;i<patternLength-1;i++)
            h=(MAX_CHAR*h)%MOD;
        for(int i=0;i<patternLength;i++)
        {
            hashPattern=(hashPattern*MAX_CHAR + pattern.charAt(i))%MOD;
            hashSequence=(hashSequence*MAX_CHAR +sequence.charAt(i))%MOD;
        }
        for(int i=0;i<=(sequenceLength-patternLength);i++)
        {
            if(hashPattern==hashSequence)
            {
                int j=0;
                for( j=0;j<patternLength;j++)
                {
                    if(sequence.charAt(i+j)!=pattern.charAt(j))
                        break;
                }
                if(j==patternLength)
                    return i;
            }
            if(i< (sequenceLength-patternLength))
            {
                hashSequence=(MAX_CHAR*(hashSequence-sequence.charAt(i)*h)+sequence.charAt(i+patternLength))%MOD;
                if(hashSequence<0)
                    hashSequence=hashSequence+MOD;
            }
        }
        return -1;

    }

}
public class Main {
    public static void main(String[] args) {
        String sequence,pattern;
        Scanner cin=new Scanner(System.in);
        sequence=cin.next();
        pattern=cin.next();
        RabinKarp rabinKarp=new RabinKarp();
        System.out.println("Pattern "+pattern+" first occur in sequence "+sequence+" at "+rabinKarp.rabinKarp(sequence,pattern));


    }

}
