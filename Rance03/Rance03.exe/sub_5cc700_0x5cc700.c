// 函数: sub_5cc700
// 地址: 0x5cc700
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = *(arg1 + 0x2c)
int32_t ebx

if (ecx != 0)
    ebx.b = (**ecx)()
else
    ebx.b = 0

int32_t ecx_1 = *(arg1 + 0x22c)
int32_t edi_2 = (*(arg1 + 0x234) - *(arg1 + 0x228)) s>> 2

if (edi_2 + 1 u>= ecx_1)
    sub_64ad90(arg1 + 0x224, ecx_1 * 2)
    *(arg1 + 0x234) = *(arg1 + 0x228) + (edi_2 << 2)

int32_t* result = *(arg1 + 0x234)
int32_t ecx_3
ecx_3.b = ebx.b != 0
*result = ecx_3
*(arg1 + 0x234) += 4
return result
