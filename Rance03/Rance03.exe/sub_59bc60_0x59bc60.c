// 函数: sub_59bc60
// 地址: 0x59bc60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4_1 = arg1
struct sealengine::CDualQuaternion::VTable** result = arg2
*result = &sealengine::CDualQuaternion::`vftable'
*(result + 4) = *(arg1 + 4)
float xmm6 = *(arg1 + 0x18)
float xmm5 = *(arg1 + 0x14)
float xmm2 = *(arg1 + 0xc)
float xmm1 = *(arg1 + 4)
float xmm4 = *(arg1 + 0x1c)
float xmm1_1 = *(arg1 + 8)
float xmm5_1 = xmm5 f* *(arg1 + 0x10)
float xmm3_4 = (xmm1_1 * xmm5 - xmm1 * xmm6 + xmm4 f* *(arg1 + 0x10)) * 0.5f
result[6] = (xmm6 f* *(arg1 + 0x10) - xmm5 * xmm2 + xmm1 * xmm4) * 0.5f
result[7] = xmm3_4
result[8] = (xmm1 * xmm5 + xmm1_1 * xmm6 + xmm4 * xmm2) * -0.5f
result[5] = (xmm2 * xmm6 + xmm5_1 - xmm1_1 * xmm4) * 0.5f
return result
