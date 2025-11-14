// 函数: sub_1000be00
// 地址: 0x1000be00
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t eax
eax.b = arg2
char* edx = arg1

while ((edx & 3) != 0)
    int32_t ecx
    ecx.b = *edx
    edx = &edx[1]
    
    if (ecx.b == eax.b)
        return sub_1000bdf0(ecx, edx) __tailcall
    
    if (ecx.b == 0)
        return 0

int32_t ebx_2 = eax | eax << 8
int32_t ebx_4 = ebx_2 << 0x10 | ebx_2

while (true)
    int32_t ecx_1 = *edx
    int32_t ecx_2 = ecx_1 ^ ebx_4
    edx = &edx[4]
    
    if (((ecx_2 ^ 0xffffffff ^ (0x7efefeff + ecx_2)) & 0x81010100) != 0)
        int32_t eax_10 = *(edx - 4)
        
        if (eax_10.b == ebx_4.b)
            return &edx[0xfffffffc]
        
        if (eax_10.b == 0)
            break
        
        if (eax_10:1.b == ebx_4.b)
            return &edx[0xfffffffd]
        
        if (eax_10:1.b == 0)
            break
        
        uint16_t eax_11 = (eax_10 u>> 0x10).w
        
        if (eax_11.b == ebx_4.b)
            return &edx[0xfffffffe]
        
        if (eax_11.b == 0)
            break
        
        if (eax_11:1.b == ebx_4.b)
            return &edx[0xffffffff]
        
        if (eax_11:1.b == 0)
            break
    else
        int32_t eax_7 = (ecx_1 ^ 0xffffffff ^ (0x7efefeff + ecx_1)) & 0x81010100
        
        if (eax_7 != 0)
            if ((eax_7 & 0x1010100) != 0)
                break
            
            if (((0x7efefeff + ecx_1) & 0x80000000) == 0)
                break

return 0
