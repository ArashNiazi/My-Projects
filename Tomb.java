import java.io.FileNotFoundException;
import java.util.Scanner;
import java.util.Random;
import java.io.File;
import java.io.FileWriter;
public class Tomb {
    static int[][] jadval = new int[29][31];
    static int x_player;
    static int y_player;
    static int joon = 3;
    static int random,random2,x,y;
    static int total_steps = 0;
    static String name;
    static String RESET = "\u001B[0m";
    static String White = "\u001B[47m";
    static String Red_Text = "\u001B[31m";
    static String Blue_Text = "\u001B[34m";
    static String Yellow_Text = "\u001B[33m";

    public static void move(){
        Scanner scanner = new Scanner(System.in);
        char harkat;
        System.out.println();
        harkat = scanner.next().charAt(0);
        try{
            // making switches for player moves
            switch(harkat){
                case 'a':
                    if(jadval[x_player][y_player-1] == -1){
                        joon--;
                        if(joon ==0){
                            jadval[x][y] = -5;
                        }
                    }
                    else if(jadval[x_player][y_player-1] == -7) {
                        joon--;
                        jadval[x_player][y_player] =-6;
                        x_player = 27;
                        y_player = 1;
                        jadval[x_player][y_player] = -3;
                        if (joon == 0) {
                            jadval[x][y] = -5;
                        }
                    }
                    else{
                        jadval[x_player][y_player] = -6;
                        jadval[x_player][y_player-1] = -3;
                        y_player -=1;
                        total_steps ++;
                    }
                     break;
                case'd':
                    if(jadval[x_player][y_player+1] == -1){
                        joon--;
                        if(joon ==0){
                            jadval[x][y] = -5;
                        }
                    }
                    else if(jadval[x_player][y_player+1] == -7) {
                        joon--;
                        jadval[x_player][y_player] =-6;
                        x_player = 27;
                        y_player = 1;
                        jadval[x_player][y_player] = -3;
                        if (joon == 0) {
                            jadval[x][y] = -5;
                        }
                    }
                    else{
                        jadval[x_player][y_player] = -6;
                        jadval[x_player][y_player+1] = -3;
                        y_player +=1;
                        total_steps ++;
                    }
                     break;
                case's':
                     if(jadval[x_player+1][y_player] == -1){
                        joon--;
                         if(joon ==0){
                             jadval[x][y] = -5;
                         }
                         else if(jadval[x_player+1][y_player] == -7) {
                             joon--;
                             jadval[x_player][y_player] =-6;
                             x_player = 27;
                             y_player = 1;
                             jadval[x_player][y_player] = -3;
                             if (joon == 0) {
                                 jadval[x][y] = -5;
                             }

                         }
                    }
                    else{
                        jadval[x_player][y_player] = -6;
                        jadval[x_player+1][y_player] = -3;
                        x_player +=1;
                         total_steps ++;
                    }
                     break;
                case'w':
                    if(jadval[x_player-1][y_player] == -1){
                        joon--;
                        if(joon ==0){
                            jadval[x][y] = -5;
                        }
                    }
                    else if(jadval[x_player-1][y_player] == -7) {
                        joon--;
                        jadval[x_player][y_player] =-6;
                        x_player = 27;
                        y_player = 1;
                        jadval[x_player][y_player] = -3;
                        if (joon == 0) {
                            jadval[x][y] = -5;
                        }
                    }
                    else{
                        jadval[x_player][y_player] = -6;
                        jadval[x_player-1][y_player] = -3;
                        x_player -=1;
                        total_steps ++;
                    }
                     break;
            }
        }
        catch(Exception e){
            System.out.println("error");
        }
    }
    public static void map(){
       for(int i=0;i<29;i++){
           for(int j=0;j<31;j++){
               // filling the map
               if(j==0 || i==0 || i==28 || j==30){
                   jadval[i][j] = -1;
               }
               if((i==2 && ((j>1 && j<7) || j>7 && j<14)) || ((i==3 && ((j>1 && j<7) || j>7 && j<14)))){
                   jadval[i][j] = -1;
               }
               if((i==2 && ((j>14 && j<19) || j>22 && j<29)) || ((i==3 && ((j>15 && j<19) || j>22 && j<29)))){
                   jadval[i][j] = -1;
               }
               if((i==4 && ((j>1 && j<19) || j>22 && j<29)) || ((i==5 && ((j>1 && j<19) || j>22 && j<29)))){
                   jadval[i][j] = -1;
               }
               if(((i==8) || (i==9) || (i==10) || (i==11) || (i==12)) && j>0 && j<11){
                   jadval[i][j] = -1;
               }
               if(((i==14) || (i==15) || (i==16) || (i==17) || (i==18)) && j>0 && j<11){
                   jadval[i][j] = -1;
               }
               if((i==28 || i==26) && ((j>4 && j<13) || (j>13 && j<18) || (j>18 && j<28))){
                   jadval[i][j] = -1;
               }
               if(i==25 && j<26){
                   jadval[i][j] = -1;
               }
               if(i == 7 && (j>13 && j<25)){
                   jadval[i][j] = -1;
               }
               if(i==9 && j>17){
                   jadval[i][j] = -1;
               }
               if(i==11 && j>12){
                   jadval[i][j] = -1;
               }
               if(i==8 && j>12 && j<15){
                   jadval[i][j] = -1;
               }
               if(i==6 && j>1 && j<11){
                   jadval[i][j] = -1;
               }
               if(i==12 && j>14){
                   jadval[i][j] = -1;
               }
               if(i==14 && ((j>14 && j<19) || (j>21 && j<28))){
                   jadval[i][j] = -1;
               }
               if(i==17 && j>21 && j<29){
                   jadval[i][j] = -1;
               }
               if(i==18 && j>21 && j<29){
                   jadval[i][j] = -1;
               }
               if((i==19 || i==20 || i==21) && j>21 && j<26){
                   jadval[i][j] = -1;
               }
               if(i==20 && j>5 && j<19){
                   jadval[i][j] = -1;
               }
               if(i==23 && j>12){
                   jadval[i][j] = -1;
               }
               if(i==22 && j<11){
                   jadval[i][j] = -1;
               }
               if(i==27 && j==1){
                   // starting point of the player
                   x_player = 27;
                   y_player = 1;
                   jadval[i][j] = -3;
               }
               if((i==18 && j==18) || (i==22 && j==19) || (i==8 && j==12)){
                   // creating traps
                   jadval[i][j] = -7;
               }
           }
       }
        Random rand = new Random() ;
        int o = 29;
        int p = 31;
        do{
            random = rand.nextInt(o);
            random2 = rand.nextInt(p);
        }while(jadval[random][random2] == -1 || jadval[random][random2] == -3);
        // creating a random pattern for the treasure
        jadval[random][random2] = -2;
        x = random;
        y = random2;
        }

