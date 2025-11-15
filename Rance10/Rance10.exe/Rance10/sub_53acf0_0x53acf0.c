// 函数: sub_53acf0
// 地址: 0x53acf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx
ebx.b = arg2
int32_t var_10 = arg1
struct partsengine::CPartsList::VTable** vFunc_0 = sub_4f14d0(data_7fcba4 + 0x128)
struct partsengine::CPartsList::VTable** vFunc = vFunc_0

if (vFunc != 0)
    int32_t eax = vFunc[2]
    
    if (arg1 s< eax || vFunc[1] + eax s<= arg1)
        vFunc_0 = nullptr
    label_53ad39:
        
        if (vFunc_0 != 0)
            *(vFunc_0 + 0x1a9) = ebx.b
    else
        vFunc_0 = vFunc[3][arg1 - eax].vFunc_0
        
        if (vFunc_0 == 0)
            int32_t var_10_1 = arg1
            vFunc_0 = sub_526580(vFunc)
            goto label_53ad39
        
        *(vFunc_0 + 0x1a9) = ebx.b

return vFunc_0
