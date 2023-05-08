// Ahmet DURGUT 0221 020 1509 Normal Öðretim

 
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int es = 0;
int c;

//if yazýmýný kontrol eder 

int if_control(char dizi[]) {
  if (dizi[es] == 'i' && dizi[es + 1] == 'f') {
    es += 2;
    c = 1;
  } else {
  	c = 0;
    printf("\n kod hatalidir.");
  }

}

//"(" yazýmýný kontrol eder 

int parantez_ac(char dizi[]) {
  if (dizi[es] == '(') {
    es++;
    c = 1;
  } else {
  	c = 0;
    printf("\n kod hatalidir.");
  }

// deðiþkenlerin yazýmýný kontrol eder

}
int degisken(char dizi[]) {
  if (dizi[es] == 'a' || dizi[es] == 'b' || dizi[es] == 'c' || dizi[es] == 'd' || dizi[es] == 'e' || dizi[es] == 'f') {
    es++;
    if (dizi[es] == 'a' || dizi[es] == 'b' || dizi[es] == 'c' || dizi[es] == 'd' || dizi[es] == 'e' || dizi[es] == 'f' || dizi[es] == '0' || dizi[es] == '1' || dizi[es] == '2' || dizi[es] == '3' || dizi[es] == '4' || dizi[es] == '5' || dizi[es] == '6' || dizi[es] == '7' || dizi[es] == '8' || dizi[es] == '9') {
      printf("\n kod hatalidir.");
      c = 0;
    } else {
      c = 1;
    }
  } else if (dizi[es] == '0' || dizi[es] == '1' || dizi[es] == '2' || dizi[es] == '3' || dizi[es] == '4' || dizi[es] == '5' || dizi[es] == '6' || dizi[es] == '7' || dizi[es] == '8' || dizi[es] == '9') {
    es++;
    dongu:
      if (dizi[es] == '0' || dizi[es] == '1' || dizi[es] == '2' || dizi[es] == '3' || dizi[es] == '4' || dizi[es] == '5' || dizi[es] == '6' || dizi[es] == '7' || dizi[es] == '8' || dizi[es] == '9') {
        es++;
        c = 1;
        goto dongu;
      } else if (dizi[es] == 'a' || dizi[es] == 'b' || dizi[es] == 'c' || dizi[es] == 'd' || dizi[es] == 'e' || dizi[es] == 'f') {
      	es++;
      printf("\n kod hatalidir.");
      c = 0;
      
    }
  }
}

// .txt dosyadaki þart kýsýmlarýnýn kontrolünü yapar 

int sart(char dizi[]) {
  if (dizi[es] == '=' || dizi[es] == '<' || dizi[es] == '>') {
    es++;
    if (dizi[es] == '=') {
      es++;
      c = 1;
    }
  } else {
  	c = 0;
    printf("\n kod hatalidir.");
  }
}

// ')' ifadesini kontrol eder

int parantez_kapa(char dizi[]) {
  if (dizi[es] == ')') {
    es++;
    c = 1;
  } else {
  	c = 0;
    printf("\n kod hatalidir.");
  }
}

// '{' iafdesini kontrol eder

int suslu_parac(char dizi[]) {
  if (dizi[es] == '{') {
    es++;
    c = 1;
  } else {
  	c = 0;
    printf("\n kod hatalidir.");
  }
}

// '=' ifadesini kontrol eder 

int esittir_control(char dizi[]) {
  if (dizi[es] == '=') {
    es++;
    c = 1;
  } else {
  	c = 0;
    printf("\n kod hatalidir.");
  }
}

// .txt dosyasýnýn dört iþlem parametrelerini kontrol eder

int dort_islem(char dizi[]) {
  if (dizi[es] == '+' || dizi[es] == '-' || dizi[es] == '*' || dizi[es] == '/') {
    es++;
    c = 1;
  } else {
  	c = 0;
    printf("\n kod hatalidir.");
  }
}

// '}' iafdesini kontrol eder

int sus_kapa(char dizi[]) {
  if (dizi[es] == '}') {
    es++;
    c = 1;
  } else {
  	c = 0;
    printf("\n kod hatalidir.");
  }
}

// .txt dosyasýnýn else if kýsmýný kontrol eder 

