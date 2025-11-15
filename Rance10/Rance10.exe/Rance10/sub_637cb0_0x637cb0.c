// 函数: sub_637cb0
// 地址: 0x637cb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4_1 = arg1

if ((arg1[0x14] & 0x100) != 0 && sub_638390(arg1) != 0)
    int32_t edi_1 = arg1[0x11]
    
    if (edi_1 == 0)
        if ((arg1[0x14] & 0x100000) == 0)
            sub_6d0967(2)
            noreturn
        
        return sub_638020(&arg1[9], zx.d(edi_1.w))
    
    if (((arg1[0x14] & 0x200) != 0 && edi_1 u> 9) || arg1[3] s< edi_1 || arg1[8] u<= edi_1
            || (*(arg1[5] + (edi_1 u>> 5 << 2)) & 1 << (edi_1.b & 0x1f)) == 0)
        sub_6d0967(3)
        noreturn
    
    struct std::_Node_base::std::_Node_back::VTable** eax_7 = sub_6e810c(0x18)
    struct std::_Node_base::std::_Node_back::VTable** var_4 = eax_7
    eax_7[4] = 0
    eax_7[1] = 0xf
    eax_7[2] = 0
    eax_7[3] = 0
    *eax_7 = &std::_Node_back::`vftable'{for `std::_Node_base'}
    eax_7[5] = edi_1
    eax_7[4] = arg1[0xa]
    int32_t eax_10 = *(arg1[0xa] + 0xc)
    
    if (eax_10 != 0)
        eax_7[3] = eax_10
        *(*(arg1[0xa] + 0xc) + 0x10) = eax_7
    
    void* eax_13 = arg1[0xa]
    *(eax_13 + 0xc) = eax_7
    arg1[0xa] = eax_7
    return eax_13

if (sub_638780(arg1) != 0)
    return sub_638020(&arg1[9], zx.d(arg1[0x11].w))

if ((arg1[0x14] & 0x20000) != 0)
    char eax_3 = sub_638400(arg1, 1)
    
    if (eax_3 != 0)
        return eax_3

sub_6d0967(2)
noreturn
