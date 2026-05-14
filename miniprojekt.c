#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void write_file(const char *filename, const char *content) {
    

    FILE *fp = fopen(filename, "w");

    if(fp == NULL) {
        printf("Nem sikerült létrehozni: %s\n", filename);
        return;
    }

    fputs(content, fp);
    fclose(fp);

    printf("Létrehozva: %s\n", filename);
}

void c_source(int s) {
    const char *code =
        "#include <stdio.h>\n\n"
        "int main() {\n\n\n"
        "    return 0;\n"
        "}\n";

    //write_file("main.c", code);            //vagy az fprintf is jo lehet

    if(s == 0){    
    write_file("main.c", code);
    }
    else{
        printf("%s", code);
    }


    //printf("\n%s", code);    
}

void cs_source(int s) {
    const char *code =
        "using System;\n\n"
        "class Program\n"
        "{\n"
        "    static void Main(string[] args)\n"
        "    {\n"
        "        Console.WriteLine(\"Hello World!\");\n"
        "    }\n"
        "}\n";


    if(s == 0){    
    write_file("Program.cs", code);
    }
    else{
        printf("%s", code);
    }

    //printf("\n%s", code);
}

void py_source(int s) {
    const char *code =
        "def main():\n"
        "    print(\"Hello World\")\n\n"
        "if __name__ == \"__main__\":\n"
        "    main()\n";


    if(s == 0){    
    write_file("main.py", code);
    }
    else{
        printf("%s", code);
    }

    //printf("\n%s", code);
}

void sh_source(int s) {
    const char *code =
        "#!/bin/bash\n\n"
        "main() {\n"
        "    echo \"Hello World\"\n"
        "}\n\n"
        "main\n";


    if(s == 0){    
    write_file("main.sh", code);
    }
    else{
        printf("%s", code);
    }

    //printf("\n%s", code);
}

void help() {
    printf("Usage:\n");
    printf("  alap <template>\n\n");

    printf("Available options:\n");
    printf("  c   - C program\n");
    printf("  cs  - C# program\n");
    printf("  py  - Python program\n");
    printf("  sh  - Bash script\n");
}

void version(){
    printf("alap v 0.0.1\n");
}

void sdo(){

}

int main(int argc, char *argv[]) {

    if(argc < 3 || strcmp(argv[1], "alap") != 0) {
        help();
        return 0;
    }

    char *lang = argv[2];
    int s = 0;

    if (argc >= 4 && strcmp(argv[3], "--stdout") == 0) {
        s = 1;
    }

    if(strcmp(lang, "c") == 0) {
        c_source(s);
    }
    else if(strcmp(lang, "cs") == 0) {
        cs_source(s);
    }
    else if(strcmp(lang, "py") == 0) {
        py_source(s);
    }
    else if(strcmp(lang, "sh") == 0) {
        sh_source(s);
    }
    else if(strcmp(lang, "-v") == 0 || strcmp(lang, "--version") == 0){
        version();
    }
    else if(strcmp(lang, "-h") == 0 || strcmp(lang, "--help") == 0){
        help();
    }
    else {
        help();
    }

    return 0;
}