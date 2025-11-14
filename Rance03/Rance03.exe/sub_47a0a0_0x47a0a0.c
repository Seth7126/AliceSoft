// 函数: sub_47a0a0
// 地址: 0x47a0a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4_1 = arg1
int32_t edx = *arg1
int32_t* ebp = arg1[1]

if ((arg1[2] - ebp) s>> 2 u>= 1)
    int32_t edx_3 = (ebp - arg3) s>> 2
    
    if (edx_3 u>= 1)
        arg4 = *arg4
        arg1[1] = &_memcpy(ebp, &ebp[-1], (0 + 4) s>> 2 << 2)[(0 + 4) s>> 2]
        void* ecx_17 = (&ebp[-1] - arg3) s>> 2 << 2
        _memcpy(ebp - ecx_17, arg3, ecx_17)
        sub_47a250(&arg4, &arg3[1], arg3, &arg4)
    else
        int32_t* ebp_4 = *arg4
        arg4 = ebp_4
        _memcpy(&arg3[1], arg3, edx_3 << 2)
        int32_t edi_1 = arg1[1]
        void* ecx_14 = arg3
        int32_t edx_6 = (edi_1 - ecx_14) s>> 2
        
        if (1 != edx_6)
            int32_t ecx_16
            int32_t edi_2
            edi_2, ecx_16 = __memfill_u32(edi_1, ebp_4, 1 - edx_6)
            ecx_14 = arg3
        
        arg1[1] += 4
        sub_47a250(&arg4, arg1[1] - 4, ecx_14, &arg4)
else
    int32_t ebp_2 = (ebp - edx) s>> 2
    
    if (0x3fffffff - ebp_2 u< 1)
        sub_69a551("vector<T> too long")
        noreturn
    
    int32_t eax_3 = sub_4159d0(arg1, ebp_2 + 1)
    int32_t* eax_4 = sub_415a10(eax_3)
    int32_t esi_2 = (arg3 - *arg1) s>> 2
    sub_420d20(&eax_4[esi_2], 1, arg4)
    int32_t* ecx_8 = *arg1
    _memcpy(eax_4, ecx_8, (arg3 - ecx_8) & 0xfffffffc)
    _memcpy(&eax_4[esi_2 + 1], arg3, (arg1[1] - arg3) & 0xfffffffc)
    int32_t eax_10 = *arg1
    int32_t esi_7 = ((arg1[1] - eax_10) s>> 2) + 1
    
    if (eax_10 != 0)
        j__free(eax_10)
    
    *arg1 = eax_4
    arg1[2] = &eax_4[eax_3]
    arg1[1] = &eax_4[esi_7]

*arg2 = *arg1 + ((arg3 - edx) s>> 2 << 2)
return arg2
