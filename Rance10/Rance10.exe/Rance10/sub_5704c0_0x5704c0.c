// 函数: sub_5704c0
// 地址: 0x5704c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

for (int32_t i = 0; i u<= 0xff; i += 1)
    uint32_t eax_2 = i u>> 1
    
    if ((i.b & 1) != 0)
        eax_2 ^= 0xedb88320
    
    uint32_t eax_4
    
    if ((eax_2.b & 1) == 0)
        eax_4 = eax_2 u>> 1
    else
        eax_4 = eax_2 u>> 1 ^ 0xedb88320
    
    uint32_t eax_6
    
    if ((eax_4.b & 1) == 0)
        eax_6 = eax_4 u>> 1
    else
        eax_6 = eax_4 u>> 1 ^ 0xedb88320
    
    uint32_t eax_8
    
    if ((eax_6.b & 1) == 0)
        eax_8 = eax_6 u>> 1
    else
        eax_8 = eax_6 u>> 1 ^ 0xedb88320
    
    uint32_t eax_10
    
    if ((eax_8.b & 1) == 0)
        eax_10 = eax_8 u>> 1
    else
        eax_10 = eax_8 u>> 1 ^ 0xedb88320
    
    uint32_t eax_12
    
    if ((eax_10.b & 1) == 0)
        eax_12 = eax_10 u>> 1
    else
        eax_12 = eax_10 u>> 1 ^ 0xedb88320
    
    uint32_t eax_14
    
    if ((eax_12.b & 1) == 0)
        eax_14 = eax_12 u>> 1
    else
        eax_14 = eax_12 u>> 1 ^ 0xedb88320
    
    uint32_t eax_16
    
    if ((eax_14.b & 1) == 0)
        eax_16 = eax_14 u>> 1
    else
        eax_16 = eax_14 u>> 1 ^ 0xedb88320
    
    *(arg1 + (i << 2)) = eax_16

return arg1
