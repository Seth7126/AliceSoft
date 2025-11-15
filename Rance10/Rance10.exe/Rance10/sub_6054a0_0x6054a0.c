// 函数: sub_6054a0
// 地址: 0x6054a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = *(arg3 + 0x20)

if (eax s>= 0 && eax s< *(arg2 + 0xc))
    *(arg2 + 0x14) = eax

int32_t result = *(arg3 + 0x24)

if (result == 0)
    result.b = 1
    return result

sub_416ab0(arg1 + 0x1c, result)
int32_t* i = *(arg1 + 0x1c)

for (int32_t edi_1 = *(arg1 + 0x20); i != edi_1; i = &i[6])
    if (sub_622cd0(arg2, i) == 0)
        return 0

return 1
