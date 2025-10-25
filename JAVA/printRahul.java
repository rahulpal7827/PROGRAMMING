import java.util.Scanner;
public class printRahul {
    public static void main(String[] args) {
        try(Scanner sc = new Scanner(System.in)){
            System.out.println("Enter an string:- ");
            
            String str = sc.nextLine();
            System.out.println(str);
        }
    }
}
