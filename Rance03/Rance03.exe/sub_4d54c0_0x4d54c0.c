// 函数: sub_4d54c0
// 地址: 0x4d54c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
int32_t* edi = *(arg1 + 0x4c)
int32_t var_14 = arg2

if (sub_4a55e0(edi) != 0)
    int32_t var_14_1 = arg2
    struct partsengine::CPartsList::VTable** eax_1 = sub_4a52a0(edi)
    int32_t edi_1
    
    if (eax_1 != 0)
        edi_1 = eax_1[2]
    
    struct IInterface::VTable** vFunc_0
    
    if (eax_1 == 0 || arg2 s< edi_1 || eax_1[1] + edi_1 s<= arg2)
        vFunc_0 = nullptr
    else
        vFunc_0 = eax_1[3][arg2 - edi_1].vFunc_0
        
        if (vFunc_0 == 0)
            vFunc_0 = sub_4e7720(eax_1, arg2)
    
    struct IInterface::VTable** vFunc = vFunc_0
    sub_49e2d0(sub_4a3a10(vFunc_0), arg1 + 4)

return sub_4d3ea0(arg1 + 0x34, arg2)
