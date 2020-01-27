

import java.util.Scanner;

public class MyClass {
    public static void main(String args[]) {
    
    Scanner scanner = new Scanner(System.in);
    
    System.out.print("Introduce el tamaño del rectangulo: ");
    
    String entrada = scanner.nextLine();
    
    System.out.print("Generando cuadrado...\n");
    
    int M = Integer.parseInt(entrada);
    
    for(int i = 1; i <= M; i ++){
        for(int j = 1; j <= M; j++){
            if(i == 1 && j != M){
                System.out.print(" 1");
            }

            else if(i == 1 && j == M){
                System.out.print(" 1\n");
            } 
            else if(j== 1 ){
                System.out.print(" 1");
            }
            
            else if(j == M){
                System.out.print(" 1\n");
            }
            else if(i == M){
                System.out.print(" 1");
            }else{
                System.out.print("  ");
            }
        }
    }
        
    }
}