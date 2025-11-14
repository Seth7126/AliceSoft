// 函数: sub_4a2800
// 地址: 0x4a2800
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax_2 = *(*(*(arg1 + 0x50) + 0x58) + 0x90)
int32_t eax_3

if (eax_2 s> 0)
    int32_t var_8_1 = eax_2
    eax_3 = sub_4a56f0(*(arg1 + 0x54))

int32_t eax_4

if (eax_2 s<= 0 || eax_3 == 0)
    eax_4 = 0xff
else
    eax_4 = sub_4a2800()

return *(arg1 + 0xa8) * eax_4 s/ 0xff
