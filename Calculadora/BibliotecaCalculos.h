
/** \brief realiza la suma entre dos operandos
 *
 * \param float recibe el primer operando
 * \param float recibe el segundo operando
 * \return float devuelve el resultado
 *
 */
float sumar(float, float);


/** \brief realiza la resta entre dos operandos
 *
 * \param float recibe el primer operando
 * \param float recibe el segundo operando
 * \return float devuelve el resultado
 *
 */
float restar(float, float);


/** \brief realiza la division entre dos operandos
 *
 * \param float recibe el primer operando
 * \param float recibe el segundo operando
 * \return float devuelve el resultado
 *
 */
float dividir(float, float);


/** \brief realiza la multiplicacion entre dos operandos
 *
 * \param float recibe el primer operando
 * \param float recibe el segundo operando
 * \return float devuelve el resultado
 *
 */
float multiplicar(float, float);


/** \brief realiza el factorial de un numero

 * \param float  recibe el numero
 * \return float devuelve el resultado
 *
 */
float factorial(float);




/** \brief calcula todos los resultados
 *
 * \param float recibe el primer operando
 * \param float recibe el segundo operando
 * \param float*  recibe la direccion de memoria de la suma
 * \param float*  recibe la direccion de memoria de la resta
 * \param float*  recibe la direccion de memoria de la division
 * \param float*  recibe la direccion de memoria de la multiplicacion
 * \param float*  recibe la direccion de memoria de el primer factorial
 * \param float*  recibe la direccion de memoria de el segundo factorial
 * \return void   no retorna
 *
 */
void calcularTodo(float, float, float*, float*, float*, float*, float*, float*);


/** \brief muestra todos los resultados
 *
 * \param float recibe el resultado de la suma
 * \param float recibe el resultado de la resta
 * \param float recibe el resultado de la division
 * \param float recibe el resultado de la multiplicacion
 * \param float recibe el resultado del primer factorial
 * \param float recibe el resultado del segundo factorial
 * \param int   recibe la bandera de la division por cero
 * \param int   recibe la bandera de si el primero numero es negativo
 * \param int   recibe la bandera de si el segundo numero es negativo
 * \return void no devuelve nada
 *
 */
void mostrarResultados(float, float, float, float, float, float, int, int, int);

/** \brief comprueba si el divisor es 0
 *
 * \param int* recibe la direccion de memoria de la bandera de si el divisor es 0
 * \param float recibe el divisor
 * \return void no devuelve nada
 *
 */
void comprobarDivisionPorCero(int*, float);


/** \brief comprueba si los operandos son negativos
 *
 * \param int*  recibe la direccion de memoria de la bandera
 * \param float recibe el numero
 * \return void no devuelve nada
 *
 */
void comprobarNumero(int*, float);
