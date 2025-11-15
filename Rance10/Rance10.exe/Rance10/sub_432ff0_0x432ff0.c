// 函数: sub_432ff0
// 地址: 0x432ff0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebx = arg2
int32_t* ebp = arg1
int32_t* var_c = ebp
int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x2aaaaaab, ebp[1] - *ebp)
int32_t edx_3 = edx_2 s>> 2
sub_6ca100(ebx, (edx_3 u>> 0x1f) + edx_3)
int32_t edi = ebp[1]
void* esi = *ebp

if (esi != edi)
    do
        int32_t eax_4 = *(esi + 0x14)
        void* edx_4
        
        if (eax_4 u< 0x10)
            edx_4 = esi
        else
            edx_4 = *esi
        
        void* ecx_1
        
        if (eax_4 u< 0x10)
            ecx_1 = esi
        else
            ecx_1 = *esi
        
        int32_t var_20_1 = 0.d
        sub_6ca200(ebx + 4, *(ebx + 8), ecx_1, edx_4 + *(esi + 0x10))
        arg2.b = 0
        sub_4263a0(ebx + 4, &arg2)
        esi += 0x18
    while (esi != edi)
    
    ebp = var_c

int32_t eax_6
int32_t edx_5
edx_5:eax_6 = muls.dp.d(0x2aaaaaab, ebp[4] - ebp[3])
int32_t edx_6 = edx_5 s>> 2
int32_t i_1 = (edx_6 u>> 0x1f) + edx_6
sub_6ca100(ebx, i_1)

if (i_1 s> 0)
    int32_t esi_1 = 0
    int32_t i
    
    do
        void** eax_9 = var_c[3] + esi_1
        arg2 = eax_9[4]
        int32_t ecx_8 = eax_9[5]
        void** edx_7
        
        if (ecx_8 u< 0x10)
            edx_7 = eax_9
        else
            edx_7 = *eax_9
        
        if (ecx_8 u>= 0x10)
            eax_9 = *eax_9
        
        int32_t var_20_4 = 0.d
        sub_6ca200(ebx + 4, *(ebx + 8), eax_9, arg2 + edx_7)
        arg2.b = 0
        sub_4263a0(ebx + 4, &arg2)
        void* ecx_13 = var_c[6]
        char* ecx_14 = ecx_13 + esi_1
        arg2 = *(ecx_13 + esi_1 + 0x10)
        int32_t edx_8 = *(ecx_14 + 0x14)
        char* eax_12
        
        if (edx_8 u< 0x10)
            eax_12 = ecx_14
        else
            eax_12 = *ecx_14
        
        if (edx_8 u>= 0x10)
            ecx_14 = *ecx_14
        
        int32_t var_20_6 = 0.d
        sub_6ca200(ebx + 4, *(ebx + 8), ecx_14, eax_12 + arg2)
        arg2.b = 0
        sub_4263a0(ebx + 4, &arg2)
        esi_1 += 0x18
        i = i_1
        i_1 -= 1
    while (i != 1)

void* result
result.b = 1
return result
