// 函数: __Getmonths_l
// 地址: 0x70e604
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_28 = edi
void* var_1c
_LocaleUpdate::_LocaleUpdate(&var_1c, arg1)
void* ebx = nullptr
int32_t i_3 = 0xc
void* var_18
void* eax_2 = *(var_18 + 0x9c) + 0x68
int32_t* var_8 = eax_2
void* esi = eax_2
int32_t i

do
    char* ecx_1 = *(esi - 0x30)
    
    do
        eax_2.b = *ecx_1
        ecx_1 = &ecx_1[1]
    while (eax_2.b != 0)
    
    char* edx_2 = *esi
    void* eax_3
    
    do
        eax_3.b = *edx_2
        edx_2 = &edx_2[1]
    while (eax_3.b != 0)
    esi += 4
    ebx = ebx + 2 + edx_2 - &edx_2[1] + ecx_1 - &ecx_1[1]
    i = i_3
    i_3 -= 1
while (i != 1)
char* result = __malloc_base(ebx + 1)

if (result != 0)
    int32_t i_2 = 0
    char* result_1 = result
    void* eax_5 = var_8
    int32_t i_1
    
    do
        *result_1 = 0x3a
        
        if (_strcpy_s(&result_1[1], result - &result_1[1] + 1 + ebx, *(eax_5 - 0x30)) != 0)
        label_70e713:
            int32_t var_3c
            __builtin_memset(&var_3c, 0, 0x14)
            __invoke_watson()
            noreturn
        
        void* ecx_4 = &result_1[1]
        void* edx_4 = ecx_4 + 1
        int32_t eax_10
        
        do
            eax_10.b = *ecx_4
            ecx_4 += 1
        while (eax_10.b != 0)
        void* esi_2 = &result_1[1] + ecx_4 - edx_4
        *esi_2 = 0x3a
        
        if (_strcpy_s(esi_2 + 1, result - (esi_2 + 1) + 1 + ebx, *var_8) != 0)
            goto label_70e713
        
        void* ecx_6 = esi_2 + 1
        void* edx_5 = ecx_6 + 1
        int32_t eax_16
        
        do
            eax_16.b = *ecx_6
            ecx_6 += 1
        while (eax_16.b != 0)
        result_1 = esi_2 + 1 + ecx_6 - edx_5
        eax_5 = &var_8[1]
        i_1 = i_2 + 1
        var_8 = eax_5
        i_2 = i_1
    while (i_1 u< 0xc)
    *result_1 = 0

__free_base(0)
char var_10

if (var_10 != 0)
    void* ecx_10 = var_1c
    *(ecx_10 + 0x350) &= 0xfffffffd

return result
