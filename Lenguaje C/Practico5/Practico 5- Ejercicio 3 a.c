//3 a) Relizar tabla de ejecucion del siguiente codigo

int main(){
    int ve; char ca; float fl; //linea 5
    ve = 15%7; ca='M'; // % = modulo
    fl = 15/7;
    if (ve !=0 && fl == 2.0) {
        ca = (ca+1)+32;
        fl = ca + 8.0/5;
    }
    return 0;
}

/* Tabla de ejecucion
|       Sentencias       |   ve  |   ca   |   fl    |                   Pantalla                      |
|     linea 5            | (int) | (char) | (float) |                                                 |
|ve = 15%7               |   1   |        |         |                                                 | 
|ca='M'                  |       |    M   |         |                                                 |
|fl = 15/7               |       |        |   2.0   |                                                 |
|if(ve !=0 && fl == 2.0)V|       |        |         |                                                 |
|ca = (ca+1)+32          |       |    M   |         |                                                 |  C.AUX ---> ca = (m+1)+32 ---> ca = (N)+32 ---> ca = 110+32 ---> ca = 142 = N 
|fl = ca + 8.0/5         |       |        |  143.6  |                                                 |  C.AUX ---> fl = ca + 8.0/5 ---> fl = N + 1.6 ---> fl = 111.6 + 1.6 ---> fl = 111.6

*/