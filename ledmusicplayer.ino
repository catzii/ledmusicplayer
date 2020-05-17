
//Desafio Musica Catarina Costa
//Definição de todas as notas sendo que Do-C, Re-D, Mi-E, Fa-F Sol-G, La-A , si-B

  

#define B0  31
#define C1  33
#define DB1 35
#define D1  37
#define EB1 39
#define E1  41
#define F1  44
#define GB1 46
#define G1  49
#define AB1 52
#define A1  55
#define BB1 58
#define B1  62
#define C2  65
#define DB2 69
#define D2  73
#define EB2 78
#define E2  82
#define F2  87
#define GB2 93
#define G2  98
#define AB2 104
#define A2  110
#define BB2 117
#define B2  123
#define C3  131
#define DB3 139
#define D3  147
#define EB3 156
#define E3  165
#define F3  175
#define GB3 185
#define G3  196
#define AB3 208
#define A3  220
#define BB3 233
#define B3  247
#define C4  262
#define DB4 277
#define D4  294
#define EB4 311
#define E4  330
#define F4  349
#define GB4 370
#define G4  392
#define AB4 415
#define A4  440
#define BB4 466
#define B4  494
#define C5  523
#define DB5 554
#define D5  587
#define EB5 622
#define E5  659
#define F5  698
#define GB5 740
#define G5  784
#define AB5 831
#define A5  880
#define BB5 932
#define B5  988
#define C6  1047
#define DB6 1109
#define D6  1175
#define EB6 1245
#define E6  1319
#define F6  1397
#define GB6 1480
#define G6  1568
#define AB6 1661
#define A6  1760
#define BB6 1865
#define B6  1976
#define C7  2093
#define DB7 2217
#define D7  2349
#define EB7 2489
#define E7  2637
#define F7  2794
#define GB7 2960
#define G7  3136
#define AB7 3322
#define A7  3520
#define BB7 3729
#define B7  3951
#define C8  4186
#define DB8 4435
#define D8  4699
#define EB8 4978


#define qtdgot 332 //quantidade de notas GOT
#define qtdm  78 //quantidade de notas GOT
#define BPM 171 //Batimentos por minuto GOT
#define denominador_compasso 8
#define BTN1 2 //botão 1 pino 2
#define BTN2 3 //botão2 pino 3
#define buzz 13 //buzz pino 13
#define LED1 4 //led1 pino 4
#define LED2 5 //led 2 pino 5
float duraUniTempo, cte;
int duracaoNota, i ; 
//musica got
int GOT [] ={  G4, C4, EB4, F4, G4, C4, EB4, F4, G4, C4, EB4, F4, G4, C4, E4, F4,  
                G4, C4, E4, F4, G4, C4, EB4, F4, G4, C4, EB4, F4, G4, C4, EB4, F4,        
                G4, G4, C4, C4, EB4, F4, G4, C4, EB4, F4,                                 
                D4, G3, BB3, C4, D4, G3, BB3, C4, D4, G3, BB3, C4, D4, G3, BB3, C4,          
                F4, F4, BB3, BB3, EB4, D4, F4, BB3, EB4, D4,                              
                C4, G3, AB3, BB3, C4, G3, AB3, BB3, C4, G3, AB3, BB3, C4, G3, AB3, BB3,   
                G4, G4, C4, C4, EB4, F4, G4, C4, EB4, F4,                                 
                D4, G3, BB3, C4, D4, G3, BB3, C4, D4, G3, BB3, C4, D4, G3, BB3, C4,           
                F4, F4, BB3, BB3, EB4, D4, F4, BB3, EB4, D4,                              
                C4, G3, AB3, BB3, C4, G3, AB3, BB3, C4, G4, AB4, BB4, C5, G4, AB4, BB4,   
                G5, G5, C5, C5, EB5, F5, G5, C5, EB5, F5,                                   
                D5, G4, BB4, C5, D5, G4, BB4, C5, D5, G4, BB4, C5, D5, G4, BB4, C5,       
                F5, F5, BB4, BB4, D5, D5, EB5, EB5, D5, D5, BB4, BB4,                         
                C5, G4, AB4, BB4, C5, G4, AB4, BB4, C5, G4, AB4, BB4, C5, G4, AB4, BB4,   
                C5, EB4, AB4, BB4, C5, EB4, BB4, AB4, BB4, EB4, G4, AB4, BB4, EB4, AB4, G4,  
                C4, C4, F4, G4, AB4, C4, G4, F4, G4, C4, EB4, F4, G4, C4, EB4, F4,            
                AB3, C4, F4, G4, AB4, C4, G4, F4, EB4, F3, AB3, C4, F4, G3, BB3, D4,         
                G4, C4, EB4, F4, G4, C4, EB4, F4, G4, C4, EB4, F4, G4, C4, EB4, F4,          
                C5, EB4, AB4, BB4, C5, EB4, BB4, AB4, BB4, EB4, G4, AB4, BB4, EB4, AB4, G4,  
                C4, C4, F4, G4, AB4, C4, G4, F4, G4, C4, EB4, F4, G4, C4, EB4, F4,           
                AB3, C4, F4, G4, AB4, C4, G4, F4, EB4, F3, AB3, C4, D4, G3, BB3, D4,          
                C4, G3, AB3, BB3, C4, G3, AB3, BB3, C4, G4, AB4, BB4, C5, G4, AB4, BB4,       
                C5, G5, AB5, BB5, C6, G5, AB5, BB5, C6, G5, AB5, BB5, C6, C6                  
                      
             };
