// 函数: sub_64a550
// 地址: 0x64a550
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t j_2
int32_t eax_1 = __security_cookie ^ &j_2
bool cond:0 = data_75c958 s< 2
int32_t* result = arg1
int32_t xmm2[0x4] = data_709220
int32_t xmm1[0x4] = data_709210
char* edx = *result
int32_t esi = arg3
int128_t var_24
__builtin_memcpy(&var_24, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x"
"00\x00\x00\x00\x01\x00\x00\x00", 
    0x20)
uint32_t xmm3[0x4] = _mm_shuffle_epi32(zx.o(esi), 0)
int32_t var_34[0x4]

if (cond:0)
    for (int32_t i = 0; i s< 0x10; i += 4)
        int32_t ecx_1 = *(&var_24 + i) * 3
        int128_t var_14
        int32_t eax_4 = *(&var_14 + i) * arg3
        *(&var_24 + i) = ecx_1
        void* eax_5 = eax_4 * 3
        *(&var_14 + i) = eax_5
        result = eax_5 + ecx_1
        *(&var_34 + i) = result
    
    esi = arg3
else
    int32_t xmm2_1[0x4] = __pmulld_xmmdq_memdq(xmm2, data_7092d0)
    var_34 = _mm_add_epi32(__pmulld_xmmdq_memdq(_mm_mullo_epi32(xmm1, xmm3), data_7092d0), xmm2_1)

int32_t ebx = arg4
int32_t i_1 = 0
int32_t i_2 = 0

do
    if (ebx s> 0)
        int32_t eax_6 = esi * 3
        int32_t ecx_2 = 0
        int32_t var_40_1 = 0
        int32_t j_1 = ((ebx - 1) u>> 1) + 1
        j_2 = j_1
        int32_t j
        
        do
            result = *arg2 + ecx_2 + i_1
            
            if (esi s> 0)
                int32_t ecx_3 = var_34[1]
                result += ecx_3
                char* edi_3 = var_34[0] - ecx_3
                int32_t ebx_4 = var_34[2] - ecx_3
                int32_t ebp_1 = var_34[3] - ecx_3
                int32_t k_1 = ((esi - 1) u>> 1) + 1
                int32_t k
                
                do
                    char ecx_4 = *(edi_3 + result)
                    result += 6
                    *edx = ecx_4
                    edx[1] = *(result - 6)
                    edx[2] = *(ebx_4 + result - 6)
                    edx[3] = *(result + ebp_1 - 6)
                    edx = &edx[4]
                    k = k_1
                    k_1 -= 1
                while (k != 1)
                ecx_2 = var_40_1
                j_1 = j_2
                esi = arg3
                i_1 = i_2
            
            ecx_2 += eax_6 * 2
            j = j_1
            j_1 -= 1
            var_40_1 = ecx_2
            j_2 = j_1
        while (j != 1)
        ebx = arg4
    
    i_1 += 1
    i_2 = i_1
while (i_1 s< 3)

sub_69a5bc(eax_1 ^ &j_2)
return result
