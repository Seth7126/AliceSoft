// 函数: __Getdays_l
// 地址: 0x70e4f3
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_28 = edi
void* var_1c
_LocaleUpdate::_LocaleUpdate(&var_1c, arg1)
void* ebx = nullptr
int32_t i = 0
void* var_18
int32_t ecx_1 = *(var_18 + 0x9c)
int32_t var_8 = ecx_1

do
    char* edx_1 = *(ecx_1 + (i << 2))
    void* eax
    
    do
        eax.b = *edx_1
        edx_1 = &edx_1[1]
    while (eax.b != 0)
    
    char* ecx_2 = *(ecx_1 + (i << 2) + 0x1c)
    
    do
        eax.b = *ecx_2
        ecx_2 = &ecx_2[1]
    while (eax.b != 0)
    
    ecx_1 = var_8
    ebx = ebx + 2 + ecx_2 - &ecx_2[1] + edx_1 - &edx_1[1]
    i += 1
while (i u< 7)

char* result = __malloc_base(ebx + 1)

if (result != 0)
    char* result_1 = result
    int32_t eax_11
    
    for (int32_t i_1 = 0; i_1 u< 7; i_1 += 1)
        *result_1 = 0x3a
        
        if (_strcpy_s(&result_1[1], result - &result_1[1] + ebx + 1, *(var_8 + (i_1 << 2))) != 0)
        label_70e5f4:
            int32_t var_3c
            __builtin_memset(&var_3c, 0, 0x14)
            __invoke_watson()
            noreturn
        
        void* ecx_7 = &result_1[1]
        void* edx_3 = ecx_7 + 1
        int32_t eax_6
        
        do
            eax_6.b = *ecx_7
            ecx_7 += 1
        while (eax_6.b != 0)
        void* esi_1 = &result_1[1] + ecx_7 - edx_3
        *esi_1 = 0x3a
        
        if (_strcpy_s(esi_1 + 1, result - (esi_1 + 1) + ebx + 1, *(var_8 + (i_1 << 2) + 0x1c)) != 0)
            goto label_70e5f4
        
        void* ecx_11 = esi_1 + 1
        void* edx_4 = ecx_11 + 1
        
        do
            eax_11.b = *ecx_11
            ecx_11 += 1
        while (eax_11.b != 0)
        
        result_1 = esi_1 + 1 + ecx_11 - edx_4
    
    *result_1 = eax_11.b

__free_base(0)
char var_10

if (var_10 != 0)
    void* ecx_14 = var_1c
    *(ecx_14 + 0x350) &= 0xfffffffd

return result
