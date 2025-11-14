// 函数: sub_5e22f0
// 地址: 0x5e22f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
void* esi = arg1
int32_t ebx
ebx.b = *(esi + 0x2c) == arg3
arg1:1.b = *(esi + 0x30) == arg4
*(esi + 0x34) - arg2
unimplemented  {test ah, 0x44}
float xmm0_1 = *(esi + 0x38)
xmm0_1 - arg5
char result = (xmm0_1 == arg5 ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, arg5) ? 1 : 0) << 2
    | (xmm0_1 < arg5 ? 1 : 0)
bool p_3 = unimplemented  {test ah, 0x44}

if (p_3)
    arg1.b = 0
else
    arg1.b = 1

if (ebx.b == 0 || arg1:1.b == 0 || result == 0 || arg1.b == 0)
    bool cond:1_1 = *(esi + 0x3c) == 0
    *(esi + 0x2c) = arg3
    *(esi + 0x30) = arg4
    *(esi + 0x34) = arg2
    *(esi + 0x38) = arg5
    
    if (not(cond:1_1))
        char* eax = esi + 0x44
        
        if (*(esi + 0x58) u>= 0x10)
            eax = *eax
        
        result = sub_5e20f0(esi, *(esi + 0x40), eax, *(esi + 0x5c))
    
    if (*(esi + 0x60) != 0)
        return sub_5e2240(esi, *(esi + 0x64), *(esi + 0x68))

return result
