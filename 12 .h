#include "Matrix.h"

Matrix(){
}//constructor
~Matrix() {
}//destructor
	//metodos que modifican o retornan los atributos
void Matrix::self_fil(int_fil) {
	fil = _fil;
}
int  Matrix::get_fil() {
		return fil;
	}
void  Matrix::set_col(int_col) {
	col=_col;
	}
int  Matrix::get_col() {
	return col;
	}

void  Matrix::mostrarmat(int MAT[MAX][MAX], int m, int n) {

	}
void  Matrix::cargarmat(int MAT[MAX][MAX], int m, int n) {
	}
float Matrix::promedio(int MAT[MAX][MAX], int m, int n) {
	}
int  Matrix::mayor(int MAT[MAX][MAX], int m, int n){

}
