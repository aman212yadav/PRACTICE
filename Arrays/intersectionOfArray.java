//problem link https://hack.codingblocks.com/practice/p/369/209

import java.util.*;
class ma{
    
    
    public static void main(String[] var){
        Scanner cin=new Scanner(System.in);
        int i,n,j;
        n=cin.nextInt();
        int[] arr=new int[n];
        int[] brr=new int[n];
        for(i=0;i<n;i++)
        arr[i]=cin.nextInt();
        for(i=0;i<n;i++)
        brr[i]=cin.nextInt();
        Arrays.sort(arr);
        Arrays.sort(brr);
        ArrayList<Integer> a=new ArrayList<>();
        i=0;
        j=0;
         while(i<n && j<n){
       
          
        if(arr[i]>brr[j])
          j++;
          else if(brr[j]>arr[i])
           i++;
           else
           {
               a.add(arr[i]);
               i++;
               j++;
              
               
               
           }
        
    }
   System.out.println(a);
        
        
    }
}
