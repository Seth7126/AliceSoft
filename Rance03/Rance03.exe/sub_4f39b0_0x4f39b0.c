// 函数: sub_4f39b0
// 地址: 0x4f39b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_10 = arg1
struct partsengine::CPartsList::VTable** result = sub_4a52a0(data_75d4fc + 0x178)
struct partsengine::CPartsList::VTable** result_1 = result

if (result_1 != 0)
    result = result_1[2]
    struct partsengine::CPartsList::VTable** vFunc_0
    
    if (arg1 s< result || result_1[1] + result s<= arg1)
        vFunc_0 = nullptr
    else
        vFunc_0 = result_1[3][arg1 - result].vFunc_0
        
        if (vFunc_0 != 0)
            sub_4a3640(vFunc_0, arg2, 1)
            jump(*(vFunc_0[0x17]->vFunc_0 + 0x20))
        
        result = sub_4e7720(result_1, arg1)
        vFunc_0 = result
    
    if (vFunc_0 != 0)
        sub_4a3640(vFunc_0, arg2, 1)
        jump(*(vFunc_0[0x17]->vFunc_0 + 0x20))

return result
