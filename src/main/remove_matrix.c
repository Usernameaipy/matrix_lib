#include "matrix.h"

void remove_matrix(matrix_t** mtr){
    int stat = ok;
    if(!(*mtr) || !((*mtr)->matrix)) stat = ncm_error;
    if(stat == ok){
        matrix_t *stru_mtr = (*mtr);
        for(int i = 0; i<stru_mtr->rows; i++){
            if(stru_mtr->matrix[i]) free(stru_mtr->matrix[i]);
        }
        free(stru_mtr->matrix);
        stru_mtr->matrix=NULL;
        free(stru_mtr);
        stru_mtr=NULL;
    }
}