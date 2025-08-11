#ifndef TEST_H
#define TEST_H

#include <string>

std::string reverse_str(std::string str){
    std::string temp="";
    for(int i =str.size()-1;i>=0;i--){
        temp+=str[i];
    }
    str=temp;
    return str;
}
#endif