//musica mario
int mario [] ={E7,E7,0,E7,0,C7,E7,0,G7,0,0,0,G6,0,0,
C7,0,0,G6,0,0,E6,0,0,A6,0,B6,0,BB6,A6,0,G6,E7,G7,A7,0,
               F7,G7,0,E7,0,C7,D7,B6,0,0,C7,0,0,G6,0,0,E6,0,0,A6,0,
               B6,0,BB6,A6,0,G6,E7,G7,A7,0,F7,G7,0,E7,0,C7,D7,B6,0,0

};
//mario tempos
int tempom[]={
12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,
12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,
9,9,9,12,12,12,12,12,12,12,12,12,12,12,12,
12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,
9,9,9,12,12,12,12,12,12,12,12,12,12,12,12

};
//GOT tempos
int temposg[]={ 8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16,
                8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16,
                4, 8, 4, 8, 16, 16, 4, 4, 16, 16,
                8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16,
                4, 8, 4, 8, 16, 16, 4, 4, 16, 16,
                8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16,
                4, 8, 4, 8, 16, 16, 4, 4, 16, 16,
                8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16,
                4, 8, 4, 8, 16, 16, 4, 4, 16, 16,
                8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16,
                4, 8, 4, 8, 16, 16, 4, 4, 16, 16,
                8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16,
                4, 8, 4, 8, 8, 16, 8, 16, 8, 16, 8, 16,
                8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16,
                8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16,
                8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16,
                8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16,
                8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16,
                8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16,
                8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16,
                8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16,
                8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16,
                8, 8, 16, 16, 8, 8, 16, 16, 8, 8, 16, 16, 4, 8
              };
int btn1 = 0;
int btn2= 0;

void setup(){
  Serial.begin(9600);
  duraUniTempo=60/(float)BPM;//calculos para a musica de GOT
  cte=duraUniTempo*denominador_compasso;//Calculos para a musica de got duração
  pinMode(buzz , OUTPUT); // Buzzer
  pinMode(BTN1, INPUT);//butao 1
  pinMode(BTN2, INPUT);//butao 2
  pinMode(LED1, OUTPUT);//led amarela
   pinMode(LED2, OUTPUT);//led azul


}

void loop (){
	btn1 = digitalRead(BTN1);
	btn2 = digitalRead(BTN2);
  if (btn1 == LOW) {
    sing(1);
  } else if (btn2 == LOW) {
    sing(2);
  } 
}
 
int song = 0;

void sing(int s) {
  
  song = s;
  if (song == 1) {
    digitalWrite(LED1,HIGH);
    Serial.println("'Mario Theme'");
    
    for (int i = 0; i < qtdm; i++) {
    duracaoNota = 1000 / tempom[i];//1 segundo a dividir pelo tempo do array 
 
    tone(buzz, mario[i], duracaoNota);

    int pausaEntreNotas = duracaoNota * 1.30;
    delay(pausaEntreNotas);
     
      //pisca luz amarela
      digitalWrite(LED1, !digitalRead(LED1));
     
      // para de tocar a musica
     tone(buzz, 0, duracaoNota);
    }
     digitalWrite(LED1,LOW);
      
    }
   else if (song == 2) {
     digitalWrite(LED2,HIGH);
     Serial.println( "'Game of Thrones theme'");
     for (i=0; i<qtdgot; i++){
     duracaoNota =cte/temposg[i]*1000;
       
     tone(buzz, GOT[i], duracaoNota);
     delay(duracaoNota);
       
     //pisca luz azul
     digitalWrite(LED2, !digitalRead(LED2));
   // para de tocar a musica
      tone(buzz, 0, duracaoNota);
    }
    digitalWrite(LED2,LOW);
      
      }
    }

 
