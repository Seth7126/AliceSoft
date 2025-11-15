// 函数: sub_490ba0
// 地址: 0x490ba0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_4_1 = ecx
void** ebp = arg2
int32_t ebx = ebp[5]
int32_t edi = ebp[4]
void** esi

if (ebx u< 0x10)
    esi = ebp
else
    esi = *ebp

int32_t ecx_1 = 0
int32_t edx = 0x811c9dc5

if (edi != 0)
    do
        uint32_t eax_1 = zx.d(*(esi + ecx_1))
        ecx_1 += 1
        edx = (eax_1 ^ edx) * 0x1000193
    while (ecx_1 u< edi)

int32_t edx_1 = edx & data_7fd584
int32_t ecx_2 = data_7fd578
void** esi_1 = *(ecx_2 + (edx_1 << 3))
void** edx_2 = *(ecx_2 + ((edx_1 * 2 + 1) << 2) - 4)
void*** eax_5 = ecx_2 + ((edx_1 * 2 + 1) << 2)
arg2 = edx_2
void*** var_4 = eax_5
void* ecx_3

while (true)
    ecx_3 = data_7fd570
    void* eax_6
    
    if (edx_2 != ecx_3)
        eax_6 = **eax_5
    else
        eax_6 = ecx_3
    
    if (esi_1 == eax_6)
        break
    
    void* ecx_4 = &esi_1[2]
    int32_t* edx_3
    
    if (ebx u< 0x10)
        edx_3 = ebp
    else
        edx_3 = *ebp
    
    void* ebx_1 = ecx_4 + 0x10
    
    if (*(ecx_4 + 0x14) u>= 0x10)
        ecx_4 = *ecx_4
    
    int32_t ebx_2 = *ebx_1
    int32_t eax_8 = edi
    
    if (ebx_2 u< edi)
        eax_8 = ebx_2
    
    if (sub_406ac0(eax_8, edx_3, ecx_4, eax_8) == 0 && ebx_2 u>= edi && ebx_2 u<= edi)
        int32_t* edx_4 = &esi_1[2]
        
        if (esi_1[7] u>= 0x10)
            edx_4 = *edx_4
        
        if (ebp[5] u>= 0x10)
            ebp = *ebp
        
        int32_t ebx_4 = edx_4[4]
        int32_t eax_10 = ebx_4
        
        if (edi u< ebx_4)
            eax_10 = edi
        
        if (sub_406ac0(eax_10, edx_4, ebp, eax_10) != 0 || edi u< ebx_4 || edi u> ebx_4)
            esi_1 = data_7fd570
        
        *arg1 = esi_1
        return arg1
    
    esi_1 = *esi_1
    ebx = ebp[5]
    edx_2 = arg2
    eax_5 = var_4

*arg1 = ecx_3
return arg1
