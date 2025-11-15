// 函数: sub_6adfe0
// 地址: 0x6adfe0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg3
char eax = (*(arg3 + 0x74)).b

if ((eax & 1) == 0)
    sub_6a7750(arg3, "missing IHDR")
    noreturn

if ((eax & 6) != 0)
    sub_6ace40(arg3, arg4)
    return sub_6a77d0(arg3, "out of place")

if (arg4 != 1)
    sub_6ace40(arg3, arg4)
    return sub_6a77d0(arg3, "invalid")

int32_t eax_3 = *(arg3 + 0x5c)

if (eax_3 == 0)
    sub_6a7500(arg3, "Call to NULL read function")
    noreturn

sub_6a4030(eax_3(arg3, &var_4:3, 1), &var_4:3, arg3, 1)
uint32_t result = sub_6ace40(arg3, nullptr)

if (result == 0)
    result = zx.d(*(arg3 + 0x326))
    
    if (result.w s>= 0)
        if ((result.b & 4) != 0)
            *(arg3 + 0x326) = result.w | 0x8000
            
            if (arg2 != 0)
                int32_t eax_6 = *(arg3 + 0x324)
                *(arg2 + 0x28) = *(arg3 + 0x2dc)
                *(arg2 + 0x38) = *(arg3 + 0x2ec)
                *(arg2 + 0x48) = *(arg3 + 0x2fc)
                *(arg2 + 0x58) = *(arg3 + 0x30c)
                *(arg2 + 0x68) = *(arg3 + 0x31c)
                *(arg2 + 0x70) = eax_6
                sub_6a4da0(arg3, arg2)
            
            return sub_6a77d0(arg3, "too many profiles")
        
        uint32_t eax_8 = zx.d(var_4:3.b)
        result = sub_6a5910(eax_8, arg3 + 0x2dc, arg3, eax_8)
        
        if (arg2 != 0)
            int32_t eax_9 = *(arg3 + 0x324)
            *(arg2 + 0x28) = *(arg3 + 0x2dc)
            *(arg2 + 0x38) = *(arg3 + 0x2ec)
            *(arg2 + 0x48) = *(arg3 + 0x2fc)
            *(arg2 + 0x58) = *(arg3 + 0x30c)
            *(arg2 + 0x68) = *(arg3 + 0x31c)
            *(arg2 + 0x70) = eax_9
            return sub_6a4da0(arg3, arg2)

return result