int else_if_cont(char dizi[]) {
  if (dizi[es] == 'e' && dizi[es + 1] == 'l' && dizi[es + 2] == 's' && dizi[es + 3] == 'e' && dizi[es + 4] == 'i' && dizi[es + 5] == 'f') {
    es += 6;
    c = 1;
  } else {
  	c = 0;
    printf("\n kod hatalidir.");
  }
}

// .txt dosyasýnýn else kýsmýný kontrol eder 

int else_cont(char dizi[]) {
  if (dizi[es] == 'e' && dizi[es + 1] == 'l' && dizi[es + 2] == 's' && dizi[es + 3] == 'e') {
    es += 4;
    c = 1;
  } else {
  	c = 0;
    printf("\n kod hatalidir.");
  }
}

int operator(char karakter1, char karakter2) {
  if (
    (karakter1 == '+' && karakter2 == '+') || (karakter1 == '-' && karakter2 == '-') || (karakter1 == '=' && karakter2 == '=') || (karakter1 == '+' && karakter2 == '=') || (karakter1 == '-' && karakter2 == '=') || (karakter1 == '/' && karakter2 == '=') || (karakter1 == '*' && karakter2 == '=') || (karakter1 == '<' && karakter2 == '=') || (karakter1 == '>' && karakter2 == '=') || (karakter1 == '|' && karakter2 == '|') || (karakter1 == '&' && karakter2 == '&') || (karakter1 == '!' && karakter2 == '=') || (karakter1 == '%' && karakter2 == '=')
  ) {
    return (1);
  } else {
    return (0);
  }
}

// tokenizer

int islemler(char karakter) {
  char dizi[26] = {
    '+','-','*','/',',',';','>','<','[',']','{','}',')','(','=','|','&',34,39,'!',92,':','?','^','%','.'};
  int i = 0, deger = 0;
  bool exit = true;
  while (i < 26 && exit == true) {
    if (dizi[i] == karakter) {
      deger = 1;
      exit = false;
    } else {
      deger = 0;
    }
    i++;
  }

  return deger;
}


