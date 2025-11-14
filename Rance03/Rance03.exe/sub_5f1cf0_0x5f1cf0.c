// 函数: sub_5f1cf0
// 地址: 0x5f1cf0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edi = arg2
int32_t ebx = *(arg1 + 0x44)
int32_t eax_1 = ebx * arg3
int32_t ebx_1 = ebx * arg4
int32_t edx_3 = (((edi + 7) s>> 3) + 3) & 0xfffffffc
arg3 = ebx_1

if (arg5[1] - *arg5 != ebx_1 * edx_3)
    int32_t eax_4
    eax_4.b = 0
    return eax_4

char* ebp = (*(*(arg1 + 0xc) + 8))(0, ebx_1 - 1)
int32_t esi_1 = eax_1
arg4 = neg.d((*(*(arg1 + 0xc) + 0x1c))() + esi_1)
int32_t* ebx_3 = *arg5
arg5 = ebx_3
int32_t eax_9

if (arg3 s> 0)
    int32_t i
    
    do
        eax_9 = 0
        
        if (edi s> 0)
            do
                char ecx_4 = 7 - (eax_9.b & 7)
                int32_t edx_9 = eax_9 s>> 3
                eax_9 += 1
                *ebp = neg.b(((zx.d(*(edx_9 + ebx_3)) & 1 << ecx_4) s>> ecx_4).b)
                ebp = &ebp[1]
                ebx_3 = arg5
            while (eax_9 s< edi)
        
        if (eax_9 s< esi_1)
            int32_t esi_2 = esi_1 - eax_9
            int32_t edi_2 = __builtin_memset(ebp, 0, esi_2 u>> 2 << 2)
            ebp = &ebp[esi_2]
            esi_1 = eax_1
            __builtin_memset(edi_2, 0, esi_2 & 3)
            edi = arg2
        
        ebx_3 += edx_3
        ebp = &ebp[arg4]
        i = arg3
        arg3 -= 1
        arg5 = ebx_3
    while (i != 1)

eax_9.b = 1
return eax_9
