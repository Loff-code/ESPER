#define btn1 digitalRead(23)
#define btn2 digitalRead(22)
#define btn3 digitalRead(21)

int year;
int month;
int day;
int hour;
int minute;
int second;

bool checkState;
bool actionState;

int lightLVL;
enum State {
  IDLE,
  ACTION
};

State stateReg= IDLE;

#define GPIO_PIN0 0
#define GPIO_PIN1 1
#define GPIO_PIN2 2
#define GPIO_PIN3 3
#define GPIO_PIN4 4
#define GPIO_PIN5 5
#define GPIO_PIN6 6
#define GPIO_PIN7 7
#define GPIO_PIN8 8
#define GPIO_PIN9 9
#define GPIO_PIN10 10
#define GPIO_PIN11 11
#define GPIO_PIN12 12
#define GPIO_PIN13 13
#define GPIO_PIN14 14
#define GPIO_PIN15 15
#define GPIO_PIN16 16
#define GPIO_PIN17 17
#define GPIO_PIN18 18
#define GPIO_PIN19 19
#define GPIO_PIN20 20
#define GPIO_PIN21 21
#define GPIO_PIN22 22
#define GPIO_PIN23 23
#define GPIO_PIN24 24
#define GPIO_PIN25 25
#define GPIO_PIN26 26
#define GPIO_PIN27 27
#define GPIO_PIN28 28
#define GPIO_PIN29 29
#define GPIO_PIN30 30
#define GPIO_PIN31 31
#define GPIO_PIN32 32
#define GPIO_PIN33 33
#define GPIO_PIN34 34
#define GPIO_PIN35 35
#define GPIO_PIN36 36
#define GPIO_PIN37 37
#define GPIO_PIN38 38
#define GPIO_PIN39 39