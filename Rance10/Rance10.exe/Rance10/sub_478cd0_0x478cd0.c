// 函数: sub_478cd0
// 地址: 0x478cd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 = &graph::CGraphImplement::`vftable'{for `IGraph'}
void* ecx = arg1[5]

if (ecx != 0)
    sub_403160(ecx, arg1[7] - ecx, 1)
    arg1[5] = 0
    arg1[6] = 0
    arg1[7] = 0

int32_t* result = arg1[2]
arg1[1] = &graph::CArray2D<uint8_t>::`vftable'

if (result != 0)
    int32_t eax_3 = *result
    
    if (eax_3 != 0)
        _free(eax_3)
    
    result = _free(arg1[2])

arg1[2] = 0
arg1[3] = 0
arg1[4] = 0
return result
