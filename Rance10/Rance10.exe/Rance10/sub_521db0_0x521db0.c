// 函数: sub_521db0
// 地址: 0x521db0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
void* eax = *(arg1 + 0x2ec)

if (eax == 0)
    return eax

void* ecx_1 = *(eax + 8)

if (*(arg1 + 0xc) == 0)
    if (ecx_1 != 0)
        struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatData::VTable** 
            eax_3 = sub_4d61b0(ecx_1, arg2)
        
        if (eax_3 != 0)
            int32_t esi_1 = eax_3[0xa]
            (*eax_3)->vFunc_1()
            return esi_1
else if (ecx_1 != 0)
    struct common::SuicideRefCounter<class IInterface>::partsengine::CFlatData::VTable** eax_1 =
        sub_4d61b0(ecx_1, arg2)
    
    if (eax_1 != 0)
        int32_t esi = eax_1[0xb]
        (*eax_1)->vFunc_1()
        return esi

return arg2
