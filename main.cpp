#include <iostream>
#include <Windows.h>
#include <fstream>

//made by saul para principiantes._.
//calculadora media-avanzada
struct datos{
	int dato1;
	int dato2;
	std::string opcion;//bloque para los condicionales ((if opcion ==)) <- EQUAL-> ==
	int resultado;
};
//reproduccion fluida de texto
void texto_slow(const std:: string& texto) {
	for (char letra : texto) {

		std::cout << letra;
		Sleep(20);
	}
}
void guardado(int& resultado) {
	//use esto como historial

	std::ofstream prueba("CALCULOS.txt");
	if (prueba.is_open()) {
		prueba << resultado;
		prueba.close();
		
	}
	
}
//bloque de inicio
int main() {
	//iniciamos el<struct> 
	datos f;
	
	//usamos bucle para que cuando termine de meter los numeros y de el resultado , despues de 2 segundos se reinicie y pueda realizar otra operacion
	while (true)
	{
		system("cls");
		std::cout << " SSSS    AAAAA   U   U  L\n";
		std::cout << "S       A     A  U   U  L\n";
		std::cout << " SSS    AAAAAAA  U   U  L\n";
		std::cout << "    S   A     A  U   U  L\n";
		std::cout << "SSSS    A     A   UUU   LLLLL\n";
		std::cout << "Tu ultima operacion sera guardada en Prueba10.txt\n";
		//usamos system cls para que cuando inicie el bucle de nuevo se vea la pantalla como la primera vez.
		
		texto_slow("Introduce primero numero : ");
		std::cin >> f.dato1;
		texto_slow("Introduce segundo numero : ");
		std::cin >> f.dato2;
		texto_slow("Escribe [restar] ,[sumar] , [multiplicar] , [dividir] : ");
		std::cin >> f.opcion;
		
		if(std::cin.fail()){
			std::cin.clear();
			std::cin.get();
		
			main();//no podemos llamar a main dentro del main lo puse para que se vea la logica.
		
		}




		
		// usamos los || para poner otra igualacion de que si se escribe RESTAR con mayuscula tambien se active esta condicion
		if (f.opcion == "restar" || f.opcion == "RESTAR") {

			std::cout << "La operacion es  = " << f.dato1 - f.dato2;
			f.resultado = f.dato1 - f.dato2;
			guardado(f.resultado);
			
			Sleep(3000);

		}
		else if (f.opcion == "sumar" || f.opcion == "SUMAR") {

			std::cout << "La operacion es = " << f.dato1 + f.dato2;
			f.resultado = f.dato1 + f.dato2;
			guardado(f.resultado);
			Sleep(3000);
		}
		else if (f.opcion == "multiplicar" || f.opcion == "MULTIPLICAR")
		{
			std::cout << "La operacion es = " << f.dato1 * f.dato2;
			f.resultado = f.dato1 * f.dato2;
			guardado(f.resultado);
			Sleep(3000);
		}
		else if ((f.opcion == "dividir"|| f.opcion == "DIVIDIR")&& f.dato1 != 0)
		{
			std::cout << "La operacion es = " << f.dato1 / f.dato2;
			f.resultado = f.dato1 / f.dato2;
			guardado(f.resultado);

			//usamos sleep para que al usuario le de tiempo a ver el resultado
			Sleep(3000);
		}
		else
		{
			texto_slow("Algo salio mal , vuelve a intentarlo:");


			Sleep(1000);
			//sonido
			Beep(200, 500);
		}
		
	}
	
	
}

