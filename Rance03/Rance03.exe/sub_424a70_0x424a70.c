// 函数: sub_424a70
// 地址: 0x424a70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = *(arg1 + 0xe0)
int32_t result = *(esi + 0x14) + *(arg1 + 0xf8) + 4

if (*(arg1 + 0xfc) == 0)
    return result

return *(esi + 0x10) + result
