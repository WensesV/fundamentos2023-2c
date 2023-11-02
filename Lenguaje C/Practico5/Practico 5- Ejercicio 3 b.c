// 3 b) Relizar tabla de ejecucion del siguiente codigo


int main()
{
    int VE, ve;
    VE= 0; ve = 0;
    while (VE < 10) {
        ve = ve+VE*10;
        VE=VE+2;
    }
    VE=0;
    return 0;
}


//Tabla de ejecucion
/*
|   Sentencias  |   VE   |   ve   |    Pantalla     |
| int VE, ve    |  int   |  int   |                 |
|VE= 0; ve = 0  |   0    |   0    |                 |
|while(VE < 10)V|        |        |                 |
|ve = ve+VE*10  |        |   0    |                 |
|VE=VE+2        |   2    |        |                 |
|(VE < 10)?V    |        |        |                 |
|ve = ve+VE*10  |        |   20   |                 | C.AUX ---> ve = ve+VE*10 ---> 20 = 0 + 2 * 10
|VE=VE+2        |   4    |        |                 |
|(VE < 10)?V    |        |        |                 |
|ve = ve+VE*10  |        |   60   |                 | C.AUX ---> ve = ve+VE*10 ---> 60 = 20 + 4 * 10
|VE=VE+2        |   6    |        |                 |
|(VE < 10)?V    |        |        |                 |
|ve = ve+VE*10  |        |   120  |                 | C.AUX ---> ve = ve+VE*10 ---> 120 = 60 + 6 * 10
|VE=VE+2        |   8    |        |                 |
|(VE < 10)?V    |        |        |                 |
|ve = ve+VE*10  |        |   200  |                 | C.AUX ---> ve = ve+VE*10 ---> 200 = 120 + 8 * 10
|VE=VE+2        |   10   |        |                 |
|(VE < 10)?F    |        |        |                 |
|VE=0           |        |   0    |                 |
*/
