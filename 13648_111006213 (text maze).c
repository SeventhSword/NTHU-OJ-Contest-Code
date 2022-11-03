#include <stdio.h>

int main(){
    int a, b, c, d;
    int e, f;
    char g[505][505];
    char h[505][505];
    int m = 1000;
    int n = -1000;
    char o, p;
    int q, r;
    int s = 0;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d %d",&c, &d);
    e = c;
    f = d;
    for(int i = 0; i < a; i++){
        for(int j = 0; j < a; j++){
            scanf("%s",&g[i][j]);
        }
    }
    for(int k = 0; k < b; k++){
        m = 1000;
        n = -1000;
        for(int i = -1; i <= 1; i++ ){
            for(int j = -1; j <= 1; j++){
                if(i != 0 || j != 0){
                    h[i][j] = g[c + i][d + j];
                    if( s == 0){
                        if( h[i][j] < m && h[i][j] != 0){
                            m = h[i][j];
                            p = h[i][j];
                            if ( p == 'e' ^ p == 'j' ^ p == 'o' ^ p == 't' ^ p == 'A' ^ p == 'F' ^ p == 'K' ^ p == 'P' ){
                                q = i;
                                r = j;
                            }
                            for(int x = 117, y = 85; x <= 122, y <= 90; x++, y++ ){
                                if(p == x || p == y){
                                    q = i;
                                    r = j;
                                }
                            }
                        }
                    }
                    if( s == 1){
                        if( h[i][j] > n && h[i][j] != 0){
                            n = h[i][j];
                            p = h[i][j];
                            if ( p == 'e' ^ p == 'j' ^ p == 'o' ^ p == 't' ^ p == 'A' ^ p == 'F' ^ p == 'K' ^ p == 'P' ){
                                q = i;
                                r = j;
                            }
                            for(int x = 117, y = 85; x <= 122, y <= 90; x++, y++ ){
                                if(p == x || p == y){
                                    q = i;
                                    r = j;
                                }
                            }
                        }
                    }
                }
            }
        }
        if( p == 'a' ^ p == 'f' ^ p == 'k' ^ p == 'p' ^ p == 'E' ^ p == 'J' ^ p == 'O' ^ p == 'T'){
            if(d != 0){
                d--;
            }
            else{
                printf("%c",g[c][d]);
                return;
            }
        }
        else if( p == 'b' ^ p == 'g' ^ p == 'l' ^ p == 'q' ^ p == 'D' ^ p == 'I' ^ p == 'N' ^ p == 'S'){
            if(d != a -1){
                d++;
            }
            else{
                printf("%c",g[c][d]);
                return;
            }
        }
        else if( p == 'c' ^ p == 'h' ^ p == 'm' ^ p == 'r' ^ p == 'C' ^ p == 'H' ^ p == 'M' ^ p == 'R' ){
            if(c != 0){
                c--;
            }
            else{
                printf("%c",g[c][d]);
                return;
            }
        }
        else if( p == 'd' ^ p == 'i' ^ p == 'n' ^ p == 's' ^ p == 'B' ^ p == 'G' ^ p == 'L' ^ p == 'Q'){
            if(c != a -1){
                c++;
            }
            else{
                printf("%c",g[c][d]);
                return;
            }
        }
        else if( p == 'e' ^ p == 'j' ^ p == 'o' ^ p == 't' ^ p == 'A' ^ p == 'F' ^ p == 'K' ^ p == 'P'){
            c = c + q;
            d = d + r;
            if( s == 1 ) s = 0;
            else if ( s == 0) s = 1;
        }
        else{
            c = c + q;
            d = d + r;
        }

        if( k == 0) printf("%c", g[e][f]);
        printf("%c", g[c][d]);
    }
    return 0;
}

