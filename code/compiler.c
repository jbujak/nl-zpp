#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define BUFFER_SIZE 10000

void wyrazenie();
void skladnik();
void czynnik();

int liczba();
bool probuj_znak(char c);
void znak(char c);

void wypisz(char *c);
void wypisz_liczbe(int n);
char obecny();
void nastepny();

bool wejscie();
void wyjscie();
void error();

int main() {
	while(wejscie()) {
		wyrazenie();
		wyjscie();
	}
	printf("\n");
	return 0;
}


/* Parser + generator */

void wyrazenie() {
	skladnik();
	if (probuj_znak('+')) {
		wyrazenie();
		wypisz("+ ");
	}
}

void skladnik() {
	czynnik();
	if (probuj_znak('*')) {
		skladnik();
		wypisz("* ");
	}
}

void czynnik() {
	if (probuj_znak('(')) {
		wyrazenie();
		znak(')');
	} else {
		int n = liczba();
		wypisz_liczbe(n);
	}
}


/* Lekser */

int liczba() {
	int wynik = 0;
	if (!isdigit(obecny())) error();
	while (isdigit(obecny())) {
		wynik = wynik*10 + (obecny() - '0');
		nastepny();
	}
	return wynik;
}

void znak(char c) {
	if (!probuj_znak(c)) error();
}

bool probuj_znak(char c) {
	if (obecny() != c) return false;
	nastepny();
	return true;
}

/* Biblioteka */

char out[BUFFER_SIZE];
int out_pos = 0;

char in[BUFFER_SIZE];
int in_pos = 0;

void error() {
	printf("Błedne wyrazenie\n");
	exit(1);
}

void wypisz(char *c) {
	while (*c) {
		if (out_pos == BUFFER_SIZE) error();
		out[out_pos++] = *c;
		c++;
	}
}

void wypisz_liczbe(int n) {
	char buf[BUFFER_SIZE];
	sprintf(buf, "%d ", n);
	strncpy(out+out_pos, buf, BUFFER_SIZE-out_pos);
	out_pos = strnlen(out, BUFFER_SIZE);
}

bool wejscie() {
	in_pos = 0;
	out_pos = 0;
	printf("> ");
	return fgets(in, BUFFER_SIZE, stdin);
}

void wyjscie() {
	printf("%s\n", out);
}

char obecny() {
	return in[in_pos];
}

void nastepny() {
	in_pos++;
}
