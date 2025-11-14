// 函数: sub_4696c0
// 地址: 0x4696c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &graph::CGraph::`vftable'{for `IGraph'}
int32_t eax = arg1[5]

if (eax != 0)
    j__free(eax)
    arg1[5] = 0
    arg1[6] = 0
    arg1[7] = 0

int32_t* result = arg1[2]
arg1[1] = &graph::CArray2D<uint8_t>::`vftable'

if (result != 0)
    int32_t eax_1 = *result
    
    if (eax_1 != 0)
        j__free(eax_1)
    
    result = j__free(arg1[2])

arg1[2] = 0
arg1[3] = 0
arg1[4] = 0
return result
