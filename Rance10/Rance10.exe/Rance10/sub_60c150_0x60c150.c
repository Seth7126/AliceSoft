// 函数: sub_60c150
// 地址: 0x60c150
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edx = arg3
int32_t eax = edx[5]
int32_t ebx = edx[4]
int32_t* edi

if (eax u< 0x10)
    edi = edx
else
    edi = *edx

int32_t ecx = 0
int32_t esi = 0x811c9dc5

if (ebx != 0)
    do
        uint32_t eax_1 = zx.d(*(edi + ecx))
        ecx += 1
        esi = (eax_1 ^ esi) * 0x1000193
    while (ecx u< ebx)

int32_t ecx_1 = *(arg1 + 0xc)
int32_t eax_4 = *(arg1 + 0x18) & esi
void** esi_1 = *(ecx_1 + (eax_4 << 3))
int32_t eax_5 = eax_4 * 2
int32_t edi_1 = *(ecx_1 + (eax_5 << 2))
int32_t edi_2 = *(arg1 + 4)
int32_t* eax_7 = ecx_1 + ((eax_5 + 1) << 2)
int32_t* var_c = eax_7

while (true)
    int32_t eax_8
    
    if (edi_1 != edi_2)
        eax_8 = **eax_7
    else
        eax_8 = edi_2
    
    if (esi_1 == eax_8)
        break
    
    int32_t* ecx_2 = &esi_1[2]
    
    if (edx[5] u>= 0x10)
        edx = *edx
    
    if (ecx_2[5] u>= 0x10)
        ecx_2 = *ecx_2
    
    int32_t ebp_2 = ecx_2[4]
    int32_t eax_10 = ebx
    
    if (ebp_2 u< ebx)
        eax_10 = ebp_2
    
    if (sub_406ac0(eax_10, edx, ecx_2, eax_10) == 0 && ebp_2 u>= ebx && ebp_2 u<= ebx)
        void** var_4_1 = esi_1
        
        while (true)
            int32_t eax_13
            
            if (edi_1 != edi_2)
                eax_13 = **var_c
            else
                eax_13 = edi_2
            
            if (esi_1 == eax_13)
                break
            
            void* edx_1 = &esi_1[2]
            void* ebp_3 = edx_1 + 0x10
            
            if (esi_1[7] u>= 0x10)
                edx_1 = *edx_1
            
            int32_t* ecx_3
            
            if (eax u< 0x10)
                ecx_3 = arg3
            else
                ecx_3 = *arg3
            
            int32_t ebp_4 = *ebp_3
            int32_t eax_17 = ebp_4
            
            if (ebx u< ebp_4)
                eax_17 = ebx
            
            if (sub_406ac0(eax_17, edx_1, ecx_3, eax_17) != 0)
                break
            
            if (ebx u< ebp_4)
                break
            
            if (ebx u> ebp_4)
                break
            
            esi_1 = *esi_1
        
        if (var_4_1 == esi_1)
            break
        
        arg2[1] = esi_1
        *arg2 = var_4_1
        return arg2
    
    esi_1 = *esi_1
    edx = arg3
    eax_7 = var_c

*arg2 = edi_2
arg2[1] = edi_2
return arg2
