// 函数: sub_632110
// 地址: 0x632110
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax = *(arg3 + 0x74)

if ((eax.b & 1) == 0)
    sub_62a740(arg3, "missing IHDR")
    noreturn

if ((eax.b & 4) != 0)
    sub_62fcc0(arg3, arg4)
    return sub_62a7c0(arg3, "out of place") __tailcall

if (arg2 != 0 && (*(arg2 + 8) & 0x4000) != 0)
    sub_62fcc0(arg3, arg4)
    return sub_62a7c0(arg3, "duplicate") __tailcall

if (arg4 u< 4)
    sub_62fcc0(arg3, arg4)
    return sub_62a7c0(arg3, "invalid") __tailcall

void* eax_4 = sub_62fe60(eax, arg4 + 1, arg3, 2)

if (eax_4 == 0)
    sub_62a7c0(arg3, "out of memory")
    return sub_62fcc0(arg3, arg4) __tailcall

sub_62fc80(eax_4, eax_4, arg3, arg4)
*(eax_4 + arg4) = 0
int32_t result = sub_62fcc0(arg3, nullptr)

if (result != 0)
    return result

result.b = *eax_4

if (result.b != 1 && result.b != 2)
    return sub_62a7c0(arg3, "invalid unit") __tailcall

int32_t var_c = 1
int32_t var_8 = 0

if (sub_629570(&var_8, arg4, eax_4, &var_8, &var_c) != 0)
    int32_t ebp_1 = var_c
    
    if (ebp_1 u< arg4)
        int32_t eax_8
        eax_8.b = *(eax_4 + ebp_1)
        var_c = ebp_1 + 1
        
        if (eax_8.b == 0)
            if ((var_8 & 0x188) != 0x108)
                return sub_62a7c0(arg3, "non-positive width") __tailcall
            
            var_8 = 0
            
            if (sub_629570(&var_8, arg4, eax_4, &var_8, &var_c) == 0 || var_c != arg4)
                return sub_62a7c0(arg3, "bad height format") __tailcall
            
            if ((var_8 & 0x188) != 0x108)
                return sub_62a7c0(arg3, "non-positive height") __tailcall
            
            int32_t* eax_19 = zx.d(result.b)
            return sub_634350(eax_19, arg2, arg3, eax_19, eax_4 + 1, eax_4 + ebp_1 + 1)

return sub_62a7c0(arg3, "bad width format") __tailcall
