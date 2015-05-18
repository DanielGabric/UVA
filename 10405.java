import java.util.*;
public class 10405{
    public static void main(String[]args){
        Scanner s = new Scanner(System.in);
        while(s.hasNext()){
            String one = s.nextLine();
            String two = s.nextLine();
            int[][]matrix = new int[one.length()+1][two.length()+1];
            for(int i=1;i<=one.length();++i){
                for(int j=1;j<=two.length();++j){
                    if(one.charAt(i-1)==two.charAt(j-1))matrix[i][j]=matrix[i-1][j-1]+1;
                    else matrix[i][j]=Math.max(matrix[i-1][j],matrix[i][j-1]);
                }
            }
            System.out.println(matrix[one.length()][two.length()]);
        }
    }
}