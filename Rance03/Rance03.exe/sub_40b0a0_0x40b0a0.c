// 函数: sub_40b0a0
// 地址: 0x40b0a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
int32_t eax = *(arg1 + 4)

if (eax == 0xb || eax == 3 || eax == 0x13)
    int32_t ecx = *(arg3 i+ 4)
    
    if (ecx != 0xa && ecx != 2 && ecx != 0x12 && ecx != 0x2f && ecx != 0x30 && ecx != 0x33
            && ecx != 0xb && ecx != 3 && ecx != 0x13)
        goto label_40b0f2
else
label_40b0f2:
    int32_t ecx_1 = *(arg3 i+ 4)
    
    if (ecx_1 != 0xb && ecx_1 != 3 && ecx_1 != 0x13)
        sub_40c690(arg1, arg2, arg3)
        return arg2
    
    if (eax != 0xa && eax != 2 && eax != 0x12 && eax != 0x2f && eax != 0x30 && eax != 0x33
            && eax != 0xb && eax != 3 && eax != 0x13)
        sub_40c690(arg1, arg2, arg3)
        return arg2

float xmm0 = sub_421f70(arg3)
sub_40d9b0(arg2, sub_421f70(arg1) * xmm0)
return arg2
