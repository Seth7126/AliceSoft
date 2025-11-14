// 函数: sub_617bb0
// 地址: 0x617bb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t var_4 = arg1
int32_t* eax = arg3
void* ebx_1 = arg4 - eax

if (arg4 != eax)
    int32_t* edx_1 = arg1[1]
    
    if (arg1[2] - edx_1 u>= ebx_1)
        _memcpy(edx_1, eax, ebx_1)
        void* edx_6 = arg1[1]
        int32_t ecx_8 = arg2
        void* eax_15 = edx_6 + ebx_1
        
        if (ecx_8 != edx_6 && edx_6 != eax_15)
            eax_15 = sub_469100(eax_15, edx_6, ecx_8, eax_15)
        
        arg1[1] += ebx_1
        return eax_15
    
    int32_t ecx_2 = *arg1
    
    if (ecx_2 - edx_1 - 1 u< ebx_1)
        sub_69a551("vector<T> too long")
        noreturn
    
    uint32_t eax_4 = sub_403600(arg1, edx_1 - ecx_2 + ebx_1)
    int32_t* ebp_1 = nullptr
    
    if (eax_4 != 0)
        if (eax_4 u<= 0xffffffff)
            ebp_1 = sub_69adc6(eax_4)
        
        if (eax_4 u> 0xffffffff || ebp_1 == 0)
            sub_69a4fc()
            noreturn
    
    int32_t* eax_6 = *arg1
    void* esi_2 = arg2 - eax_6
    void* esi_4 = arg4 - arg3
    _memcpy(_memcpy(_memcpy(ebp_1, eax_6, esi_2) + esi_2, arg3, esi_4) + esi_4, arg2, 
        arg1[1] - arg2)
    int32_t ecx_6 = *arg1
    void* ebx_2 = ebx_1 + arg1[1] - ecx_6
    
    if (ecx_6 != 0)
        j__free(ecx_6)
    
    *arg1 = ebp_1
    arg1[2] = eax_4 + ebp_1
    eax = ebx_2 + ebp_1
    arg1[1] = eax

return eax
