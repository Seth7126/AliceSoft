// 函数: sub_52be50
// 地址: 0x52be50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4 = arg1

if (arg1 == arg2)
    return 

int32_t* esi_1 = &arg1[1]

if (esi_1 == arg2)
    return 

int32_t* eax = 4 - arg1
var_4 = eax

do
    int32_t edi_1 = *esi_1
    int32_t* edx = esi_1
    
    if (edi_1 s>= *arg1)
        int32_t ecx_1 = esi_1[-1]
        void* eax_7 = &esi_1[-1]
        
        while (edi_1 s< ecx_1)
            *edx = ecx_1
            edx = eax_7
            ecx_1 = *(eax_7 - 4)
            eax_7 -= 4
        
        *edx = edi_1
    else
        int32_t ecx = (&eax[-1] + esi_1) s>> 2 << 2
        _memcpy(esi_1 - ecx + 4, arg1, ecx)
        *arg1 = edi_1
    
    eax = var_4
    esi_1 = &esi_1[1]
while (esi_1 != arg2)
