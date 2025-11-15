// 函数: sub_51b5a0
// 地址: 0x51b5a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_c = arg2
struct partsengine::CPartsList::VTable** edx = sub_4f14d0(arg1 + 0x34)
struct partsengine::CPartsList::VTable** result

if (edx != 0)
    result = edx[2]
    struct partsengine::CPartsList::VTable** vFunc_0
    
    if (arg2 s< result || edx[1] + result s<= arg2)
        vFunc_0 = nullptr
    label_51b5e1:
        
        if (vFunc_0 != 0)
            goto label_51b5f0
    else
        vFunc_0 = edx[3][arg2 - result].vFunc_0
        
        if (vFunc_0 == 0)
            int32_t var_c_1 = arg2
            vFunc_0 = sub_526580(edx)
            goto label_51b5e1
        
    label_51b5f0:
        
        if (sub_504370(&vFunc_0[0x21], arg3).b != 0)
            sub_6ca100(arg3, (*(vFunc_0[0x1d]->vFunc_0 + 0xc))())
            
            if ((*(vFunc_0[0x1d]->vFunc_0 + 0x54))(arg3).b != 0)
                result.b = 1
                return result

result.b = 0
return result
