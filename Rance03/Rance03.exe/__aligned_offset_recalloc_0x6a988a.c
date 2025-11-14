// 函数: __aligned_offset_recalloc
// 地址: 0x6a988a
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t edi = 0

if (arg2 != 0 && divu.dp.d(0:0xffffffe0, arg2) u< arg3)
    *__errno() = 0xc
    return 0

uint32_t esi_1 = arg2 * arg3

if (arg1 != 0)
    edi = __msize(arg1)

int32_t result = _realloc(arg1, esi_1)

if (result != 0 && edi u< esi_1)
    _memset(edi + result, 0, esi_1 - edi)

return result
