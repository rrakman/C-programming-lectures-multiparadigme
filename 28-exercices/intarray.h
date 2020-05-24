
typedef struct intarray intarray;
struct intarray {
	int* data;
	int len;
};

/* Prototypes des fonctions de manipulations des intarray*/
void positive (intarray tab);
int int_array_search (intarray tab,int n);
int int_array_nb_occurences (intarray tab,int n);
void intarray_debugg(intarray tab);
intarray intarray_create (int len);
void intarray_destroy(intarray tab);
int intarray_get(intarray tab,int index);
void intarray_set(intarray tab,int index,int value);
int intarray_len(intarray tab);

/*retourne la concatenation des 2 intarray t& et t2 */
intarray intarray_concat (intarray T1,intarray T2);

/* retourne la minimum valeur des cases du tab*/
int intarray_get_min(intarray tab);

/* retourne l'index de la minimum valeur des cases du tab*/
int intarray_get_index_of_min(intarray tab);

/* retourne l'index de la minimum valeur des cases du tab*/
int intarray_get_index_of_min_from(intarray tab,int index);

/* swipe between the value of 2 cases pointed by m and n	*/
intarray intarray_swap(int* m,int* n);

/* sort data of a table from min int to bigger one*/
intarray intarray_sort1(intarray tab);
/*calculer la somme de tous les int d un array */
int intarray_sum(intarray tab);
/*calculer la moyenne des int d'un array */
float intarray_average(intarray tab);

float intarray_median(intarray tab);

intarray intarray_clone(intarray tab);
