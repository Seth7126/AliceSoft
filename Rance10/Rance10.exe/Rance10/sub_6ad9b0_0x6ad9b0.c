// 函数: sub_6ad9b0
// 地址: 0x6ad9b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg3
char eax = (*(arg3 + 0x74)).b

if ((eax & 1) == 0)
    sub_6a7750(arg3, "missing IHDR")
    noreturn

if ((eax & 6) != 0)
    sub_6ace40(arg3, arg4)
    return sub_6a77d0(arg3, "out of place")

if (arg4 != 4)
    sub_6ace40(arg3, arg4)
    return sub_6a77d0(arg3, "invalid")

int32_t eax_3 = *(arg3 + 0x5c)

if (eax_3 == 0)
    sub_6a7500(arg3, "Call to NULL read function")
    noreturn

sub_6a4030(eax_3(arg3, &var_4, 4), &var_4, arg3, 4)
uint32_t result = sub_6ace40(arg3, nullptr)

if (result == 0)
    int16_t eax_5 = var_4.w
    uint32_t ecx_12 =
        (((((zx.d(eax_5.b) << 8) + zx.d(eax_5:1.b)) << 8) + zx.d(var_4:2.b)) << 8) + zx.d(var_4:3.b)
    uint32_t eax_9 = 0xffffffff
    
    if (ecx_12 u<= 0x7fffffff)
        eax_9 = ecx_12
    
    result = sub_6a4cd0(eax_9, arg3 + 0x2dc, arg3, eax_9)
    
    if (arg2 != 0)
        int32_t eax_10 = *(arg3 + 0x324)
        *(arg2 + 0x28) = *(arg3 + 0x2dc)
        *(arg2 + 0x38) = *(arg3 + 0x2ec)
        *(arg2 + 0x48) = *(arg3 + 0x2fc)
        *(arg2 + 0x58) = *(arg3 + 0x30c)
        *(arg2 + 0x68) = *(arg3 + 0x31c)
        *(arg2 + 0x70) = eax_10
        return sub_6a4da0(arg3, arg2)

return result
