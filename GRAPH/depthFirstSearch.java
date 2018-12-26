package com.company;
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
        adj[b].add(a);
    }
    void printDfs(int startVertex,boolean[] visited)
    { System.out.println(startVertex);
        visited[startVertex]=true;
            Iterator<Integer> it=adj[startVertex].listIterator();
            while(it.hasNext())
            {
                int newVertex=it.next();
                if(visited[newVertex]==false) {
                    printDfs(newVertex,visited);
                }
            }

    }

    public static void  main(String[] args) {
      int n;
      Scanner cin=new Scanner(System.in);
      n=cin.nextInt();
      Main g=new Main();
      g.makeGraph(n);
        g.addEdge(0, 1);
        g.addEdge(0, 2);
        g.addEdge(1, 2);
        g.addEdge(2, 0);
        g.addEdge(2, 3);
        g.addEdge(3, 3);
        boolean visited[]=new boolean[n];
        g.printDfs(2,visited);



    }

}
