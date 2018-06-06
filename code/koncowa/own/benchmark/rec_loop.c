int main() {
	struct s { struct { int c; } b; } a;
	for (a.b.c = 0; a.b.c < 1000000000; a.b.c++) { }
}
