#include <iostream>
#include "3-email.h"

using namespace std;

bool isValid(char c) {
    return (
        (c >= 'a' && c <= 'z') ||
        (c >= 'A' && c <= 'Z') ||
        (c >= '0' && c <= '9') ||
        (c == '.') ||
        (c == '_')
    );
}


bool email(char * string) {

    bool result = true;
    int at = -1, dot = -1;
    int numberOfAt = 0;
    int i;
    
    for (i = 0; string[i] != '\0' ; i++) {
        char tmp = string[i];
        
        if (tmp == '@') {
            at = i;
            numberOfAt++;
        } else if (tmp == '.') {
            dot = i;
            if (i == 0) {
                result = false;
            }
        } else if (!isValid(tmp)) {
            result = false;
        }
    }
    
     if (numberOfAt != 1) {
         result = false;
     }   
     
     if (at == 0 || at == i-1) {
         result = false;
     }
     
     if (dot == i-1) {
         result = false;
     }
     
     return result;
     
     
     
    
    

}
