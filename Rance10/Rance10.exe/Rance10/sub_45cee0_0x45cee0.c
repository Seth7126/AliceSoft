// 函数: sub_45cee0
// 地址: 0x45cee0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_74
int32_t eax_1 = __security_cookie ^ &var_74
var_74 = arg4
int32_t* var_60 = arg3
uint32_t var_50[0x4] = _mm_shuffle_epi32(zx.o(arg4), 0)
int32_t var_54 = 0
sub_431b80(arg3, arg2[1] - *arg2)
bool cond:0 = data_7fc25c s< 2
int32_t xmm2[0x4] = data_79a830
int32_t xmm1[0x4] = data_79a820
char* edx = *arg2
int128_t var_34
__builtin_memcpy(&var_34, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)

if (cond:0)
    for (int32_t i = 0; i s< 0x10; i += 4)
        int32_t ecx = *(&var_34 + i) * 3
        int128_t var_24
        int32_t eax_6 = *(&var_24 + i) * arg4
        *(&var_34 + i) = ecx
        int32_t eax_7 = eax_6 * 3
        *(&var_24 + i) = eax_7
        *(&var_50 + i) = eax_7 + ecx
else
    var_50 = _mm_add_epi32(__pmulld_xmmdq_memdq(__pmulld_xmmdq_memdq(xmm1, var_50), data_79a860), 
        __pmulld_xmmdq_memdq(xmm2, data_79a860))

int32_t ebx_1 = arg5
int32_t i_1 = 0
int32_t i_2 = 0

do
    if (ebx_1 s> 0)
        int32_t esi_1 = var_74
        int32_t ecx_1 = 0
        int32_t var_70_1 = 0
        int32_t eax_9 = esi_1 * 3
        int32_t j_1 = ((ebx_1 - 1) u>> 1) + 1
        int32_t j_2 = j_1
        int32_t j
        
        do
            if (esi_1 s> 0)
                uint32_t ecx_2 = var_50[1]
                void* eax_15 = *arg3 + ecx_1 + i_1 + ecx_2
                uint32_t edi_2 = var_50[0] - ecx_2
                uint32_t ebx_5 = var_50[2] - ecx_2
                uint32_t ecx_4 = var_50[3] - var_50[1]
                int32_t k_1 = ((esi_1 - 1) u>> 1) + 1
                uint32_t var_58_1 = edi_2
                int32_t k
                
                do
                    eax_15 += 6
                    *(edi_2 + eax_15 - 6) = *edx
                    *(eax_15 - 6) = edx[1]
                    *(ebx_5 + eax_15 - 6) = edx[2]
                    char ecx_8 = edx[3]
                    edx = &edx[4]
                    *(ecx_4 + eax_15 - 6) = ecx_8
                    edi_2 = var_58_1
                    k = k_1
                    k_1 -= 1
                while (k != 1)
                ecx_1 = var_70_1
                j_1 = j_2
                esi_1 = var_74
                i_1 = i_2
            
            ecx_1 += eax_9 * 2
            j = j_1
            j_1 -= 1
            var_70_1 = ecx_1
            j_2 = j_1
        while (j != 1)
        ebx_1 = arg5
    
    i_1 += 1
    i_2 = i_1
while (i_1 s< 3)

@__security_check_cookie@4(eax_1 ^ &var_74)
return arg3
