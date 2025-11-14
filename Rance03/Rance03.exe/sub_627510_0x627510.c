// 函数: sub_627510
// 地址: 0x627510
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 == 0)
    return 0

int32_t eax_1 = *(arg1 + 0x274)
char* result

if (eax_1 == 0)
    result = _malloc(0x10c)
else
    result = eax_1(arg1, 0x10c)

if (result != 0)
    _memset(result, 0, 0x10c)

return result
