// 函数: sub_4157e0
// 地址: 0x4157e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

HIMAGELIST himl = arg1[4]
*arg1 = &dpanalysis::CImageList::`vftable'

if (himl != 0)
    ImageList_Destroy(himl)
    arg1[4] = 0
    arg1[2] = arg1[1]

int32_t eax_1 = arg1[1]

if (eax_1 != 0)
    j__free(eax_1)
    arg1[1] = 0
    arg1[2] = 0
    arg1[3] = 0

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
