// 函数: sub_46a310
// 地址: 0x46a310
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg7 s<= 0 || arg8 s<= 0)
    return 

void* esi_1 = (*(*arg1 + 8))(arg2, arg3)
int32_t* eax_3 = (*(*arg4 + 8))(arg5, arg6)
int32_t edi_1 = arg7 << 2
int32_t eax_5 = (*(*arg1 + 0x1c))() - edi_1
int32_t eax_7 = (*(*arg4 + 0x1c))() - edi_1
int32_t i_1 = arg8

if (i_1 s<= 0)
    return 

int32_t* ebp_2 = eax_3
int32_t* ecx_5 = arg7
int32_t edx_3 = eax_5
int32_t ebx_2 = eax_7
int32_t i

do
    if (ecx_5 s> 0)
        void* ebx_3 = ebp_2 + 3
        arg1 = ecx_5
        int32_t* j
        
        do
            uint32_t edi_2 = zx.d(*ebx_3)
            uint32_t eax_9 = zx.d(*(esi_1 + 1))
            *esi_1 += (((zx.d(*ebp_2) - zx.d(*esi_1)) * edi_2) s>> 8).b
            uint32_t eax_10 = zx.d(*(esi_1 + 2))
            *(esi_1 + 1) += (((zx.d(*(ebx_3 - 2)) - eax_9) * edi_2) s>> 8).b
            void* edx_12 = esi_1 + 3
            *(esi_1 + 2) += (((zx.d(*(ebx_3 - 1)) - eax_10) * edi_2) s>> 8).b
            void* ecx_11 = ebx_3
            
            if (*ebx_3 u< *edx_12)
                ecx_11 = edx_12
            
            esi_1 += 4
            ebp_2 = &ebp_2[1]
            ebx_3 += 4
            j = arg1
            arg1 -= 1
            *edx_12 = *ecx_11
        while (j != 1)
        i_1 = arg8
        ecx_5 = arg7
        edx_3 = eax_5
        ebx_2 = eax_7
    
    esi_1 += edx_3
    ebp_2 += ebx_2
    i = i_1
    i_1 -= 1
    arg8 = i_1
while (i != 1)
