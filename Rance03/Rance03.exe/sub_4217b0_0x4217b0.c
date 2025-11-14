// 函数: sub_4217b0
// 地址: 0x4217b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg2 != 0)
    char* ecx = arg1[5]
    int32_t* eax_1
    
    if (ecx u< 0x10)
        eax_1 = arg1
    else
        eax_1 = *arg1
    
    if (arg2 u>= eax_1)
        int32_t* edx_1
        
        if (ecx u< 0x10)
            edx_1 = arg1
        else
            edx_1 = *arg1
        
        if (arg1[4] + edx_1 u> arg2)
            if (ecx u< 0x10)
                void* __saved_ebx_1 = arg3
                return sub_410b30(arg1, ecx, arg1, arg2 - arg1)
            
            void* __saved_ebx = arg3
            return sub_410b30(arg1, ecx, arg1, arg2 - *arg1)

void* ecx_3 = arg1[4]

if (0xffffffff - ecx_3 u<= arg3)
    sub_69a551("string too long")
    noreturn

if (arg3 != 0)
    void* ebp_1 = ecx_3 + arg3
    
    if (sub_4022d0(arg1, ebp_1, 0) != 0)
        int32_t eax_10 = arg1[5]
        int32_t* edx_2
        
        if (eax_10 u< 0x10)
            edx_2 = arg1
        else
            edx_2 = *arg1
        
        int32_t* eax_11
        
        if (eax_10 u< 0x10)
            eax_11 = arg1
        else
            eax_11 = *arg1
        
        void* ecx_5 = arg1[4]
        
        if (ecx_5 != 0)
            _memcpy(eax_11 + arg3, edx_2, ecx_5)
        
        int32_t* eax_13
        
        if (arg1[5] u< 0x10)
            eax_13 = arg1
        else
            eax_13 = *arg1
        
        if (arg3 != 0)
            sub_69d850(eax_13, arg2, arg3)
        
        sub_4022b0(arg1, ebp_1)

return arg1
