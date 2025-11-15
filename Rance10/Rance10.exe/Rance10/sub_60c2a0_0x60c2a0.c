// 函数: sub_60c2a0
// 地址: 0x60c2a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** ebp = arg3
int32_t edi = ebp[4]
void** esi

if (ebp[5] u< 0x10)
    esi = ebp
else
    esi = *ebp

int32_t ecx = 0
int32_t edx = 0x811c9dc5

if (edi != 0)
    do
        uint32_t eax_1 = zx.d(*(esi + ecx))
        ecx += 1
        edx = (eax_1 ^ edx) * 0x1000193
    while (ecx u< edi)

int32_t ecx_1 = *(arg1 + 0xc)
int32_t eax_4 = *(arg1 + 0x18) & edx
void** esi_1 = *(ecx_1 + (eax_4 << 3))
int32_t eax_5 = eax_4 * 2
void** edx_1 = *(ecx_1 + (eax_5 << 2))
void* edx_2 = *(arg1 + 4)
void* var_c = edx_2
void*** eax_7 = ecx_1 + ((eax_5 + 1) << 2)
void*** var_8 = eax_7

while (true)
    void* eax_8
    
    if (edx_1 != edx_2)
        eax_8 = **eax_7
    else
        eax_8 = edx_2
    
    if (esi_1 == eax_8)
        break
    
    void* ecx_2 = &esi_1[2]
    int32_t* edx_3
    
    if (ebp[5] u< 0x10)
        edx_3 = ebp
    else
        edx_3 = *ebp
    
    void* ebx_1 = ecx_2 + 0x10
    
    if (*(ecx_2 + 0x14) u>= 0x10)
        ecx_2 = *ecx_2
    
    int32_t ebx_2 = *ebx_1
    int32_t eax_10 = edi
    
    if (ebx_2 u< edi)
        eax_10 = ebx_2
    
    if (sub_406ac0(eax_10, edx_3, ecx_2, eax_10) == 0 && ebx_2 u>= edi && ebx_2 u<= edi)
        int32_t* edx_4 = &esi_1[2]
        
        if (esi_1[7] u>= 0x10)
            edx_4 = *edx_4
        
        if (ebp[5] u>= 0x10)
            ebp = *ebp
        
        int32_t ebx_4 = edx_4[4]
        int32_t eax_12 = ebx_4
        
        if (edi u< ebx_4)
            eax_12 = edi
        
        if (sub_406ac0(eax_12, edx_4, ebp, eax_12) != 0 || edi u< ebx_4 || edi u> ebx_4)
            esi_1 = *(arg1 + 4)
        
        *arg2 = esi_1
        return arg2
    
    esi_1 = *esi_1
    edx_2 = var_c
    eax_7 = var_8

*arg2 = edx_2
return arg2
