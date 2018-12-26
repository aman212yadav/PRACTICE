package com.company;
import java.util.*;
public class Main {
    public Queue<Integer> queue=new LinkedList<>();
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
    void printBfs(int startVertex)
    {
        boolean visited[]=new boolean[adj.length];
        visited[startVertex]=true;
        queue.add(startVertex);
        while(!queue.isEmpty())
        {
            int vertex=queue.poll();
            System.out.println(vertex);
            Iterator<Integer> it=adj[vertex].listIterator();
            while(it.hasNext())
            {
                int newVertex=it.next();
                if(visited[newVertex]==false) {
                    queue.add(newVertex);
                    visited[newVertex]=true;
                }
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
        g.printBfs(2);



    }

}
