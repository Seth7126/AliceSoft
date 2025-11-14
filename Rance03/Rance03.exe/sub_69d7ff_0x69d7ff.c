// 函数: sub_69d7ff
// 地址: 0x69d7ff
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t esp_1 = *(arg1 - 0x18)
int32_t esi = *(arg1 - 0x20)
*(arg1 - 0x24) = esi

if (*(arg1 - 0x1c) != 0)
    __c_exit()
    return sub_69d819(arg1, esi) __tailcall

*(esp_1 - 4) = esi
__exit()
noreturn
