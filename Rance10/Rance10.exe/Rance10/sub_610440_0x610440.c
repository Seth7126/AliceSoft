// 函数: sub_610440
// 地址: 0x610440
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax_1 = (**arg2)(0x76b35c)
*(arg1 + 0x14) = eax_1

if (eax_1 != 0)
    eax_1 = (**arg2)(0x76b2bc)
    *(arg1 + 0x18) = eax_1
    
    if (eax_1 != 0)
        eax_1 = (**arg2)(0x76b34c)
        *(arg1 + 0x1c) = eax_1
        
        if (eax_1 != 0)
            eax_1 = (**arg2)(0x76b2fc)
            *(arg1 + 0x20) = eax_1
            
            if (eax_1 != 0)
                int32_t eax_6 = (**arg2)(0x76b3cc)
                *(arg1 + 0x24) = eax_6
                eax_6.b = eax_6 != 0
                return eax_6

eax_1.b = 0
return eax_1
