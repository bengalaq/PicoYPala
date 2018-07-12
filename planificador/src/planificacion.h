#ifndef SRC_PLANIFICACION_H_
#define SRC_PLANIFICACION_H_

#include "commons/collections/queue.h"
#include "commons/collections/list.h"
#include "includes.h"

//Prototipos
void inicializarPlanificacion();
int procesoNuevo(int socketESI);
void procesoTerminado(int exitStatus);
void sentenciaFinalizada();
respuesta_operacion_t procesar_notificacion_coordinador(int comando, int tamanio, void* cuerpo);
void bloquearEsiPorConsola(int idEsi, char* clave);
void desbloquearClavePorConsola(char* clave);
void listarRecursosBloqueadosPorClave(char* clave);
t_list* killProcesoPorID(int idProceso);
void analizarDeadlocks();
int fdProcesoEnEjecucion();
void bloquearClave(char* clave);

sem_t planificacion_habilitada;
pthread_mutex_t mutex_cola_listos;
pthread_mutex_t mutex_proceso_ejecucion;

#endif /* SRC_PLANIFICACION_H_ */
