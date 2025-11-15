// 函数: sub_503600
// 地址: 0x503600
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = arg1
char* ecx = *(edi + 4)
uint32_t eax

if (&ecx[4] u> *(edi + 8))
label_5036be:
    eax.b = 0
    return eax

int32_t ebx_1 = 0
uint32_t ebp_7 = ((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8 | zx.d(*ecx)
*(edi + 4) = &ecx[4]
uint32_t eax_3

if (ebp_7 s> 0)
    uint32_t arg_8
    int32_t* esi_1 = arg_8
    
    do
        eax = sub_502fc0(edi)
        arg_8 = eax
        
        if (eax == 0)
            goto label_5036be
        
        eax_3 = esi_1[1]
        uint32_t* ecx_2 = &arg_8
        
        if (&arg_8 u< eax_3)
            ecx_2 = *esi_1
        
        if (&arg_8 u>= eax_3 || ecx_2 u> &arg_8)
            if (eax_3 == esi_1[2])
                uint32_t* var_18_2 = ecx_2
                sub_42cd50(esi_1)
            
            eax_3 = esi_1[1]
            
            if (eax_3 != 0)
                *eax_3 = eax
        else
            if (eax_3 == esi_1[2])
                uint32_t* var_18_1 = ecx_2
                sub_42cd50(esi_1)
            
            uint32_t* ecx_4 = esi_1[1]
            
            if (ecx_4 != 0)
                *ecx_4 = *(*esi_1 + ((&arg_8 - ecx_2) s>> 2 << 2))
        
        esi_1[1] += 4
        ebx_1 += 1
        edi = arg1
    while (ebx_1 s< ebp_7)

eax_3.b = 1
return eax_3
