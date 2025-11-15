// 函数: sub_578370
// 地址: 0x578370
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* edx = *(arg2 + 4)

if (&edx[4] u<= *(arg2 + 8))
    uint32_t ecx_6 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(arg2 + 4) = &edx[4]
    *arg1 = ecx_6
    char* ecx_7 = *(arg2 + 4)
    
    if (&ecx_7[4] u<= *(arg2 + 8))
        uint32_t edx_7 =
            ((zx.d(ecx_7[3]) << 8 | zx.d(ecx_7[2])) << 8 | zx.d(ecx_7[1])) << 8 | zx.d(*ecx_7)
        *(arg2 + 4) = &ecx_7[4]
        arg1[1] = edx_7
        return sub_57d190(arg2, &arg1[2]) != 0

uint32_t result
result.b = 0
return result
