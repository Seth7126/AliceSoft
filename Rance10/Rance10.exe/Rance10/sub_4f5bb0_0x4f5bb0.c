// 函数: sub_4f5bb0
// 地址: 0x4f5bb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_14 = arg2
void* eax = sub_4f15e0(arg1 + 0x128)

if (eax != 0)
    int32_t edx_1 = *(eax + 8)
    
    if (arg2 s>= edx_1 && *(eax + 4) + edx_1 s> arg2)
        eax.b = *(*(eax + 0xc) + ((arg2 - edx_1) << 2)) != 0
        
        if (eax.b != 0)
            struct partsengine::CPartsList::VTable** esi_1 = sub_4f6750(arg1, arg2)
            int32_t* ecx_6 = esi_1[0x1d]
            
            if (ecx_6 != 0 && (*(*ecx_6 + 8))(1) == 0x1b)
                int32_t var_14_2 = sub_4eec50(esi_1, 0x10, 1)
                return sub_518580(esi_1[0x1d], arg3)
            
            struct partsengine::CPartsList::VTable** eax_1
            eax_1.b = 1
            return eax_1

eax.b = 0
return eax
