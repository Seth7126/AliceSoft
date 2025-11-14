// 函数: sub_5e85c0
// 地址: 0x5e85c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x60) != arg2)
    int32_t* ecx = *(arg1 + 0x254)
    *(arg1 + 0x60) = arg2
    int32_t* eax_1 = (**ecx)(0x6eb6f8)
    
    if (eax_1 != 0)
        arg2.b = (**eax_1)()
    else
        arg2.b = eax_1.b
    
    sub_5ea210(arg1 + 0x9c, **(arg1 + 0xc), *(arg1 + 0x10), *(arg1 + 0x60), arg2.b)

int32_t result
result.b = 1
return result
