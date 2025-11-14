// 函数: sub_40c9d0
// 地址: 0x40c9d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = 0
int32_t eax = *(arg1 + 4)

if (eax == 0xb || eax == 3 || eax == 0x13)
    int32_t ecx = *(arg3 i+ 4)
    
    if (ecx != 0xa && ecx != 2 && ecx != 0x12 && ecx != 0x2f && ecx != 0x30 && ecx != 0x33
            && ecx != 0xb && ecx != 3 && ecx != 0x13)
        goto label_40ca24
else
label_40ca24:
    int32_t ecx_1 = *(arg3 i+ 4)
    
    if (ecx_1 != 0xb && ecx_1 != 3 && ecx_1 != 0x13)
        sub_40d410(arg1, arg2, arg3)
        return arg2
    
    if (eax != 0xa && eax != 2 && eax != 0x12 && eax != 0x2f && eax != 0x30 && eax != 0x33
            && eax != 0xb && eax != 3 && eax != 0x13)
        sub_40d410(arg1, arg2, arg3)
        return arg2

float xmm0 = sub_421f70(arg3)
int32_t eax_2
float xmm0_1
eax_2, xmm0_1 = sub_421f70(arg1)
xmm0_1 - xmm0
eax_2:1.b = (xmm0_1 == xmm0 ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, xmm0) ? 1 : 0) << 2
    | (xmm0_1 < xmm0 ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    sub_40d890(arg2, 0)
    return arg2

sub_40d890(arg2, 1)
return arg2
