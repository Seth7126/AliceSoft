// 函数: sub_5fe4c0
// 地址: 0x5fe4c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp = arg3
void* ebx = arg2
void* ecx = arg4
void* var_1c = ebx
void* esi = ebx
void* eax = ecx - 1
int32_t var_10 = ebp
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(eax)
void* var_4 = ebx
int32_t eax_3 = (eax_1 - edx) s>> 1
int32_t var_c = eax_3

if (ebx s< eax_3)
    do
        esi = (esi << 1) + 2
        void* eax_7 = esi * 0x38 + ebp
        int32_t eax_8
        uint32_t edx_1
        eax_8, edx_1 = __allmul(*(eax_7 + 0x30), *(eax_7 + 0x34), 0x3e8, 0)
        uint32_t ebx_1 = data_7fcbec
        int32_t edi_1 = data_7fcbe8
        uint32_t eax_9
        int32_t edx_2
        eax_9, edx_2 = __alldiv(eax_8, edx_1, edi_1, ebx_1)
        int32_t eax_10
        uint32_t edx_3
        eax_10, edx_3 = __allmul(*(eax_7 - 8), *(eax_7 - 4), 0x3e8, 0)
        uint32_t eax_11
        int32_t edx_4
        eax_11, edx_4 = __alldiv(eax_10, edx_3, edi_1, ebx_1)
        
        if (edx_2 s>= edx_4 && (edx_2 s> edx_4 || eax_9 u> eax_11))
            esi -= 1
        
        ebp = var_10
        void* edi_3 = esi * 0x38 + ebp
        void* ebx_3 = var_1c * 0x38 + ebp
        
        if (ebx_3 + 8 != edi_3 + 8)
            sub_403590(ebx_3 + 8, edi_3 + 8, 0, 0xffffffff)
        
        *(ebx_3 + 0x20) = *(edi_3 + 0x20)
        sub_5fe0d0(ebx_3 + 0x24, edi_3 + 0x24)
        *(ebx_3 + 0x30) = *(edi_3 + 0x30)
        *(ebx_3 + 0x34) = *(edi_3 + 0x34)
        ebx = esi
        eax_3 = var_c
        var_1c = esi
    while (esi s< eax_3)
    
    ecx = arg4

if (esi == eax_3 && (ecx.b & 1) == 0)
    void* esi_2 = ecx * 0x38 + ebp
    void* edi_5 = ebx * 0x38 + ebp
    
    if (edi_5 + 8 != esi_2 - 0x30)
        sub_403590(edi_5 + 8, esi_2 - 0x30, 0, 0xffffffff)
    
    *(edi_5 + 0x20) = *(esi_2 - 0x18)
    ecx = sub_5fe0d0(edi_5 + 0x24, esi_2 - 0x14)
    ebx = eax
    *(edi_5 + 0x30) = *(esi_2 - 8)
    eax_3 = *(esi_2 - 4)
    *(edi_5 + 0x34) = eax_3

void* var_30_5 = ecx
return sub_5fe9f0(eax_3, ebx, ebp, var_4, arg5)
