// 函数: _LcidFromHexString
// 地址: 0x71dbf6
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int16_t* edx = arg1
int32_t result = 0
uint32_t ecx = zx.d(*edx)

if (ecx.w != 0)
    int32_t edi
    int32_t var_c_1 = edi
    
    do
        edx = &edx[1]
        
        if (ecx.w - 0x61 u<= 5)
            ecx += 0xffd9
        else if (ecx.w - 0x41 u<= 5)
            ecx += 0xfff9
        
        result = (result << 4) + zx.d(ecx.w) - 0x30
        ecx = zx.d(*edx)
    while (ecx.w != 0)

return result
