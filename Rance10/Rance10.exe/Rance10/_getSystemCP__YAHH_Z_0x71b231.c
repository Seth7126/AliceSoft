// 函数: ?getSystemCP@@YAHH@Z
// 地址: 0x71b231
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_14
_LocaleUpdate::_LocaleUpdate(&var_14, nullptr)
data_7fcb04 = 0
uint32_t result = arg1

if (result == 0xfffffffe)
    data_7fcb04 = 1
    result = GetOEMCP()
else if (result == 0xfffffffd)
    data_7fcb04 = 1
    result = GetACP()
else if (result == 0xfffffffc)
    data_7fcb04 = 1
    void* var_10
    result = *(var_10 + 8)

char var_8

if (var_8 != 0)
    void* ecx_1 = var_14
    *(ecx_1 + 0x350) &= 0xfffffffd

return result
