// 函数: sub_4e7e80
// 地址: 0x4e7e80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = *(arg1 + 0x10)
int32_t eax_2 = *(*(*(esi + 0x50) + 0x58) + 0x90)
void* eax_3

if (eax_2 s> 0)
    int32_t var_c_1 = eax_2
    eax_3 = sub_4a56f0(*(esi + 0x54))

int32_t ecx_2

if (eax_2 s<= 0 || eax_3 == 0)
    ecx_2 = 0
else
    ecx_2 = sub_4a1dd0(eax_3)

*(arg1 + 4) = *(esi + 0x84) + ecx_2
float xmm0 = sub_4a1cf0(esi)
void* ecx_4 = *(arg1 + 0x10)
*(arg1 + 8) = int.d(xmm0)
int32_t result = int.d(sub_4a1c10(ecx_4))
*(arg1 + 0xc) = result
return result
