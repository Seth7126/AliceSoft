// 函数: sub_5cf890
// 地址: 0x5cf890
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax = sub_5d5dc0(arg1 + 0x16c)
struct sys43vm::CPage::VTable*** esi = *(arg1 + 0x174) + (eax << 2)
struct sys43vm::CPage::VTable** eax_1
int32_t ecx_2
int32_t edx_1
eax_1, ecx_2, edx_1 = sub_5d5ae0(arg1 + 0x188)
*esi = eax_1

if (eax s< 0)
    int32_t var_14_1 = 0x6ea6c4
    return sub_5c2400(eax_1, edx_1, ecx_2, arg1, "DG_NEW")

int32_t ecx_3 = *(arg1 + 0x22c)
int32_t esi_3 = (*(arg1 + 0x234) - *(arg1 + 0x228)) s>> 2

if (esi_3 + 1 u>= ecx_3)
    sub_64ad90(arg1 + 0x224, ecx_3 * 2)
    *(arg1 + 0x234) = *(arg1 + 0x228) + (esi_3 << 2)

int32_t* result = *(arg1 + 0x234)
*result = eax
*(arg1 + 0x234) += 4
return result
