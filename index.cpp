#include "../include/httpd.h"
extern "C" int CPP4A_RUN(request_rec,char**);
extern "C" int CPP4A_CLOSE();
int CPP4A_RUN(request_rec r,char** chRst){
	char* test="你好";
	*chRst=test;
	return OK;	
}
int CPP4A_CLOSE(){
}
