// 函数: sub_4e2210
// 地址: 0x4e2210
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
void* eax = *(arg1 + 0x2d4)

if (eax == 0)
    return eax

void* ecx_1 = *(eax + 8)

if (*(arg1 + 0x30) == 0)
    if (ecx_1 != 0)
        struct IInterface::partsengine::CFlatData::VTable** eax_5 = sub_48d240(ecx_1, arg2)
        
        if (eax_5 != 0)
            int32_t esi_1 = eax_5[0xa]
            (*eax_5)->__offset(0x4).d()
            return esi_1
else if (ecx_1 != 0)
    struct IInterface::partsengine::CFlatData::VTable** eax_1 = sub_48d240(ecx_1, arg2)
    
    if (eax_1 != 0)
        int32_t esi = eax_1[0xb]
        (*eax_1)->__offset(0x4).d()
        return esi

return 0
