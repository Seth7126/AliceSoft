// 函数: sub_4132d0
// 地址: 0x4132d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
int32_t edx = *(arg1 + 4)

if (edx == 0xb || edx == 3 || edx == 0x13)
    int32_t esi_1 = *(arg3 i+ 4)
    
    if (esi_1 != 0xa && esi_1 != 2 && esi_1 != 0x12 && esi_1 != 0x5c && esi_1 != 0x5b
            && esi_1 != 0x5d && sub_41a7b0(arg3) == 0 && esi_1 != 0xb && esi_1 != 3
            && esi_1 != 0x13)
        goto label_41333f
else
label_41333f:
    int32_t eax_2 = *(arg3 i+ 4)
    
    if (eax_2 != 0xb && eax_2 != 3 && eax_2 != 0x13)
        sub_413d80(arg1, arg2, arg3)
        return arg2
    
    if (edx != 0xa && edx != 2 && edx != 0x12 && edx != 0x5c && edx != 0x5b && edx != 0x5d
            && sub_41a7b0(arg1) == 0 && edx != 0xb && edx != 3 && edx != 0x13)
        sub_413d80(arg1, arg2, arg3)
        return arg2

float xmm0 = sub_41a970(arg3)
char* eax_5
float xmm0_1
eax_5, xmm0_1 = sub_41a970(arg1)
xmm0_1 - xmm0
eax_5:1.b = (xmm0_1 == xmm0 ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, xmm0) ? 1 : 0) << 2
    | (xmm0_1 < xmm0 ? 1 : 0)
char ecx_6 = 0
bool p_1 = unimplemented  {test ah, 0x44}

if (not(p_1))
    ecx_6 = 1

sub_414470(arg2, ecx_6)
return arg2
