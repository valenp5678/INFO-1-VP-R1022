#include <stdio.h>


int main(void)
{
	char estado = 0, venta = 0;

	int botinesHombre = 0, botinesMujer = 0, zapatillasUnisex = 0, medias = 0;

	float comisionVendedor1 = 0.0, comisionVendedor2 = 0.0, comisionVendedor3 = 0.0;

	char codigoVendedor = 0;

	float totalVendedor1 = 0.0, totalVendedor2 = 0.0, totalVendedor3 = 0.0;	

	int precioBotines = 60000;
	int precioZapatillas = 86000;
	int precioMedias = 2500;

	int cantidad = 0; 
	float precio = 0.0;
	float facturacion = 0.0;
	char lectura;
	char running = 1;

	
	while(running == 1){

		switch(estado){
			case 0:
				
				do {
					estado = 0;
					lectura = 0;
        			printf("Sistema de ventas Nike S.R.L\n");
	        		printf("1. Nueva Venta\n");
    	    		printf("2. Resumen de ventas\n");
        			printf("3. Comisiones\n");
        			printf("4. Salir\n");

		    	    scanf(" %c", &lectura);
		    	    if(lectura == '1'){
		    	    	estado = 1;
		    	    }else if(lectura == '2'){
		    	    	estado = 2;
		    	    }else if(lectura == '3'){
		    	    	estado = 3;
		    	    }else if(lectura == '4'){
		    	    	estado = 4;
		    	    }
	    		    getchar();

        			if (lectura != '1' && lectura != '2' && lectura != '3' && lectura != '4') {
            			printf("Codigo inexistente, vuelva a ingresar el codigo:\n");
            			
            			
        			}

    				} while (lectura != '1' &&  lectura != '2' && lectura != '3' && lectura != '4');

				break;

			case 1:
			
				printf("1. Botines hombre\n");
				printf("2. Botines mujer\n");
				printf("3. Zapatillas Unisex\n");
				printf("4. Medias\n");
				printf("5. Volver\n");
				scanf("%hhd", &venta);
				getchar();
				

				

				if(venta == 1 || venta == 2 || venta == 3 || venta == 4){
					

					printf("Ingrese su codigo de vendedor:\n");
					scanf("%hhd", &codigoVendedor);
					getchar();

					while(codigoVendedor != 1 && codigoVendedor != 2 && codigoVendedor != 3){
						printf("Vendedor inexistente, vuelva a ingresar su codigo:\n");		
						scanf("%hhd", &codigoVendedor);	
						getchar();	
					}					

				}else{

					if (venta == 5)
					{
						 printf("Volviendo...\n");

					}else{
						printf("Codigo inexistente, volviendo...\n");

						
					}
					
					estado = 0;
					venta = 0;
					cantidad = 0;
					codigoVendedor = 0;
					

				}
			

				if(codigoVendedor == 1 || codigoVendedor == 2 || codigoVendedor == 3){
					if(venta == 1){
						printf("Precio sugerido: %d$\n", precioBotines);
						printf("Ingrese el precio del producto:\n");		
						while(scanf("%f", &precio) != 1){ 
							printf("Precio no valido, reingrese el precio:\n");
							getchar();
						}
						precioBotines = precio;
						getchar();
					}else if(venta == 2){
						printf("Precio sugerido: %d$\n", precioBotines);
						printf("Ingrese el precio del producto:\n");
						while(scanf("%f", &precio) != 1){ 
							printf("Precio no valido, reingrese el precio:\n");
							getchar();
						}
						precioBotines = precio;
						getchar();
					}else if(venta == 3){
						printf("Precio sugerido: %d$\n", precioZapatillas);
						printf("Ingrese el precio del producto:\n");
						while(scanf("%f", &precio) != 1){ 
							printf("Precio no valido, reingrese el precio:\n");
							getchar();
						}
						precioZapatillas = precio;
						getchar();
					}else if(venta == 4){
						printf("Precio sugerido: %d$\n", precioMedias);
						printf("Ingrese el precio del producto:\n");
						scanf("%f", &precio);
						precioMedias = precio;
						getchar();
					}
					
					

					if(0 > precio){
						printf("No puede ser un precio negativo, vuelva a ingresar el precio:\n");
						while(scanf("%f", &precio) != 1){ 
							printf("Precio no valido, reingrese el precio:\n");
							getchar();
						}
						getchar();
					}

					printf("Ingrese la cantidad de productos que a vendido:\n");
					while(scanf("%d", &cantidad) != 1){ 
							printf("Cantidad no valida, reingrese la cantidad:\n");
							getchar();
						}
					getchar();

					if(cantidad > 0){


						
							if (codigoVendedor == 1)
								{
								totalVendedor1 += precio*cantidad;
								comisionVendedor1 = totalVendedor1/100;
								printf("Tu comision es de: %f$\n", comisionVendedor1);
								

							}else if(codigoVendedor == 2){

								totalVendedor2 += precio*cantidad;							
								comisionVendedor2 = totalVendedor2/100;
								printf("Tu comision es de: %f$\n", comisionVendedor2);
								

							}else if(codigoVendedor == 3){
								totalVendedor3 += precio*cantidad;
								comisionVendedor3 = totalVendedor3/100;
								printf("Tu comision es de: %f$\n", comisionVendedor3);
								
							}

							if(venta == 1){
								botinesHombre += cantidad;
								
							}else if(venta == 2){
								botinesMujer += cantidad;
								
							}else if(venta == 3){ 
								zapatillasUnisex += cantidad;
								
							}else if(venta == 4){
								medias += cantidad;
								
							}
							cantidad = 0;
							venta = 0;

							

								
						}else{
							estado = 5;
							facturacion = totalVendedor1 + totalVendedor2 + totalVendedor3;
							printf("Facturacion del dia: %f $\n", facturacion);
							printf("----------------------\n");
							printf("Comision vendedor 1: %f $\n", comisionVendedor1);
							printf("Comision vendedor 2: %f $\n", comisionVendedor2);
							printf("Comision vendedor 3: %f $\n", comisionVendedor3);
						}

					
				}
				break;

				case 2:
					printf("Botines hombre: %d\n", botinesHombre);
					printf("Botines mujer: %d\n", botinesMujer);
					printf("Zapatillas Unisex: %d\n", zapatillasUnisex);
					printf("Medias: %d\n", medias);
					estado = 0;
					break;

				case 3:
					printf("Comision vendedor 1: %f $\n", comisionVendedor1);
					printf("Comision vendedor 2: %f $\n", comisionVendedor2);
					printf("Comision vendedor 3: %f $\n", comisionVendedor3);
					
					estado = 0;
					break;

				default:

					facturacion = totalVendedor1 + totalVendedor2 + totalVendedor3;
					printf("Facturacion del dia: %f $\n", facturacion);
					printf("----------------------\n");
					printf("Comision vendedor 1: %f $\n", comisionVendedor1);
					printf("Comision vendedor 2: %f $\n", comisionVendedor2);
					printf("Comision vendedor 3: %f $\n", comisionVendedor3);
					running = 0;
					break;
			}


		}
		return 0;

		

	}
	