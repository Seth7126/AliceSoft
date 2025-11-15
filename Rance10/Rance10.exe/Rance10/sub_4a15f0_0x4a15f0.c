// 函数: sub_4a15f0
// 地址: 0x4a15f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
int32_t* eax_1 = (***(arg1 + 0x2b4))(0x760ebc)

if (eax_1 != 0)
    var_4.b = (**eax_1)()
else
    var_4.b = eax_1.b

return sub_4a5380(arg1 + 0xbc, **(arg1 + 0xc), *(arg1 + 0x10), *(arg1 + 0x7c), var_4.b)
