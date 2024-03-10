
Re: Re:

This sender aalnasih4846@gmail.com is from outside your organization. Block sender
This sender aalnasih4846@gmail.com is from outside your organization.
Ali Al-Nasih
​
Ethan Mullally
​
Sat 3/9/2024 8:08 PM
You don't often get email from aalnasih4846@gmail.com. Learn why this is important
Yo, you look about done with the gameplay and enemy types. 
I made the title screen. But it lacks the input mechanics I wanted, I'm sorry it's late.
I couldn't figure out the swing mechanics but I'll send you an updated version in the future after my schedule clears up.
Again sorry about this, what else do you want me to do on my end?

On Fri, Mar 8, 2024 at 3:58 PM Ethan Mullally <emullall9603@hwdsb.on.ca> wrote:
If I do I think my mom will kick my ass. Just kidding, but she wouldn't be pleased. 

From: Ali Al-Nasih <aalnasih4846@gmail.com>
Sent: Friday, March 8, 2024 3:57 PM
To: Ethan Mullally <emullall9603@hwdsb.on.ca>
Subject: Re:
 
You don't often get email from aalnasih4846@gmail.com. Learn why this is important
Also you have a Discord?

On Fri, Mar 8, 2024 at 3:56 PM Ali Al-Nasih <aalnasih4846@gmail.com> wrote:
Mate sorry for ghosting you. you'll see the code in the repository tomorrow.
All my classes tried to push unit tests and projects before march break and my mom signed me up for a "recital" which I'm practicing for.
I swear it was not on purpose.
Ali.

On Fri, Mar 8, 2024 at 11:49 AM Ethan Mullally <emullall9603@hwdsb.on.ca> wrote:
Attention
This email is from an HWDSB Student.
Hey Ali,

When are you going to add your code to the GitHub repository?


Reply


Forward
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
	else {Home();}
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
