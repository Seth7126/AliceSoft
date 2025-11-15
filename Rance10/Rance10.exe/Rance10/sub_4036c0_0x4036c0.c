// 函数: sub_4036c0
// 地址: 0x4036c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 u> 0xfffffffe)
    sub_6d0927("string too long")
    noreturn

if (arg1[5] u< arg2)
    sub_403830(arg1, arg2, arg1[4])
    void* eax_1
    eax_1.b = arg2 != 0
    return eax_1

if (arg3 != 0 && arg2 u< 0x10)
    void* eax_2 = arg1[4]
    
    if (arg2 u< eax_2)
        eax_2 = arg2
    
    sub_4033f0(arg1, 1, eax_2)
    int32_t eax_3
    eax_3.b = arg2 != 0
    return eax_3

bool cond:1 = arg2 != 0

if (arg2 == 0)
    bool cond:2_1 = arg1[5] u< 0x10
    arg1[4] = arg2
    
    if (not(cond:2_1))
        arg1 = *arg1
    
    *arg1 = 0
    cond:1 = arg2 != 0

int32_t eax
eax.b = cond:1
return eax
