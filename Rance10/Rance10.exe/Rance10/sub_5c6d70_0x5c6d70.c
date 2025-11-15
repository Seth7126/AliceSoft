// 函数: sub_5c6d70
// 地址: 0x5c6d70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int128_t var_10 = data_79a970[0x10][0].o
char* ecx = *(arg2 + 4)
void* result

if (&ecx[4] u<= *(arg2 + 8))
    uint32_t esi_7 = ((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8 | zx.d(*ecx)
    *(arg2 + 4) = &ecx[4]
    
    if (&ecx[8] u<= *(arg2 + 8))
        uint32_t ecx_7 =
            ((zx.d(ecx[7]) << 8 | zx.d(ecx[6])) << 8 | zx.d(ecx[5])) << 8 | zx.d(ecx[4])
        *(arg2 + 4) = &ecx[8]
        uint32_t var_14
        
        if (sub_6c9300(arg2, &var_14).b != 0 && sub_57d190(arg2, &var_10).b != 0)
            result.b = 1
            *(arg1 + 0x80) = ecx_7
            *(arg1 + 0x84) = var_14
            int128_t xmm0_3 = var_10
            *(arg1 + 0x7c) = esi_7
            *(arg1 + 0x88) = xmm0_3
            return result

result.b = 0
return result
