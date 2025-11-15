// 函数: __W_Getdays
// 地址: 0x70fa21
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_2c = edi
int32_t ebx = 0
int16_t j = 0
void* var_20
_LocaleUpdate::_LocaleUpdate(&var_20, nullptr)
int32_t i_3 = 7
void* var_1c
int32_t eax_2 = *(var_1c + 0x9c) + 0xd0
int32_t var_c = eax_2
void* esi = eax_2
int32_t i

do
    int16_t* edx_1 = *(esi - 0x1c)
    
    do
        eax_2.w = *edx_1
        edx_1 = &edx_1[1]
    while (eax_2.w != j)
    
    int16_t* ecx_2 = *esi
    void* eax_3
    
    do
        eax_3.w = *ecx_2
        ecx_2 = &ecx_2[1]
    while (eax_3.w != j)
    esi += 4
    ebx = ebx + 2 + ((ecx_2 - &ecx_2[1]) s>> 1) + ((edx_1 - &edx_1[1]) s>> 1)
    i = i_3
    i_3 -= 1
while (i != 1)
int16_t* result = __malloc_base((ebx << 1) + 2)

if (result != 0)
    int32_t i_2 = 0
    int16_t* result_1 = result
    int32_t eax_6 = var_c
    int32_t i_1
    
    do
        *result_1 = 0x3a
        
        if (_wcscpy_s(&result_1[1], ebx - ((&result_1[1] - result) s>> 1) + 1, *(eax_6 - 0x1c))
            != 0)
        label_70fb7b:
            int32_t var_40
            __builtin_memset(&var_40, 0, 0x14)
            __invoke_watson()
            noreturn
        
        void* ecx_9 = &result_1[1]
        void* edx_4 = ecx_9 + 2
        int32_t eax_10
        
        do
            eax_10.w = *ecx_9
            ecx_9 += 2
        while (eax_10.w != j)
        void* esi_2 = &result_1[1 + ((ecx_9 - edx_4) s>> 1)]
        *esi_2 = 0x3a
        
        if (_wcscpy_s(esi_2 + 2, ebx - ((esi_2 + 2 - result) s>> 1) + 1, *var_c) != 0)
            goto label_70fb7b
        
        void* ecx_15 = esi_2 + 2
        void* edx_5 = ecx_15 + 2
        int32_t eax_15
        
        do
            eax_15.w = *ecx_15
            ecx_15 += 2
        while (eax_15.w != j)
        eax_6 = var_c + 4
        var_c = eax_6
        result_1 = esi_2 + 2 + ((ecx_15 - edx_5) s>> 1 << 1)
        i_1 = i_2 + 1
        i_2 = i_1
    while (i_1 u< 7)
    *result_1 = 0
else
    result = nullptr

__free_base(0)
char var_14

if (var_14 != 0)
    void* ecx_20 = var_20
    *(ecx_20 + 0x350) &= 0xfffffffd

return result
