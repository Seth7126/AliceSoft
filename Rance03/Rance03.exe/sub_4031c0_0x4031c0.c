// 函数: sub_4031c0
// 地址: 0x4031c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ecx = arg1[4]

if (0xffffffff - ecx u<= arg2)
    sub_69a551("string too long")
    noreturn

if (arg2 != 0)
    void* edi_1 = ecx + arg2
    
    if (edi_1 u> 0xfffffffe)
        sub_69a551("string too long")
        noreturn
    
    int32_t eax_1 = arg1[5]
    
    if (eax_1 u>= edi_1)
        if (edi_1 != 0)
            goto label_4031ff
        
        arg1[4] = edi_1
        
        if (eax_1 u< 0x10)
            *arg1 = 0
            return arg1
        
        **arg1 = 0
        return arg1
    
    sub_4023a0(arg1, edi_1, ecx)
    
    if (edi_1 != 0)
    label_4031ff:
        sub_403270(arg1, arg1[4], arg2, arg3)
        bool cond:0_1 = arg1[5] u< 0x10
        arg1[4] = edi_1
        
        if (not(cond:0_1))
            *(*arg1 + edi_1) = 0
            return arg1
        
        *(arg1 + edi_1) = 0

return arg1
