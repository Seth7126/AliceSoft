// 函数: sub_669130
// 地址: 0x669130
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4_1 = arg1
int32_t* eax = arg3
int32_t ebx_2 = (arg4 - eax) s>> 2

if (ebx_2 != 0)
    int32_t* edx_1 = arg1[1]
    
    if ((arg1[2] - edx_1) s>> 2 u< ebx_2)
        int32_t edx_3 = (edx_1 - *arg1) s>> 2
        
        if (0x3fffffff - edx_3 u< ebx_2)
            sub_69a551("vector<T> too long")
            noreturn
        
        int32_t eax_3 = sub_4159d0(arg1, edx_3 + ebx_2)
        int32_t* eax_4 = sub_415a10(eax_3)
        int32_t* edx_4 = *arg1
        _memcpy(
            &_memcpy(&_memcpy(eax_4, edx_4, (arg2 - edx_4) s>> 2 << 2)[(arg2 - edx_4) s>> 2], arg3, 
                (arg4 - arg3) s>> 2 << 2)[(arg4 - arg3) s>> 2], 
            arg2, (arg1[1] - arg2) & 0xfffffffc)
        int32_t ecx_11 = *arg1
        int32_t ebx_3 = ebx_2 + ((arg1[1] - ecx_11) s>> 2)
        
        if (ecx_11 != 0)
            j__free(ecx_11)
        
        *arg1 = eax_4
        arg1[2] = &eax_4[eax_3]
        void* eax_16 = &eax_4[ebx_3]
        arg1[1] = eax_16
        return eax_16
    
    int32_t ebx_4 = ebx_2 << 2
    _memcpy(edx_1, eax, ebx_4)
    int32_t edx_9 = arg1[1]
    int32_t ecx_13 = arg2
    eax = ebx_4 + edx_9
    
    if (ecx_13 != edx_9 && edx_9 != eax)
        eax = sub_5353d0(eax, edx_9, ecx_13, eax)
    
    arg1[1] += ebx_4

return eax
