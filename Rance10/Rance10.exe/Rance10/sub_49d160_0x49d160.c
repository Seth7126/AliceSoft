// 函数: sub_49d160
// 地址: 0x49d160
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = arg1
esi[0xd] f- arg4
unimplemented  {test ah, 0x44}
float xmm0_1 = esi[0xe]
xmm0_1 - arg5
char result = (xmm0_1 == arg5 ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, arg5) ? 1 : 0) << 2
    | (xmm0_1 < arg5 ? 1 : 0)
bool p_3 = unimplemented  {test ah, 0x44}

if (p_3)
    arg1.b = 0
else
    arg1.b = 1

if (esi[0xb] != arg2 || esi[0xc] != arg3 || result == 0 || arg1.b == 0)
    bool cond:0_1 = esi[0xf].b == 0
    esi[0xb] = arg2
    esi[0xc] = arg3
    esi[0xd] = arg4
    esi[0xe] = arg5
    
    if (not(cond:0_1))
        void* ecx = &esi[0x11]
        
        if (esi[0x16] u>= 0x10)
            ecx = *ecx
        
        result = (*(*esi + 8))(esi[0x10], ecx, esi[0x17])
    
    if (esi[0x18].b != 0)
        return (*(*esi + 0xc))(esi[0x19], esi[0x1a])

return result
