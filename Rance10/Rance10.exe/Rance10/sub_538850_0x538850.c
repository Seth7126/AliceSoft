// 函数: sub_538850
// 地址: 0x538850
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_10 = arg3
struct partsengine::CPartsList::VTable** vFunc_0 = sub_4f14d0(data_7fcba4 + 0x128)
struct partsengine::CPartsList::VTable** vFunc = vFunc_0

if (vFunc != 0)
    int32_t eax = vFunc[2]
    
    if (arg3 s< eax || vFunc[1] + eax s<= arg3)
        vFunc_0 = nullptr
    label_53889d:
        
        if (vFunc_0 != 0)
            goto label_5388a5
    else
        vFunc_0 = vFunc[3][arg3 - eax].vFunc_0
        
        if (vFunc_0 == 0)
            int32_t var_10_1 = arg3
            vFunc_0 = sub_526580(vFunc)
            goto label_53889d
        
    label_5388a5:
        *arg4 = 0f
        *arg2 = 0f
        void* ecx_7 = vFunc_0[0xc7]
        void* ecx_8
        
        if (ecx_7 != 0)
            ecx_8 = *(ecx_7 + 8)
        else
            ecx_8 = data_7fcba0
        
        sub_528b80(&vFunc_0[0x9a], arg4, arg2, (zx.o(0)).d, (zx.o(0)).d, &vFunc_0[0x9a], ecx_8)
        long double x87_r0
        long double x87_r1
        *arg2 = sub_63ce00(*arg2, x87_r0, x87_r1)
        float xmm0_5
        long double x87_r2
        vFunc_0, xmm0_5 = sub_63ce00(*arg4, x87_r1, x87_r2)
        *arg4 = xmm0_5

return vFunc_0
