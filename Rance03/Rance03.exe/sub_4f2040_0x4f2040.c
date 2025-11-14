// 函数: sub_4f2040
// 地址: 0x4f2040
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = arg3
int32_t var_14 = arg3
struct partsengine::CPartsList::VTable** vFunc_0 = sub_4a52a0(data_75d4fc + 0x178)
struct partsengine::CPartsList::VTable** vFunc = vFunc_0

if (vFunc != 0)
    int32_t eax = vFunc[2]
    
    if (arg3 s< eax || vFunc[1] + eax s<= arg3)
        vFunc_0 = nullptr
    label_4f208a:
        
        if (vFunc_0 != 0)
            goto label_4f2092
    else
        vFunc_0 = vFunc[3][arg3 - eax].vFunc_0
        
        if (vFunc_0 == 0)
            vFunc_0 = sub_4e7720(vFunc, arg3)
            goto label_4f208a
        
    label_4f2092:
        void* esi_1 = &vFunc_0[0x13]
        vFunc_0 = sub_4a67c0(esi_1, arg4)
        
        if (vFunc_0.b != 0)
            int32_t var_14_3 = arg4
            int32_t var_18_1 = arg2
            return sub_4b7ae0(*(esi_1 + 0xc))

return vFunc_0
