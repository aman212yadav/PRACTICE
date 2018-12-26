package com.company;
import java.util.*;
public class Main {
    public static int getMergeInversion(int[] arr,int start,int end)
    {
        int inversion=0,mid=(start+end)/2,i=0,j=0,k=0;
        int[] temp=new int[end-start+1];
        int length1=mid-start+1;
        int length2=end-mid;
        while(i<length1 || j<length2)
        {
            if(i==length1)
            {
                temp[k++]=arr[mid+1+j];
                j++;
            }
            else if(j==length2)
            {
                temp[k++]=arr[start+i];
                i++;
            }
            else if(arr[start+i] > arr[mid+1+j])
            {
                inversion+=(mid-(start+i)+1);
                temp[k++]=arr[mid+1+j];
                j++;
            }
            else
            {
                temp[k++]=arr[start+i];
                i++;

            }
        }
        for(i=0;i<end-start+1;i++)
        {
            arr[start+i]=temp[i];
        }
        return inversion;

    }
    public static int getInversion(int [] arr,int start,int end)
    {
        if(start>=end)
            return 0;
        int mid=(start+end)/2;
        int inversion=getInversion(arr,start,mid);
        inversion+=getInversion(arr,mid+1,end);
        inversion+=getMergeInversion(arr,start,end);
        return inversion;
    }
    public static void main(String[] args) {
      int n;
      Scanner cin=new Scanner(System.in);
      n=cin.nextInt();
      int[] arr=new int[n];
      for(int i=0;i<n;i++)
          arr[i]=cin.nextInt();
      int noOfInversion=getInversion(arr,0,arr.length-1);
      System.out.println(noOfInversion);



    }

}
