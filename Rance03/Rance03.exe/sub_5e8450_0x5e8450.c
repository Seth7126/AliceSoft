// 函数: sub_5e8450
// 地址: 0x5e8450
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
int32_t* eax_1 = (***(arg1 + 0x254))(0x6eb6f8)

if (eax_1 != 0)
    var_4.b = (**eax_1)()
else
    var_4.b = eax_1.b

int32_t result = sub_5e1e30(arg1 + 0xe0, **(arg1 + 0xc), *(arg1 + 0x10), *(arg1 + 0xfc), 
    *(arg1 + 0x100), *(arg1 + 0x104), *(arg1 + 0x108), var_4.b, arg1 + 0xe8)
return result
