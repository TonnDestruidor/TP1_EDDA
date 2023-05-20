#include "Cliente.h"
#include "Gestor.h"
#include "MeioDeME.h"
#include "Cidades.h"
#include "Constantes.h"
#include "Aluguer.h"

//existem varios erros com os ficheiros
int main()
{

	//Clientes

	ListaClientes* inicio = NULL;

	inicio = LerListaC(inicio);
	//
	Cliente Jorge = {1234567, "jorge", "rua", 30.2};
	Cliente manel = { 2738732, "manel", "casa", 5 };

	//inicio = AdicionarClientes(inicio, Jorge);
	//inicio = AdicionarClientes(inicio, manel);

	///*if (ExisteCliente(&inicio, 1234567) == true)
	//{
	//	printf("sim");
	//}*/

	MostraListaC(inicio);
	inicio = EliminarCliente(&inicio, 2738732);
	//EliminaListaC(&inicio);

	//ModificarCliente(&inicio, "jorge");

	MostraListaC(inicio);
	//GravaListaC(inicio);
	//MostraListaC(inicio);



	//Gestores

	//ListaGestor* iniciog = NULL;

	//iniciog = LerListaG(iniciog);

	//Gestor joao = { 1234567, "joao", "rua", "ola123" };
	//Gestor quim = { 2738732, "quim", "casa", "adeus9" };

	////inicio = AdicionarGestor(inicio, joao);
	////inicio = AdicionarGestor(inicio, quim);

	///*if (ExisteGestor(iniciog, 2738732) == true)
	//{
	//	printf("sim\n");
	//}
	//else
	//{
	//	printf("nao\n");
	//}*/

	////inicio = EliminarGestor(inicio, 2738732);


	////ModificarGestor(&inicio, "jorge");

	//MostraListaG(iniciog);
	//GravaListaG(iniciog);
	//EliminaListaG(&iniciog);
	//MostraListaG(iniciog);


	//Meios De Mobilidade

	//ListaME* iniciom = NULL;

	//iniciom = LerListaM(iniciom);

	//MeioDeME tesla = { "tesla", "73-op-78", M1, 4, 350, 2 };
	//MeioDeME ix = { "ix", "21-er-42", M3, 5, 300, 1 };

	////iniciom = AdicionarMeios(iniciom, tesla);
	////iniciom = AdicionarMeios(iniciom, ix);

	//char maux[] = "73-op-78";

	///*if (ExisteMeio(iniciom, maux) == true)
	//{
	//	printf("sim\n");
	//}
	//else
	//{
	//	printf("nao\n");
	//}*/

	////iniciom = EliminarMeio(inicio, 2738732);


	////MostraListaM(iniciom);
	//GravaListaM(iniciom);
	//EliminaListaG(&iniciom);
	//MostraListaG(iniciom);


	//Cidades e Adjacencias

	//ListaME* iniciom = NULL;

	//iniciom = LerListaM(iniciom);

	//MeioDeME tesla = { "tesla", "73-op-78", M1, 4, 350, 2 };
	//MeioDeME ix = { "ix", "21-er-42", M3, 5, 300, 1 };

	////iniciom = AdicionarMeios(iniciom, tesla);
	////iniciom = AdicionarMeios(iniciom, ix);

	//char maux[] = "73-op-78";

	///*if (ExisteMeio(iniciom, maux) == true)
	//{
	//	printf("sim\n");
	//}
	//else
	//{
	//	printf("nao\n");
	//}*/

	////iniciom = EliminarMeio(inicio, 2738732);


	////MostraListaM(iniciom);
	//GravaListaM(iniciom);
	//EliminaListaG(&iniciom);
	//MostraListaG(iniciom);
}
