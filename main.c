#include <kipr/wombat.h>
#define right 0
#define left 1
#define base 0
#define redring 1
#define temp 2
#define backtophat 0
#define fronttophat 1
#define frontbutton 0
#define backbutton 1
#define claw 644

//DANGER DANGER. DEBANSHU MOVED THE WHEELS CLOSER TO THE ROBOT, CHECK AGAIN BEFORE APPLYING TO OTHER ROBOT

void reset_base (){
	int curPos = get_servo_position(base); 
    int curPos2 = get_servo_position(redring);
    while (curPos >=144) {
        curPos = get_servo_position(base);
        set_servo_position(base, curPos -50);
        msleep (100);
    }
}

void shimmy(){
    mav(right, 600);
    mav(left, 1000);
    msleep(2000);
    
    /*
	while(digital(backbutton) != 1 && digital(frontbutton) != 1){
        while(digital(backbutton) == 0){
           	mav(right, 1000);
			mav(left, -50);
        }
        while(digital(frontbutton) == 0){
            mav(left, 1000);
			mav(right, -50);
        }
    }
    */
    
}

//add other distance sensors and stuff later
int main()
{
    printf("Test\n");
    motor(1, 100);
    motor(0, -90);
    msleep(250);
    while (digital(0) != 1) {
        motor(1, 100);
        motor(0, 100);
        
    }
    printf("Backing up\n");
	motor(right, -55);
    motor(left, -90);
	msleep(1500);
   /* motor (left, 70);
    motor (right, 40); 
    msleep (500);*/
    printf("wall wiggle\n");
    while(digital(1) != 1){
     	motor(right, 10);
        motor(left, -70);
    }
    
 
    printf("okay so\n");
    
    int x = 80;
    int y = 80;
/*
    while (digital (1) !=1 || count > 100){
        motor (left, -50);
        motor (right, 45);
        count++;
    }
    */
    printf("then this happens \n");
    
    while (analog(0) < 3500) {
    	motor (right, -80);
        motor (left, -60);
    }
    motor (right, -20);
    motor (left, 30);
    msleep (1000);
  
    while (analog(0) < 3500) { 
        if (digital (1) != 1) {
    	motor (right, 70);
        motor (left, 50);
    }
     if (digital (0) != 1) {
    	motor (left, 70);
         motor (right, 50);
    }
    }
    /*
    while (digital(0) != 1) {
        //if (digital(0) != 1) {
    	motor(right, x);
        motor(left, -y-15); //keep eye on these values
        
    }
    */
   /* printf("its done\n");
    while (digital(0) != 1) {
       // if (digital(1) != 1) {
    motor(right, 60);
    motor(left, 80);
        
        
    }
    printf("done\n");
  /*  while (digital(1) != 1) {
       // if (digital(1) != 1) {
    motor(right, y+2);
    motor(left, x-1);
        
        
    }
    printf("help\n");
    while (digital(0) != 1) {
        //if (digital(0) != 1) {
        if(x >0) x = -28;
		if(y < 0) y =18;
    	motor(right, x+=1);
        motor(left, y-=1);
        
    } */
    
    
    
    
    //msleep(10000);
    /*
    enable_servos();
    reset_base(); //reset servo(base) position
    set_servo_position (redring, 200);
    msleep(1000);
     set_servo_position(base, 350);
 	
    while (analog(backtophat) < 3500){
    mav (right, -1000); //back up 
    mav (left, -1000);
    }

    ao();
    
    int curPos = get_servo_position(base); 
    int curPos2 = get_servo_position(redring);
    while (curPos <=700) { //raise the stack slowly to move
        curPos = get_servo_position(base);
        curPos2 = get_servo_position(redring);
        set_servo_position(redring, curPos2 +90);
        set_servo_position(base, curPos +50);
        msleep (100);
    }
    //find better way to do this 
    mav(right, -500);
	mav(left, -300);
    msleep(900);
    mav(right, 1000);
	mav(left, -400);
    msleep(1000);
    mav(right, 1000);
    mav(left, 700);
    msleep(3000);
    ao();
	
    /*
    mav (right, 1000);
    mav (left, 1000);
    msleep (500);
    mav (left, 1000);
    mav (right, 600);
    msleep (1000);
    mav (left, 600);
    mav (right, 1000);
    msleep (2000);
    */
    /*
    int counter = 0;
    while (counter <= 2){
    mav (left, 1000);
    mav (right, 600);
    msleep (2000);
    mav (left, 600);
    mav (right, 1000);
    msleep (2000);
    counter++;
    }
    ao();
    int counter2 = -1;
    */
    
    ao(); 
    
    return 0;
}
