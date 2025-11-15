// 函数: sub_582c40
// 地址: 0x582c40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char result = *(arg1 + 0x1b0)

if (result != 0)
    sub_4068c0(*(arg1 + 0x248))
    char result_1 = *(arg1 + 0x1b0)
    *(arg1 + 0x1b0) = 0
    result = result_1

__builtin_memset(arg1 + 0x18c, 0, 0x18)
int32_t* edi_1 = *(arg1 + 0x1ac)
*(arg1 + 0x1ac) = 0

if (edi_1 == 0)
    return result

sub_586a00(edi_1)
int32_t var_c_1 = 0x24
return operator new(edi_1)
