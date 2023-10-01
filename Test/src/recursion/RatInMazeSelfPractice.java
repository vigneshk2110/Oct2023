package recursion;

import java.util.*;
public class RatInMazeSelfPractice 
{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
//		System.out.println("Enter the size of the matrix:");
		int[][] maze= {{1,1,0},{1,1,1},{0,1,1}};
		int[][] visited= {{0,0,0},{0,0,0},{0,0,0}};
//		System.out.println(pathExists(maze,0,0,visited));
		printAllpaths(maze,visited,0,0);
	}			
				
					
	private static boolean pathExists(int[][] maze, int i, int j, int[][] visited) {
		int n=maze.length;
		if(i<0 || j<0 || i>n-1 || j>n-1 || maze[i][j]==0 || visited[i][j]==1)
			return false;
		
		visited[i][j]=1;
		if(i==n-1 && j==n-1)
		{
			for(int r=0;r<n;r++)
			{
				for(int c=0;c<n;c++)
				{
					System.out.print(visited[r][c]+" ");
				}
				System.out.println();
			}
			return true;
		}
		if(pathExists(maze,i-1,j,visited)) // checking top
			return true;
		if(pathExists(maze,i,j+1,visited)) // checking Right
			return true;
		if(pathExists(maze,i+1,j,visited)) // checking down
			return true;
		if(pathExists(maze,i,j-1,visited)) // checking left
			return true;
	return false;
	}


	public static void printAllpaths(int[][]maze,int[][]path,int i,int j)
	{
		int n=path.length;
		if(i==-1 || j==-1 || i==n || j==n || maze[i][j]==0 || path[i][j]==1 )
		{
			return;
		}
		
		path[i][j]=1;
		if(i==n-1 && j==n-1)
		{
			System.out.println("Final Path matrix");
			for(int r=0;r<n;r++)
			{
				for(int c=0;c<n;c++) {
					System.out.print(path[r][c]+" ");
				}
			System.out.println();
			}
			path[i][j]=0;
			return ;
		}
		//Top
		printAllpaths(maze,path,i-1,j); 
		//Right
		printAllpaths(maze,path,i,j+1); 
		//Down
		printAllpaths(maze,path,i+1,j); 
		//Left
		printAllpaths(maze,path,i,j-1); 
		path[i][j]=0;
	}

}