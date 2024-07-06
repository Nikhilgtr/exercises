#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

enum operation {
    ENCRYPT,
    DECRYPT
};

typedef struct cipher_ctx
{
    size_t len_str;
    char *str;
    int shift;
}cipher_t;

static cipher_t cipher_ctx;

void print_usage(void)
{
    printf("\nThis is Ceaser Cipher Application\n");
    printf("Usage #$: ./a.out -o <encrypt/decrypt> -t <text> -s <shift 0-23>\n\n");
}

void str_to_upp(char *str)
{
    char *c = NULL;
    for(c = str; *c = toupper(*c); ++c);
}

void free_mem(void)
{
    free(cipher_ctx.str);
}

int doing_encrypt(cipher_t *var)
{
    int i;
    printf("Cipher Encrypt :: ");
    for(i = 0; i < var->len_str; ++i) {
        printf("%c",get_encrypt_key_str(var, i) + 'A');
    }
    printf("\n");
}

int get_encrypt_key_str(cipher_t *var, int idx)
{
    int val;
    val = (var->str[idx] + var->shift - 65)%26;
    return val;
}

int doing_decrypt(cipher_t *var)
{
    int i;
    printf("Cipher Decrypt :: ");
    for(i = 0; i < var->len_str; ++i) {
        printf("%c",get_decrypt_key_str(var, i) + 'A');
    }
    printf("\n");
}

int get_decrypt_key_str(cipher_t *var, int idx)
{
    int val;
    val = (var->str[idx] - var->shift - 65)%26;
    return val;
}

int init_ctx(size_t len)
{
    cipher_ctx.str = (char *)malloc(sizeof(char) * len + 1);
    if(cipher_ctx.str == NULL) {
        printf("No Mem Error!!\n");
        return 1;
    }
    return 0;
}
    
int main(int argc, char *argv[])
{
    int option, operation;
    if(argc < 7) {
        print_usage();
        return 1;
    }

    while((option = getopt(argc,argv,"o:t:s:")) != -1)
    {
        switch(option)
        {
        case 'o':
            //option (encrypt/decrypt)
            if(strcmp("encrypt", optarg) == 0) {
                operation = ENCRYPT;
            }
            if(strcmp("decrypt", optarg) == 0) {
                operation = DECRYPT;
            }
            break;
        case 't':
            {   //text
                int len = strlen(optarg);
                if(init_ctx(len)) {
                    printf("Init ctx Error!!\n");
                    goto error;
                }
                strcpy(cipher_ctx.str,optarg);
                str_to_upp(cipher_ctx.str);
                cipher_ctx.len_str = len;  
            }
            break;
        case 's':
            //shift
            cipher_ctx.shift = atoi(optarg);
            if(!(0 <= cipher_ctx.shift && cipher_ctx.shift <= 26))
            {
                printf("Incorrect Parameters!!\nPlease Enter in range 0-23\n");
                goto error;
            }
            break;
        }
    }
    switch(operation)
    {
    case ENCRYPT:
        doing_encrypt(&cipher_ctx);    
        break;
    case DECRYPT:
        doing_decrypt(&cipher_ctx);
        break;
    }
    free_mem(); 
    return 0;

error:
    free_mem();
    return -1;
}
