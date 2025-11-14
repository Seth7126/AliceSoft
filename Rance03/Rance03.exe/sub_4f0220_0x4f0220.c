// 函数: sub_4f0220
// 地址: 0x4f0220
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = arg1
struct partsengine::CPartsList::VTable** vFunc_0 = sub_4a52a0(data_75d4fc + 0x178)
struct partsengine::CPartsList::VTable** vFunc = vFunc_0

if (vFunc != 0)
    int32_t eax = vFunc[2]
    
    if (arg1 s< eax || vFunc[1] + eax s<= arg1)
        vFunc_0 = nullptr
    else
        vFunc_0 = vFunc[3][arg1 - eax].vFunc_0
        
        if (vFunc_0 != 0)
        label_4f0271:
            _mm_cvtepi32_ps(zx.o(vFunc_0[0x60]))
            vFunc_0[0x20]
            return vFunc_0
        
        vFunc_0 = sub_4e7720(vFunc, arg1)
    
    if (vFunc_0 != 0)
        goto label_4f0271

return vFunc_0
