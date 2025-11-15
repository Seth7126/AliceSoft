// 函数: sub_45e1a0
// 地址: 0x45e1a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_74
int32_t eax_1 = __security_cookie ^ &var_74
int32_t esi = arg4
int32_t* var_64 = arg3
uint32_t var_50[0x4] = _mm_shuffle_epi32(zx.o(esi), 0)
int32_t var_54 = 0
sub_431b80(arg3, arg2[1] - *arg2)
bool cond:0 = data_7fc25c s< 2
int32_t xmm2[0x4] = data_79a830
int32_t xmm1[0x4] = data_79a820
char* edx = *arg3
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
    
    esi = arg4
else
    var_50 = _mm_add_epi32(__pmulld_xmmdq_memdq(__pmulld_xmmdq_memdq(xmm1, var_50), data_79a860), 
        __pmulld_xmmdq_memdq(xmm2, data_79a860))

int32_t ebx_1 = arg5
int32_t i_1 = 0
int32_t i_2 = 0

do
    if (ebx_1 s> 0)
        int32_t eax_9 = esi * 3
        int32_t ecx_1 = 0
        int32_t var_70_1 = 0
        int32_t j_1 = ((ebx_1 - 1) u>> 1) + 1
        int32_t j_2 = j_1
        int32_t j
        
        do
            if (esi s> 0)
                uint32_t ecx_2 = var_50[1]
                void* eax_15 = *arg2 + ecx_1 + i_1 + ecx_2
                uint32_t edi_3 = var_50[0] - ecx_2
                uint32_t ebx_5 = var_50[2] - ecx_2
                uint32_t ecx_4 = var_50[3] - var_50[1]
                int32_t k_1 = ((esi - 1) u>> 1) + 1
                int32_t k
                
                do
                    char ecx_5 = *(edi_3 + eax_15)
                    eax_15 += 6
                    *edx = ecx_5
                    edx[1] = *(eax_15 - 6)
                    edx[2] = *(ebx_5 + eax_15 - 6)
                    edx[3] = *(ecx_4 + eax_15 - 6)
                    edx = &edx[4]
                    k = k_1
                    k_1 -= 1
                while (k != 1)
                ecx_1 = var_70_1
                j_1 = j_2
                esi = arg4
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
