// 函数: sub_4a9f10
// 地址: 0x4a9f10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edi = *(data_75d4fc + 0x1f4)
int32_t var_14 = arg1

if (sub_4a55e0(edi + 0x104) != 0)
    int32_t var_14_1 = arg1
    struct partsengine::CPartsList::VTable** eax_1 = sub_4a52a0(edi + 0x104)
    
    if (eax_1 != 0)
        int32_t edi_1 = eax_1[2]
        
        if (arg1 s>= edi_1 && eax_1[1] + edi_1 s> arg1)
            int32_t vFunc_0 = eax_1[3][arg1 - edi_1].vFunc_0
            
            if (vFunc_0 != 0)
                return vFunc_0
            
            return sub_4e7720(eax_1, arg1)

return 0
