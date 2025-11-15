// 函数: sub_539040
// 地址: 0x539040
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = arg1
struct partsengine::CPartsList::VTable** edx = sub_4f14d0(data_7fcba4 + 0x128)
struct partsengine::CPartsList::VTable** vFunc_0

if (edx != 0)
    int32_t eax = edx[2]
    
    if (arg1 s< eax || edx[1] + eax s<= arg1)
        vFunc_0 = nullptr
    else
        vFunc_0 = edx[3][arg1 - eax].vFunc_0
        
        if (vFunc_0 != 0)
            vFunc_0.b = *(vFunc_0 + 0xaa)
            return vFunc_0
        
        int32_t var_8_1 = arg1
        vFunc_0 = sub_526580(edx)
    
    if (vFunc_0 != 0)
        vFunc_0.b = *(vFunc_0 + 0xaa)
        return vFunc_0

vFunc_0.b = 0
return vFunc_0
