#include "simplemock.h"
#include "multiplydivide.h"
/**
  *(v1 * v2) * (v3/v4)
  */





int addmultiplyAndDivide(int v1, int v2,        /*multiply */    \
                       int v3, int v4         /*divide */     \
                       ){
    int result;
    result = multiply(v1,v2) + divide(v3,v4);
                         
    return result;
}