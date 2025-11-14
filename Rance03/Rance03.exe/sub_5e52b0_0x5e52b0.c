// 函数: sub_5e52b0
// 地址: 0x5e52b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
int32_t* eax_1 = (***(arg1 + 0x254))(0x6eb6f8)

if (eax_1 != 0)
    var_4.b = (**eax_1)()
else
    var_4.b = eax_1.b

return sub_5ea210(arg1 + 0x9c, **(arg1 + 0xc), *(arg1 + 0x10), *(arg1 + 0x60), var_4.b)
