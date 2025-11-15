// 函数: sub_585630
// 地址: 0x585630
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*(arg1 + 0x234) = *(arg1 + 0x230)
int64_t* esi = arg2
char* edx = *(esi + 4)

if (&edx[4] u> esi[1].d)
label_5857ae:
    void* eax_4
    eax_4.b = 0
    return eax_4

int32_t var_48_1 = 0
uint32_t ecx_6 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
*(esi + 4) = &edx[4]
uint32_t eax_2

if (ecx_6 s<= 0)
label_58579f:
    eax_2.b = 1
    return eax_2

while (true)
    int32_t eax_3 = data_7fd4e0
    int32_t ebp_1 = 0
    int64_t xmm0_1 = data_7fd4d8.q
    int32_t var_1c_1 = eax_3
    int32_t var_c_1 = eax_3
    int64_t var_24 = xmm0_1
    int32_t var_18_1 = 0xffffffff
    int32_t var_8_1 = 0xffffffff
    arg2 = &var_24
    
    while (true)
        uint32_t var_40 = 0
        int32_t var_3c_1 = 0
        int32_t var_38_1 = 0
        
        if (sub_57d0d0(esi, &var_40).b == 0)
            goto label_5857ae
        
        char* edx_2 = *(esi + 4)
        
        if (&edx_2[4] u> esi[1].d)
            goto label_5857ae
        
        ebp_1 += 1
        int64_t xmm0_2 = var_40.q
        uint32_t ecx_14 =
            ((zx.d(edx_2[3]) << 8 | zx.d(edx_2[2])) << 8 | zx.d(edx_2[1])) << 8 | zx.d(*edx_2)
        *(esi + 4) = &edx_2[4]
        int32_t var_2c_1 = var_38_1
        uint32_t var_28_1 = ecx_14
        *arg2 = xmm0_2.o
        arg2 = &arg2[2]
        
        if (ebp_1 s>= 2)
            if (*(arg1 + 0x234) == *(arg1 + 0x238))
                uint32_t var_5c_1 = ecx_14
                sub_571180(arg1 + 0x230)
            
            eax_2 = *(arg1 + 0x234)
            
            if (eax_2 != 0)
                *eax_2 = var_24.o
                *(eax_2 + 0x10) = xmm0_1.o
            
            *(arg1 + 0x234) += 0x20
            int32_t ecx_17 = var_48_1 + 1
            var_48_1 = ecx_17
            
            if (ecx_17 s< ecx_6)
                break
            
            goto label_58579f
