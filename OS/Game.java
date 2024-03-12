import java.util.*;
import java.io.*;
import java.lang.Thread;

public class Main
{
    public static Scanner sc = new Scanner(System.in);
    
	public static void main(String[] args) {
	    Home();
	}
	
    public static void SlowText(String line) {
	    try {
	        for (int count = 0;count < line.length(); count++){
                System.out.print(line.substring(count,count+1));
                Thread.sleep(50);
	        }
            }
        catch (Exception e) {
           
            System.out.println(e);
        }
    }

	public static void clearScreen() {  
	System.out.print("\033[H\033[2J");  
    System.out.flush();  
   }
   
	public static void Home() {
	        clearScreen();
	System.out.println("Welcome to Space Invaders");
	
	System.out.println("to Start\t press 1");
	System.out.println("For Settings\t press 2");
	System.out.println("For Credits\t press 3");
	System.out.println("For the Rules\t press 4");
	int input = sc.nextInt();
	clearScreen();
	switch (input){
	   
	    case 1: Game();
	    break;
	    case 2: Settings();
	    break;
	    case 3: Credits();
	    break;
	    case 4: Rules();
	    break;
	}
	}
	public static void Rules() {
	System.out.println("Don't die.");
    clearScreen();
	System.out.println("To Leave\t press 2");
	int input = sc.nextInt();
	if(input == 2){ 
	    Home();
	}
}
    public static void Credits() {
        String line = "";
        line = "By Ali Al-Nasih, & Ethan Mullally";
        SlowText(line);
        System.out.print("\n");
        System.out.println("Return Home (Any number except 0)");
        int input = sc.nextInt();
        if (input < 0 || input > 0){Home();}
    }
    public static void Settings() {
        String line = "Nothing To Change When its perfect.";
        SlowText(line);
        System.out.println("\nReturn Home (Any number except 0)");
        int input = sc.nextInt();
        if (input < 0 || input > 0){Home();}
    }
    
    public static void Game() {
        String line = "Nothing here yet.";
        SlowText(line);
        System.out.println("\nReturn Home (Any number except 0)");
        int input = sc.nextInt();
    }
}
