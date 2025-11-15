// 函数: sub_71bb5d
// 地址: 0x71bb5d
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_8 = ecx
int32_t edi
int32_t var_c = edi
int32_t* edi_1 = arg1

if (edi_1 == 0)
    return 0

int32_t ecx_1 = 0
int32_t* eax_1 = edi_1

if (*edi_1 != 0)
    do
        eax_1 = &eax_1[1]
        ecx_1 += 1
    while (*eax_1 != 0)

int32_t result = __calloc_base(ecx_1 + 1, 4)

if (result == 0)
label_71bbfc:
    _abort()
    noreturn

if (*edi_1 != 0)
    int32_t* ebx_2 = result - edi_1
    int32_t i
    
    do
        char* ecx_3 = *edi_1
        void* edx_1 = &ecx_3[1]
        
        do
            i.b = *ecx_3
            ecx_3 = &ecx_3[1]
        while (i.b != 0)
        
        *(ebx_2 + edi_1) = __calloc_base(ecx_3 - edx_1 + 1, 1)
        __free_base(0)
        
        if (*(ebx_2 + edi_1) == 0)
            goto label_71bbfc
        
        i = _strcpy_s(*(ebx_2 + edi_1), ecx_3 - edx_1 + 1, *edi_1)
        
        if (i != 0)
            int32_t var_28
            __builtin_memset(&var_28, 0, 0x14)
            __invoke_watson()
            noreturn
        
        edi_1 = &edi_1[1]
    while (*edi_1 != i)

__free_base(0)
return result
