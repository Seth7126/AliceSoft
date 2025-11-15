// 函数: ??$create_environment@D@@YAQAPADQAD@Z
// 地址: 0x710bc9
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
int32_t edi
int32_t var_18 = edi
char* edi_1 = arg1
int32_t edx = 0
char* esi = edi_1

for (char i = *edi_1; i != 0; i = *esi)
    if (i != 0x3d)
        edx += 1
    
    char* ecx_1 = esi
    
    do
        i = *ecx_1
        ecx_1 = &ecx_1[1]
    while (i != 0)
    
    esi = &esi[1] + ecx_1 - &ecx_1[1]

void* result = __calloc_base(edx + 1, 4)

if (result != 0)
    void* result_1 = result
    
    while (true)
        if (*edi_1 == 0)
            goto label_710c7e
        
        char* ecx_4 = edi_1
        void* eax_1
        
        do
            eax_1.b = *ecx_4
            ecx_4 = &ecx_4[1]
        while (eax_1.b != 0)
        
        eax_1 = ecx_4 - &ecx_4[1] + 1
        
        if (*edi_1 != 0x3d)
            char* eax_2 = __calloc_base(eax_1, 1)
            
            if (eax_2 == 0)
                free_environment<char>(result)
                __free_base(0)
                break
            
            if (_strcpy_s(eax_2, eax_1, edi_1) != 0)
                int32_t var_2c
                __builtin_memset(&var_2c, 0, 0x14)
                __invoke_watson()
                noreturn
            
            char** result_2 = result_1
            *result_2 = eax_2
            result_1 = &result_2[1]
            __free_base(0)
        
        edi_1 += eax_1

result = nullptr
label_710c7e:
__free_base(0)
return result
