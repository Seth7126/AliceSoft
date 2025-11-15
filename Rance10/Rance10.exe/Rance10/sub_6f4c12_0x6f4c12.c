// 函数: sub_6f4c12
// 地址: 0x6f4c12
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_8 = arg1
int32_t eax = 0x80000000

if (0x80000000 == *(arg1 + 0x14))
    *(arg1 + 0x14) = 0x80000001
else
    eax = *(arg1 + 0x14)

if (eax != 0x80000000)
    int32_t var_10_1 = 0
    int32_t (* var_c_1)() = sub_6eb74c
    
    while (*(arg1 + 0x14) s<= 0x80000001)
        void var_18
        eax = Concurrency::details::_SpinWait<1>::_SpinOnce(&var_18)
    
    return eax

if (arg1 != 0xffffffe4)
    *(arg1 + 0x1c) = 0

int32_t temp0_1 = *(arg1 + 0x14)
*(arg1 + 0x14) = 0
return temp0_1
