// Declaraciones en el archivo .h
int cn; //cantidad de nodos
vector< vector<int> > ady;
 
// Devuelve una matriz con las distancias mínimas de cada nodo al resto de los vértices.
vector< vector<int> > Grafo :: floydWarshall(){
    vector< vector<int> > path = this->ady;
 
    /* No tendría porqué ser necesario si ya hay ceros en las diagonales de ady */
    for(int i = 0; i < cn; i++)
        path[i][i] = 0;
    
    for(int k = 0; k < cn; k++)
        for(int i = 0; i < cn; i++)
            for(int j = 0; j < cn; j++){
                int dt = path[i][k] + path[k][j];
                if(path[i][j] > dt)
                    path[i][j] = dt;
            }
    return path;
}
