// 函数: sub_53aa70
// 地址: 0x53aa70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_10 = arg1
struct partsengine::CPartsList::VTable** vFunc_0 = sub_4f14d0(data_7fcba4 + 0x128)
struct partsengine::CPartsList::VTable** vFunc = vFunc_0

if (vFunc != 0)
    int32_t eax = vFunc[2]
    
    if (arg1 s< eax || vFunc[1] + eax s<= arg1)
        vFunc_0 = nullptr
    label_53aab9:
        
        if (vFunc_0 != 0)
            goto label_53aabd
    else
        vFunc_0 = vFunc[3][arg1 - eax].vFunc_0
        
        if (vFunc_0 == 0)
            int32_t var_10_1 = arg1
            vFunc_0 = sub_526580(vFunc)
            goto label_53aab9
        
    label_53aabd:
        void* esi_1 = &vFunc_0[0x19]
        vFunc_0 = sub_4f2400(esi_1, arg2)
        
        if (vFunc_0.b != 0)
            return sub_504200(*(esi_1 + 0xc), arg2)

return vFunc_0
