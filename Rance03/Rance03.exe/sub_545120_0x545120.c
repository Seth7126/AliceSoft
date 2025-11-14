// 函数: sub_545120
// 地址: 0x545120
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg2 + 0x1e0) == *(arg2 + 0x1e4))
    int32_t* ecx = *(arg1 + 0x58)
    
    if (ecx != 0)
        (*(*ecx + 0x10))(1)
        *(arg1 + 0x58) = 0
    
    int32_t result
    result.b = 1
    return result

if (*(arg1 + 0x58) == 0)
    struct sealengine::CDrawInstance::sealengine::CLineListView::VTable** eax_1 = sub_69adc6(0x10)
    
    if (eax_1 == 0)
        eax_1 = nullptr
    else
        *eax_1 = &sealengine::CLineListView::`vftable'{for `sealengine::CDrawInstance'}
        eax_1[1] = 0
        eax_1[2] = 0
        eax_1[3].w = 0x101
    
    *(arg1 + 0x58) = eax_1

int32_t ecx_1 = 1
int32_t edx = 1

if (((*(arg2 + 0xc4) - *(arg2 + 0xc0)) & 0xfffffffc) s> 0)
    ecx_1 = **(arg2 + 0xc0)

if (((*(arg2 + 0xc4) - *(arg2 + 0xc0)) & 0xfffffffc) s> 4)
    edx = *(*(arg2 + 0xc0) + 4)

int32_t var_10 = arg3
void* eax_7
eax_7.b = edx != 0
return sub_547cc0(*(arg1 + 0x58), arg2 + 0x1e0, arg2 + 0x80, ecx_1 != 0, eax_7.b) != 0
