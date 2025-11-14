// 函数: sub_4a56a0
// 地址: 0x4a56a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = arg1
int32_t* ecx
struct partsengine::CPartsList::VTable** eax = sub_4a52a0(ecx)

if (eax != 0)
    int32_t edi_1 = eax[2]
    
    if (arg1 s>= edi_1 && eax[1] + edi_1 s> arg1)
        int32_t vFunc_0 = eax[3][arg1 - edi_1].vFunc_0
        
        if (vFunc_0 != 0)
            return vFunc_0
        
        return sub_4e7720(eax, arg1)

return 0