    public static void main(String[] args){
        System.out.println("menu: ");
        //making the main menu
        System.out.println("1-play game");
        System.out.println("2-exit");
        System.out.println("3-LEADERBOARD");
        int n=0;
        while(n<=0 || n>3){
            try{
                Scanner scanner = new Scanner(System.in);
                n = scanner.nextInt();
            }
            catch(Exception e){
                System.out.println("do it again");
            }
        }

        if(n==3){
            // seeing the records
            try{
                // reading from file
                File records = new File("records.txt");
                Scanner myReader = new Scanner(records);
                while(myReader.hasNextLine()){
                    String data = myReader.nextLine();
                    System.out.println(data);
                }
                myReader.close();
            }
            catch(FileNotFoundException e){
                System.out.println("error");
            }
           }
         else if(n==2){
            System.out.println(" ");
        }
         else if(n==1){
            System.out.println("Please enter your name:");
            Scanner input = new Scanner(System.in);
            name = input.next();
          game();
        }
    }
    private static void game() {
        // gameplay
        map();
        long start = System.currentTimeMillis();
        show(jadval);
        while(jadval[x][y] == -2){
            move();
            System.out.print("\033[H\033[2J");
            System.out.flush();
            limit(jadval);
        }
        long end = System.currentTimeMillis();
        float sec = (end - start) / 1000f;
        int time = (int) sec;
        if(joon ==0){
            show(jadval);
            System.out.println();
            System.out.print("total steps : ");
            System.out.println(total_steps);
            System.out.println(time + " seconds");
            System.out.println();
            System.out.println("You lost");
        }
        else {
            try{
                // writing to file
                FileWriter myWriter = new FileWriter("records.txt",true);
                myWriter.write(name + " : " + time + " seconds ");
                myWriter.write("\n");
                myWriter.close();
            }
            catch(Exception e){
                System.out.println("error");
            }
            show(jadval);
            System.out.println();
            System.out.print("total steps : ");
            System.out.println(total_steps);
            System.out.println(time + " seconds");
            System.out.println();
            System.out.println("You won!");
        }
    }
    private static void show(int[][] map) {
        // the initial map
     for(int i=0;i<29;i++) {
         System.out.print("\n");
         for (int j = 0; j < 31; j++) {
             if (map[i][j] == -1) {
                 System.out.print(Blue_Text + "##" + RESET);
             }
             else if(map[i][j] == -2 || map[i][j] == -5){
                 System.out.print(Yellow_Text + "$$" + RESET);
             }
             else if(map[i][j] == -3){
                 System.out.print("@@");
             }
             else if(map[i][j] == -4){
                 System.out.print("  ");
             }
             else if(map[i][j] == -6){
                 System.out.print(White + "  " + RESET);
             }
             else if(map[i][j] == -7){
                 System.out.print("!!");
             }
             else{
                 System.out.print("  ");
             }
         }
     }
        System.out.println();
        System.out.print("joon = ");
        System.out.print(joon);
         }
    private static void limit(int[][] map) {
        // the limited map after the first move
        for(int i=0;i<29;i++) {
            System.out.print("\n");
            for (int j = 0; j < 31; j++) {
                if(x_player-3>i || i>x_player+3 || j<y_player-3 || j>y_player+3){
                    System.out.print(Red_Text + "??" + RESET);
                }
                else{
                    if (map[i][j] == -1) {
                        System.out.print(Blue_Text + "##" + RESET);
                    }
                    else if(map[i][j] == -2 || map[i][j] == -5){
                        System.out.print(Yellow_Text + "$$" + RESET);
                    }
                    else if(map[i][j] == -3){
                        System.out.print("@@");
                    }
                    else if(map[i][j] == -4){
                        System.out.print("  ");
                    }
                    else if(map[i][j] == -6){
                        System.out.print(White + "  " + RESET);
                    }
                    else if(map[i][j] == -7){
                        // traps
                        System.out.print("!!");
                    }
                    else{
                        System.out.print("  ");
                    }
                }
            }
        }
        System.out.println();
        System.out.print("joon = ");
        System.out.print(joon);
    }
}