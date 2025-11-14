// 函数: sub_4057c0
// 地址: 0x4057c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg2 != 0)
    int32_t ecx = arg1[5]
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
                return sub_403110(arg1, arg1, arg2 - arg1, arg3)
            
            return sub_403110(arg1, arg1, arg2 - *arg1, arg3)

void* ecx_3 = arg1[4]

if (0xffffffff - ecx_3 u<= arg3)
    sub_69a551("string too long")
    noreturn

if (arg3 != 0)
    void* ebp_1 = ecx_3 + arg3
    
    if (sub_4022d0(arg1, ebp_1, 0) != 0)
        int32_t* ecx_5
        
        if (arg1[5] u< 0x10)
            ecx_5 = arg1
        else
            ecx_5 = *arg1
        
        if (arg3 != 0)
            sub_69d850(arg1[4] + ecx_5, arg2, arg3)
        
        bool cond:0_1 = arg1[5] u< 0x10
        arg1[4] = ebp_1
        
        if (not(cond:0_1))
            *(*arg1 + ebp_1) = 0
            return arg1
        
        *(arg1 + ebp_1) = 0

return arg1
