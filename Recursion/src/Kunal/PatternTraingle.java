package Kunal;

public class PatternTraingle {
	public static void main(String[] args) {
        patternTriangle1(3);
    }

    private static void patternTriangle1(int n) {
        printHelper(n,0);
    }

    private static void printHelper(int r, int c) {
        if (r<0) return;

        if (r>c){
            printHelper(r,c+1);
            System.out.print("* ");

        }
        else {
            printHelper(r-1, 0);
            System.out.println();
        }
    }
}