int main(int argc, char * argv[]) {
  FILE * p;
  char ds[100] = "";
  printf("Dosya ismini giriniz: ");
  scanf("%s", & ds);
  p = fopen(ds, "r");
  char kelime[5000], dizi[5000];

  char karakter;
  int i = 0;

  if (p != NULL) {
    while (karakter != EOF) {
      karakter = fgetc(p);
      kelime[i] = karakter;
      i += 1;
    }
  } else {
    printf("\n Dosya bulunamadi. ");
  }

  int u, j, bosluk = 0;

  for (u = 0; u < i - 1; u++) {
    for (j = 0; j < i - 1; j++) {
      if (kelime[j] == 32 || kelime[j] == 10 ) {
        bosluk++;

        while (j < i - 1) {
          kelime[j] = kelime[j + 1];
          j++;
        }
      }
    }
  }

  int length = 0;
  for (j = 0; j < i - 1 - bosluk; j++) {
    if (kelime[j] != 32) {
      length++;
      dizi[j] = kelime[j];
    }
  }

  printf("{ ");
  bool ozel;

  int k = 0;
  for (k = 0; k < length; k++) {

    if (k != length) {
      ozel = operator(dizi[k], dizi[k + 1]);
    }

    if (islemler(dizi[k]) == 1) {
      if (ozel == 1) {
        if (islemler(dizi[k + 2]) == 1) {
          printf(",%c%c", dizi[k], dizi[k + 1]);
          k++;
        } else {
          if (k == length - 1) {
            printf(",%c%c", dizi[k], dizi[k + 1]);
            k++;
          } else {
            printf(",%c%c,", dizi[k], dizi[k + 1]);
            k++;
          }
        }
      } else if (islemler(dizi[k + 1] == 1)) {
        printf(",%c", dizi[k]);
      } else {
        if (k == length - 1) {
          printf(",%c", dizi[k]);
        } else {
          printf(",%c,", dizi[k]);
        }
      }
    } else {
      printf("%c", dizi[k]);
    }
  }
  printf(" }");
  
  
  //if kontorlü
  if_control(dizi);
  switch(c){
  	case 0:
  		goto controll;
  		break;
  }
  parantez_ac(dizi);
  switch(c){
  	case 0:
  		goto controll;
  		break;
  }
  degisken(dizi);
  switch(c){
  	case 0:
  		goto controll;
  		break;
  }
  sart(dizi);
  switch(c){
  	case 0:
  		goto controll;
  		break;
  }
  degisken(dizi);
  switch(c){
  	case 0:
  		goto controll;
  		break;
  }
  parantez_kapa(dizi);
  switch(c){
  	case 0:
  		goto controll;
  		break;
  }
  suslu_parac(dizi);
  switch(c){
  	case 0:
  		goto controll;
  		break;
  }
  degisken(dizi);
  switch(c){
  	case 0:
  		goto controll;
  		break;
  }
  esittir_control(dizi);
  switch(c){
  	case 0:
  		goto controll;
  		break;
  }
  degisken(dizi);
  switch(c){
  	case 0:
  		goto controll;
  		break;
  }
  dort_islem(dizi);
  switch(c){
  	case 0:
  		goto controll;
  		break;
  }
  degisken(dizi);
  switch(c){
  	case 0:
  		goto controll;
  		break;
  }
  sus_kapa(dizi);
  switch(c){
  	case 0:
  		goto controll;
  		break;
  }
  
  // else if kontrolü
  
  while(dizi[es] == 'e' && dizi[es+1] == 'l' && dizi[es+2] == 's' && dizi[es+3] == 'e' && dizi[es+4] == 'i' && dizi[es+5] == 'f'){
	else_if_cont(dizi);
	switch(c){
  	case 0:
  		goto controll;
  		break;
  }
	parantez_ac(dizi);
	switch(c){
  	case 0:
  		goto controll;
  		break;
  }
  	degisken(dizi);
  	switch(c){
  	case 0:
  		goto controll;
  		break;
  }
  	sart(dizi);
  	switch(c){
  	case 0:
  		goto controll;
  		break;
  }
    degisken(dizi);
    switch(c){
  	case 0:
  		goto controll;
  		break;
  }
  	parantez_kapa(dizi);
  	switch(c){
  	case 0:
  		goto controll;
  		break;
  }
  	suslu_parac(dizi);
  	switch(c){
  	case 0:
  		goto controll;
  		break;
  }
  	degisken(dizi);
  	switch(c){
  	case 0:
  		goto controll;
  		break;
  }
  	esittir_control(dizi);
  	switch(c){
  	case 0:
  		goto controll;
  		break;
  }
  	degisken(dizi);
  	switch(c){
  	case 0:
  		goto controll;
  		break;
  }
  	dort_islem(dizi);
  	switch(c){
  	case 0:
  		goto controll;
  		break;
  }
  	degisken(dizi);
  	switch(c){
  	case 0:
  		goto controll;
  		break;
  }
  	sus_kapa(dizi);
  	switch(c){
  	case 0:
  		goto controll;
  		break;
  }
    }

	// else kontrolü
	
if(dizi[es] == 'e' && dizi[es+1] == 'l' && dizi[es+2] == 's' && dizi[es+3] == 'e'){
	else_cont(dizi);
	switch(c){
  	case 0:
  		goto controll;
  		break;
  }
}
	suslu_parac(dizi);
	switch(c){
  	case 0:
  		goto controll;
  		break;
  }
	degisken(dizi);
	switch(c){
  	case 0:
  		goto controll;
  		break;
  }
	esittir_control(dizi);
	switch(c){
  	case 0:
  		goto controll;
  		break;
  }
	degisken(dizi);
	switch(c){
  	case 0:
  		goto controll;
  		break;
  }
	dort_islem(dizi);
	switch(c){
  	case 0:
  		goto controll;
  		break;
  }
	degisken(dizi);
	switch(c){
  	case 0:
  		goto controll;
  		break;
  }
	sus_kapa(dizi);
	switch(c){
  	case 0:
  		goto controll;
  		break;
  }
	
  	controll:
	if (c == 1) {
      printf("\n Bu dosya dogru bir dosyadir.");
    }else{
    	printf("\n Bu dosya hatali bir dosyadir.");
	}
  fclose(p);

  return 0;
}
