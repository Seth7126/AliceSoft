// 函数: sub_488c90
// 地址: 0x488c90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct common::SuicideRefCounter<class IMemory>::common::CIMemory::VTable** result =
    sub_4836c0(arg1 + 0x24, arg2)

if (result == 0)
    int32_t* ecx_1 = *(arg1 + 4)
    
    if (ecx_1 != 0)
        int32_t* edx_1
        
        if (arg2[5] u< 0x10)
            edx_1 = arg2
        else
            edx_1 = *arg2
        
        result = (*(*ecx_1 + 0xc))(edx_1)
    
    if (ecx_1 == 0 || result == 0)
        return sub_4836c0(arg1 + 0x10, arg2)

return result
