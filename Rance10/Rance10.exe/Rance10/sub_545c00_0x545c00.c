// 函数: sub_545c00
// 地址: 0x545c00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_10 = arg3
struct partsengine::CPartsList::VTable** edi = sub_4f14d0(data_7fcba4 + 0x128)
struct partsengine::CPartsList::VTable** vFunc_0

if (edi != 0)
    int32_t eax = edi[2]
    
    if (arg3 s< eax || edi[1] + eax s<= arg3)
        vFunc_0 = nullptr
    else
        vFunc_0 = edi[3][arg3 - eax].vFunc_0
        
        if (vFunc_0 != 0)
            return (*(vFunc_0[0x1d]->vFunc_0 + 0x44))(arg2, arg4, arg5)
        
        int32_t var_10_1 = arg3
        vFunc_0 = sub_526580(edi)
    
    if (vFunc_0 != 0)
        return (*(vFunc_0[0x1d]->vFunc_0 + 0x44))(arg2, arg4, arg5)

vFunc_0.b = 0
return vFunc_0