/*
#include <stdio.h>

int main(){
    int matrixSize, stepsSize, initialposR, initialposC;
    int initialposR_save, initialposC_save;
    char matrix[505][505];
    char matrixNearby[505][505];
    int chosenIntTempM0 = 1000;
    int chosenIntTempM1 = -1000;
    char chosenCharTemp, chosenChar;
    int tempI, tempJ;
    int findingMode = 0;
    scanf("%d",&matrixSize);
    scanf("%d",&stepsSize);
    scanf("%d %d",&initialposR, &initialposC);
    initialposR_save = initialposR;
    initialposC_save = initialposC;
    for(int i = 0; i < matrixSize; i++){
        for(int j = 0; j < matrixSize; j++){
            scanf("%s",&matrix[i][j]);
        }
    }
    for(int k = 0; k < stepsSize; k++){
        chosenIntTempM0 = 1000;
        chosenIntTempM1 = -1000;
        for(int i = -1; i <= 1; i++ ){
            for(int j = -1; j <= 1; j++){
                if(i != 0 || j != 0){
                    matrixNearby[i][j] = matrix[initialposR + i][initialposC + j];
                    if( findingMode == 0){
                        if( matrixNearby[i][j] < chosenIntTempM0 && matrixNearby[i][j] != 0){
                            chosenIntTempM0 = matrixNearby[i][j];
                            chosenChar = matrixNearby[i][j];
                            if ( chosenChar == 'e' ^ chosenChar == 'j' ^ chosenChar == 'o' ^ chosenChar == 't' ^ chosenChar == 'A' ^ chosenChar == 'F' ^ chosenChar == 'K' ^ chosenChar == 'P' ){
                                tempI = i;
                                tempJ = j;
                            }
                            for(int x = 117, y = 85; x <= 122, y <= 90; x++, y++ ){
                                if(chosenChar == x || chosenChar == y){
                                    tempI = i;
                                    tempJ = j;
                                }
                            }
                        }
                    }
                    if( findingMode == 1){
                        if( matrixNearby[i][j] > chosenIntTempM1 && matrixNearby[i][j] != 0){
                            chosenIntTempM1 = matrixNearby[i][j];
                            chosenChar = matrixNearby[i][j];
                            if ( chosenChar == 'e' ^ chosenChar == 'j' ^ chosenChar == 'o' ^ chosenChar == 't' ^ chosenChar == 'A' ^ chosenChar == 'F' ^ chosenChar == 'K' ^ chosenChar == 'P' ){
                                tempI = i;
                                tempJ = j;
                            }
                            for(int x = 117, y = 85; x <= 122, y <= 90; x++, y++ ){
                                if(chosenChar == x || chosenChar == y){
                                    tempI = i;
                                    tempJ = j;
                                }
                            }
                        }
                    }
                }
            }
        }
        if( chosenChar == 'a' ^ chosenChar == 'f' ^ chosenChar == 'k' ^ chosenChar == 'p' ^ chosenChar == 'E' ^ chosenChar == 'J' ^ chosenChar == 'O' ^ chosenChar == 'T'){
            if(initialposC != 0){
                initialposC--;
            }
            else{
                printf("%c",matrix[initialposR][initialposC]);
                return;
            }
        }
        else if( chosenChar == 'b' ^ chosenChar == 'g' ^ chosenChar == 'l' ^ chosenChar == 'q' ^ chosenChar == 'D' ^ chosenChar == 'I' ^ chosenChar == 'N' ^ chosenChar == 'S'){
            if(initialposC != matrixSize -1){
                initialposC++;
            }
            else{
                printf("%c",matrix[initialposR][initialposC]);
                return;
            }
        }
        else if( chosenChar == 'c' ^ chosenChar == 'h' ^ chosenChar == 'm' ^ chosenChar == 'r' ^ chosenChar == 'C' ^ chosenChar == 'H' ^ chosenChar == 'M' ^ chosenChar == 'R' ){
            if(initialposR != 0){
                initialposR--;
            }
            else{
                printf("%c",matrix[initialposR][initialposC]);
                return;
            }
        }
        else if( chosenChar == 'd' ^ chosenChar == 'i' ^ chosenChar == 'n' ^ chosenChar == 's' ^ chosenChar == 'B' ^ chosenChar == 'G' ^ chosenChar == 'L' ^ chosenChar == 'Q'){
            if(initialposR != matrixSize -1){
                initialposR++;
            }
            else{
                printf("%c",matrix[initialposR][initialposC]);
                return;
            }
        }
        else if( chosenChar == 'e' ^ chosenChar == 'j' ^ chosenChar == 'o' ^ chosenChar == 't' ^ chosenChar == 'A' ^ chosenChar == 'F' ^ chosenChar == 'K' ^ chosenChar == 'P'){
            initialposR = initialposR + tempI;
            initialposC = initialposC + tempJ;
            if( findingMode == 1 ) findingMode = 0;
            else if ( findingMode == 0) findingMode = 1;
        }
        else{
            initialposR = initialposR + tempI;
            initialposC = initialposC + tempJ;
        }

        if( k == 0) printf("%c", matrix[initialposR_save][initialposC_save]);
        printf("%c", matrix[initialposR][initialposC]);
    }
    return 0;
}
*/
