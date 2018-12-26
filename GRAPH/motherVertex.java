package com.company;
import java.lang.reflect.Array;
import java.util.*;
public class Main {

    public LinkedList<Integer> adj[];
    public void  makeGraph(int n)
    {
        adj=new LinkedList[n];
        for(int i=0;i<n;i++)
            adj[i]=new LinkedList<>();
    }
    public void addEdge(int a,int b)
    {
        adj[a].add(b);

    }
    void dfs(int startVertex,boolean[] visited)
    {
        visited[startVertex]=true;
            Iterator<Integer> it=adj[startVertex].listIterator();
            while(it.hasNext())
            {
                int newVertex=it.next();
                if(visited[newVertex]==false) {
                    dfs(newVertex,visited);
                }
            }

    }
    public int getMotherVertex(int n)
    {
        boolean visited[]=new boolean[n];
        Arrays.fill(visited,false);
        int motherVertex=0;
        for(int i=0;i<n;i++)
        {   if(visited[i]==false) {
            dfs(i, visited);
             motherVertex=i;
        }
        }
        Arrays.fill(visited,false);
        dfs(motherVertex,visited);
        for (boolean i:visited)
            if(i==false)
                return -1;
            return motherVertex;


    }

    public static void  main(String[] args) {
      int n;
      Scanner cin=new Scanner(System.in);
      n=cin.nextInt();
      Main g=new Main();
      g.makeGraph(n);
        g.addEdge(0, 1);
        g.addEdge(0, 2);
        g.addEdge(1, 3);
        g.addEdge(4, 1);
        g.addEdge(6, 4);
        g.addEdge(5, 6);
        g.addEdge(5, 2);
        g.addEdge(6, 0);
        int motherVertex=g.getMotherVertex(n);
       if(motherVertex==-1)
           System.out.println("No MotherVertex Exist");
       else
           System.out.println(motherVertex);


    }

}
