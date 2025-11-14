// 函数: sub_4d8450
// 地址: 0x4d8450
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
int32_t var_10 = arg2
struct partsengine::CPartsList::VTable** edx = sub_4a52a0(arg1 + 0x104)
struct partsengine::CPartsList::VTable** result

if (edx != 0)
    result = edx[2]
    struct partsengine::CPartsList::VTable** vFunc_0
    
    if (arg2 s< result || edx[1] + result s<= arg2)
        vFunc_0 = nullptr
    label_4d8495:
        
        if (vFunc_0 != 0)
            goto label_4d84a1
    else
        vFunc_0 = edx[3][arg2 - result].vFunc_0
        
        if (vFunc_0 == 0)
            vFunc_0 = sub_4e7720(edx, arg2)
            goto label_4d8495
        
    label_4d84a1:
        
        if (sub_4b9b80(&vFunc_0[0x1b], arg3).b != 0)
            sub_468ec0(arg3, (*(vFunc_0[0x17]->vFunc_0 + 0xc))())
            
            if ((*(vFunc_0[0x17]->vFunc_0 + 0x60))(arg3).b != 0)
                result.b = 1
                return result

result.b = 0
return result
