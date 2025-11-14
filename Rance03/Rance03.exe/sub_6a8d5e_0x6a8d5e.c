// 函数: sub_6a8d5e
// 地址: 0x6a8d5e
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* eax = *(arg1 + 4)

if (eax != 0 && *(eax + 8) != 0 && ((*arg1 & 0x80) == 0 || (*arg2 & 0x10) == 0))
    void* edx_1 = *(arg2 + 4)
    
    if (eax != edx_1)
        if (_strcmp(eax + 8, edx_1 + 8) != 0 || ((*arg2 & 2) != 0 && (*arg1 & 8) == 0)
                || ((*arg3 & 1) != 0 && (*arg1 & 1) == 0))
            return 0
    else if (((*arg2 & 2) != 0 && (*arg1 & 8) == 0) || ((*arg3 & 1) != 0 && (*arg1 & 1) == 0))
        return 0
    
    if ((*arg3 & 2) != 0 && (*arg1 & 2) == 0)
        return 0

return 1
