/*
 * =====================================================================================
 *
 *       Filename:  Punteros.h
 *
 *    Description:  Clase principal para Punteros
 *
 *        Created:  2019-08-18
 *
 *         Author:  Maikol Guzman Alan mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */

#ifndef PUNTEROSBASICO_PUNTEROS_H
#define PUNTEROSBASICO_PUNTEROS_H


class Punteros {
    static int numeroAlCuboValor(int);
	static double numeroRaizCuadradaValor(double);
    static int numeroAlCuboPuntero(int *);
	static double numeroRaizCuadradaPuntero(double *);
    static int numeroAlCuboReferencia(int &);
	static double numeroRaizCuadradaReferencia(double &);
	
	

public:
    Punteros();

    static void imprimirDatosPuntero();
    static void imprimirCalculoAlCuboReferenciaValor();
	static void imprimirCalculoRaizCuadradaReferenciaValor();
    static void imprimirCalculoAlCuboReferenciaPuntero();
	static void imprimirCalculoRaizCuadradaReferenciaPuntero();
    static void imprimirCalculoAlCuboReferenciaReferencia();
	static void imprimirCalculoRaizCuadradaReferenciaReferencia();
};


#endif //PUNTEROSBASICO_PUNTEROS_H
