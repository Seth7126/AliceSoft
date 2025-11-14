// 函数: sub_5fb8b0
// 地址: 0x5fb8b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

(*(*arg1 + 8))()
float xmm0 = arg1[4]
arg1[2] = arg3
float xmm0_1 = arg1[5]
arg1[3] = arg4
arg1[6] = 0x3f800000
arg1[7] = 0
arg1[8] = 0
arg1[9] = 0
arg1[0xa] = 0
int80_t x87_r0
float xmm1 = 1f / ___libm_sse2_tanf(0x3ec90fdb, x87_r0)
arg1[0xc] = 0
arg1[0xd] = 0
arg1[0xe] = 0
void* eax_3 = *arg2
arg1[0xf] = 0
arg1[0x11] = 0x3f800000
arg1[0x12] = 0
int32_t eax_4 = *(eax_3 + 0x54)
arg1[0x13] = 0
arg1[0x15] = 0
arg1[0xb] = xmm1
float xmm2 = 1f / (xmm0_1 - xmm0)
arg1[0x10] = xmm2 * xmm0_1
arg1[0x14] = (xmm0_1 * xmm0 * xmm2) ^ (data_7094c0).d
int32_t result = eax_4()
arg1[0x26] = result

if (result != 0 && sub_5fba60(arg1).b != 0)
    result.b = 1
    return result

result.b = 0
return result
