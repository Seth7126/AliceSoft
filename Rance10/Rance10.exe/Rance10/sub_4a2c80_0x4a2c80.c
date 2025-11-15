// 函数: sub_4a2c80
// 地址: 0x4a2c80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
int32_t* eax_1 = (***(arg1 + 0x2b8))(0x760ebc)

if (eax_1 != 0)
    var_4.b = (**eax_1)()
else
    var_4.b = eax_1.b

int32_t result = std::locale::_Locimp::_Locimp_dtor(arg1 + 0x10c, **(arg1 + 0x10), *(arg1 + 0x14), 
    *(arg1 + 0x12c), *(arg1 + 0x130), *(arg1 + 0x138), *(arg1 + 0x13c), var_4.b, arg1 + 0x114)
return result
