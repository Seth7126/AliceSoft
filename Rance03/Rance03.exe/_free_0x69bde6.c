// 函数: _free
// 地址: 0x69bde6
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 != 0 && HeapFree(data_75cb40, HEAP_NONE, arg1) == 0)
    BOOL* esi_1 = __errno()
    *esi_1 = __get_errno_from_oserr(GetLastError())
