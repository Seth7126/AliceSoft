// 函数: sub_4f52c0
// 地址: 0x4f52c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* esi = *(arg2 + 4)
int32_t ecx = *(arg2 + 8)

if (&esi[4] u<= ecx)
    uint32_t edx_7 = ((zx.d(esi[3]) << 8 | zx.d(esi[2])) << 8 | zx.d(esi[1])) << 8 | zx.d(*esi)
    *(arg2 + 4) = &esi[4]
    
    if (&esi[8] u<= ecx)
        uint32_t var_14_1 =
            ((zx.d(esi[7]) << 8 | zx.d(esi[6])) << 8 | zx.d(esi[5])) << 8 | zx.d(esi[4])
        *(arg2 + 4) = &esi[8]
        struct partsengine::CGUIController::VTable** result = sub_4f41d0(arg1, edx_7)
        sub_4f3210(result)
        
        if (sub_4fcf90(&result[4], arg2) != 0)
            sub_4f10a0(result[1])
            return result
        
        if (result != 0)
            (*result)->vFunc_0(1)

return 0
