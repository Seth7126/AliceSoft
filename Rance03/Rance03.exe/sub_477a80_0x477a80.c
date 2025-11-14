// 函数: sub_477a80
// 地址: 0x477a80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

HANDLE hObject = *(arg1 + 0xc)

if (hObject != 0xffffffff)
    if (CloseHandle(hObject) == 0)
        BOOL eax
        eax.b = 0
        return eax
    
    *(arg1 + 0xc) = 0xffffffff

int32_t eax_1 = *(arg1 + 0x28)
*(arg1 + 0x18) = 0
*(arg1 + 0x1c) = 0xffffffff
*(arg1 + 0x20) = 0
*(arg1 + 0x24) = 0xffffffff
(*(eax_1 + 0x20))(0)
(*(*(arg1 + 0x28) + 0x24))(0)
(*(*(arg1 + 0x28) + 0x28))(0)
(*(*(arg1 + 0x28) + 0x2c))(0)
(*(*(arg1 + 0x28) + 0x30))(0)
(*(*(arg1 + 0x28) + 0x34))(0)
*(arg1 + 0x48) = 0
*(arg1 + 0x50) = *(arg1 + 0x4c)
int32_t eax_7
eax_7.b = 1
return eax_7
