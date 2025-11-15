// 函数: sub_41cc00
// 地址: 0x41cc00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_2 = arg1

if (*(arg1 + 0x10) == 0)
    struct dpvariable::CModel::VTable** eax_1 = sub_6e810c(0x10)
    struct dpvariable::CModel::VTable** var_4 = eax_1
    *eax_1 = &dpvariable::CModel::`vftable'
    eax_1[1] = 0
    eax_1[2] = 0
    eax_1[3] = 0
    *(arg1 + 0x10) = eax_1
    
    if (sub_41f760(eax_1) == 0)
        int32_t* ecx_1 = *(arg1 + 0x10)
        
        if (ecx_1 != 0)
            (**ecx_1)(1)
        
        return 0

if (*(arg1 + 0x14) == 0)
    struct dpvariable::CDotNetView::VTable** eax_4 = sub_6e810c(0x18)
    int32_t edx_1 = *(arg1 + 8)
    int32_t ecx_3 = *(arg1 + 0x10)
    struct dpvariable::CDotNetView::VTable** var_4_1 = eax_4
    *eax_4 = &dpvariable::CDotNetView::`vftable'
    eax_4[1] = ecx_3
    eax_4[2] = edx_1
    eax_4[3] = 0
    eax_4[4] = 0xffffffff
    eax_4[5] = 0xffffffff
    *(arg1 + 0x14) = eax_4

return sub_41cd20(*(arg1 + 0x14)) __tailcall
