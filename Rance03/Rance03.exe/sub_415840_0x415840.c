// 函数: sub_415840
// 地址: 0x415840
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

HIMAGELIST himl = *(arg1 + 0x10)

if (himl != 0)
    ImageList_Destroy(himl)

*(arg1 + 0x10) = ImageList_Create(0x10, 0x10, 0x5, (*(arg1 + 8) - *(arg1 + 4)) s>> 2, 1)
int32_t i = 0

if (((*(arg1 + 8) - *(arg1 + 4)) & 0xfffffffc) s> 0)
    do
        HICON hicon = LoadIconA(arg2, zx.d(*(*(arg1 + 4) + (i << 2))))
        ImageList_ReplaceIcon(*(arg1 + 0x10), 0xffffffff, hicon)
        i += 1
    while (i s< (*(arg1 + 8) - *(arg1 + 4)) s>> 2)

int32_t result
result.b = 1
return result
