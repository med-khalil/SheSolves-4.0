import java.util.*;
public class sol1_AC_java {
    public static void main(String args[]) {
        String s;
        Scanner scan = new Scanner(System.in);
        s =scan.next();
        int sum=0;
        for(int i = 0;i<s.length();i++){
            sum+= s.charAt(i)-'0';
        }
        if(sum%9!=0 || (s.charAt(s.length()-1) % 2) !=0){
            System.out.print("NO");
        }
        else{
            System.out.print("YES");
        }
        scan.close();
   }
}