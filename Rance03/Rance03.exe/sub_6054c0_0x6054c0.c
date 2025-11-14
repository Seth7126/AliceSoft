// 函数: sub_6054c0
// 地址: 0x6054c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edi = arg1[1]
*arg1 = &filesystem::CFindFile::`vftable'
BOOL hFindFile = *(edi + 4)

if (hFindFile != 0xffffffff)
    hFindFile = FindClose(hFindFile)
    
    if (hFindFile != 0)
        *(edi + 4) = 0xffffffff

int32_t* ecx = arg1[1]

if (ecx == 0)
    return hFindFile

return (**ecx)(1)
