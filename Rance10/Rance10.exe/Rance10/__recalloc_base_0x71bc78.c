// 函数: __recalloc_base
// 地址: 0x71bc78
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 != 0 && divu.dp.d(0:0xffffffe0, arg2) u< arg3)
    *__errno() = 0xc
    return 0

int32_t edi
int32_t var_10_1 = edi
uint32_t edi_1

if (arg1 == 0)
    edi_1 = 0
else
    edi_1 = _msize_base(arg1)

uint32_t esi_1 = arg2 * arg3
int32_t result = __realloc_base(arg1, esi_1)

if (result != 0 && edi_1 u< esi_1)
    _memset(result + edi_1, 0, esi_1 - edi_1)

return result
