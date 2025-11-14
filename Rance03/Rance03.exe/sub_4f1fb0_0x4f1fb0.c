// 函数: sub_4f1fb0
// 地址: 0x4f1fb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_18 = arg1
struct partsengine::CPartsList::VTable** vFunc_0 = sub_4a52a0(data_75d4fc + 0x178)
struct partsengine::CPartsList::VTable** vFunc = vFunc_0

if (vFunc != 0)
    int32_t eax = vFunc[2]
    
    if (arg1 s< eax || vFunc[1] + eax s<= arg1)
        vFunc_0 = nullptr
    label_4f1ffc:
        
        if (vFunc_0 != 0)
            goto label_4f2000
    else
        vFunc_0 = vFunc[3][arg1 - eax].vFunc_0
        
        if (vFunc_0 == 0)
            vFunc_0 = sub_4e7720(vFunc, arg1)
            goto label_4f1ffc
        
    label_4f2000:
        void* esi_1 = &vFunc_0[0x13]
        vFunc_0 = sub_4a67c0(esi_1, arg2)
        
        if (vFunc_0.b != 0)
            void* esi_2 = *(esi_1 + 0xc)
            int32_t var_4 = arg2
            sub_4b7b70(esi_2, arg2)
            vFunc_0 = sub_4158d0(esi_2 + 0x94, &var_4)
            *(esi_2 + 4) = 1

return vFunc_0
