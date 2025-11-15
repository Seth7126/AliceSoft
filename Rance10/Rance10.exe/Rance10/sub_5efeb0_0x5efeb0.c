// 函数: sub_5efeb0
// 地址: 0x5efeb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* eax = *arg1
int64_t var_38
int32_t var_1c

if (eax == arg1[1])
    int64_t xmm0_1 = data_7fd4d8.q
    int32_t var_30_1 = data_7fd4e0
    var_1c = arg2
    var_38 = xmm0_1
    int32_t var_2c = 0
    int32_t var_4 = 0
    int32_t var_18 = 1
    int128_t var_14_1 = var_38.o
    return sub_5a4af0(arg1, &var_1c)

int32_t edx = arg2

if (edx s< *eax)
    int32_t var_30_2 = data_7fd4e0
    int32_t var_4_1 = 0
    var_38 = data_7fd4d8.q
    int32_t var_2c_1 = 0
    int128_t xmm0_4 = var_38.o
    var_1c = edx
    int32_t var_18_1 = 1
    int128_t var_14_2 = xmm0_4
    return sub_5f0a40(arg1, &arg2, eax, &var_1c)

int32_t ecx_2 = arg1[1]

while (eax != ecx_2)
    if (edx s< *eax)
        eax = &eax[7]
    else
        int32_t* esi_1 = eax
        eax = &eax[7]
        
        if (eax == ecx_2)
            var_38:4.d = esi_1[1]
            int32_t var_20 = esi_1[6]
            var_38.d = edx
            int32_t var_30
            var_30.o = *(esi_1 + 8)
            return sub_5a4af0(arg1, &var_38)
        
        if (edx s< *eax)
            int32_t ecx_4 = *eax - *esi_1
            int32_t var_40
            int128_t* ecx_6
            
            if (ecx_4 s> 0)
                int32_t edx_1 = edx - *esi_1
                float xmm0_8 = _mm_cvtepi32_ps(zx.o(ecx_4))
                float xmm1_3 = _mm_cvtepi32_ps(zx.o(edx_1)) / xmm0_8
                float xmm6_3 = (eax[6] f- esi_1[6]) * xmm1_3
                float xmm0_15 = esi_1[5] f+ (eax[5] f- esi_1[5]) * xmm1_3
                int128_t var_14
                var_14.d = esi_1[4] f+ (eax[4] f- esi_1[4]) * xmm1_3
                int32_t ecx_9 = esi_1[1]
                int64_t xmm2_3 = _mm_unpacklo_ps(esi_1[2] f+ (eax[2] f- esi_1[2]) * xmm1_3, 
                    esi_1[3] f+ (eax[3] f- esi_1[3]) * xmm1_3)
                var_40 = ecx_9
                ecx_6 = &var_1c
                var_14:4.d = xmm0_15
                var_1c.q = xmm2_3
                var_14:8.d = esi_1[6] f+ xmm6_3
            else
                var_40 = esi_1[1]
                ecx_6 = &esi_1[2]
            
            void var_3c
            return sub_5f0820(arg1, &var_3c, eax, &arg2, &var_40, ecx_6)

int32_t var_30_3 = data_7fd4e0
var_38 = data_7fd4d8.q
int32_t var_2c_2 = 0
int128_t xmm0_6 = var_38.o
int32_t var_4_2 = 0
var_1c = edx
int32_t var_18_2 = 1
int128_t var_14_3 = xmm0_6
return sub_5a4af0(arg1, &var_1c)
