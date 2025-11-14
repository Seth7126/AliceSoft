// 函数: sub_10012170
// 地址: 0x10012170
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t* esi = arg1

if ((*(*esi + 0x50))(arg2, 0) s>= 0)
    return 0

int32_t result = sub_10011770(esi, &arg1)

if (result s>= 0)
    int32_t* edi_1 = arg1
    result = sub_10012080(edi_1, arg2)
    (*(*edi_1 + 8))(edi_1)

return result
