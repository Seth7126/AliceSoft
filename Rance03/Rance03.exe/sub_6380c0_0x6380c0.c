// 函数: sub_6380c0
// 地址: 0x6380c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = *arg1
int32_t edx = arg1[4]
int32_t edi_1 = arg2 + arg1[1]
int32_t eax_1 = edx - ((edi_1 + 7) s>> 3)

if (ebx s> eax_1)
    arg1[3] = 0
    *arg1 = edx
    arg1[1] = 1
    return eax_1

int32_t eax_3
int32_t edx_1
edx_1:eax_3 = sx.q(edi_1)
arg1[1] = edi_1 & 7
int32_t eax_5 = (eax_3 + (edx_1 & 7)) s>> 3
arg1[3] += eax_5
int32_t eax_6 = eax_5 + ebx
*arg1 = eax_6
return eax_6
