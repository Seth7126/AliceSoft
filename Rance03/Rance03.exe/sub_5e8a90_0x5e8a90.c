// 函数: sub_5e8a90
// 地址: 0x5e8a90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
void* esi = *(arg1 + 4)
int32_t* eax_1 = (***(esi + 0x254))(0x6eb6f8)

if (eax_1 != 0)
    var_4.b = (**eax_1)()
else
    var_4.b = eax_1.b

return sub_5ea210(esi + 0x9c, **(esi + 0xc), *(esi + 0x10), *(esi + 0x60), var_4.b)
