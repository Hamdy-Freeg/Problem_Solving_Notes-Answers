import java.util.Scanner;


public class Punctuation {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        StringBuilder pn = new StringBuilder();
        String tx = sc.nextLine();

        for (int i=0; i < tx.length(); i++) {
            if(tx.charAt(i) == ' ') {
                if(tx.charAt(i+1) ==' ') {

                    pn.append("");
                }
                
            } else {
                pn.append(tx.charAt(i));
            }
        }

        System.out.println(pn);
        
        
    }
}