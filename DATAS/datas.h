typedef struct
{
    unsigned int *dia, *mes, *ano;
    int size;
}Data;

//criar uma data de forma dinâmica 
Data * novaData(unsigned int dia, unsigned int mes, unsigned int ano);

