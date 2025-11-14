// 函数: sub_417a60
// 地址: 0x417a60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

HDC hDC
int32_t var_c = __security_cookie ^ &hDC
int32_t ebx
int32_t var_48 = ebx
int32_t esi
int32_t var_4c = esi
int32_t edi
int32_t var_50 = edi
void lprc_1
RECT rect

if (*(arg1 + 0x90) != 0xffffffff && *(arg1 + 0x94) != 0xffffffff)
    int32_t eax_3 = GetScrollPos(*(arg1 + 0xc), SB_VERT)
    int32_t edi_3 = (*(arg1 + 0x58) + *(arg1 + 0x54)) * (*(arg1 + 0x94) - eax_3)
    GetClientRect(*(arg1 + 0xc), &rect)
    int32_t ecx_3 = *(arg1 + 0x54) + edi_3
    lprc_1.d = 0
    lprc_1:0xc.d = ecx_3
    lprc_1:4.d = ecx_3 - 1
    lprc_1:8.d = rect.right - rect.left
    FillRect(arg2, &lprc_1, GetStockObject(BLACK_BRUSH))

int32_t eax_10
int32_t edx
edx:eax_10 = sx.q(GetScrollPos(*(arg1 + 0xc), SB_HORZ) * *(arg1 + 0x54))
int32_t var_3c = (eax_10 - edx) s>> 1
int32_t eax_13 = GetScrollPos(*(arg1 + 0xc), SB_VERT)
int32_t edi_4 = data_75d4b0
int32_t ebx_3 = (*(arg1 + 0x54) + *(arg1 + 0x58)) * eax_13
RECT lprc
lprc.left = edi_4
int32_t result = (*(**(arg1 + 0x68) + 0x30))(edi_4)
int32_t edx_1 = 0
int32_t result_1 = result
int32_t var_3c_1 = 0

if (result s> 0)
    do
        int32_t* eax_16 = (*(**(arg1 + 0x68) + 0x34))(edi_4, edx_1)
        int32_t eax_19
        int32_t edx_3
        edx_3:eax_19 = sx.q((*(*eax_16 + 0xc))() * *(arg1 + 0x54))
        lprc.left = ((eax_19 - edx_3) s>> 1) - *(arg1 + 0x5c) - arg2
        int32_t eax_25 = (*(*eax_16 + 0x10))()
        lprc_1.d = (*(arg1 + 0x58) + *(arg1 + 0x54)) * eax_25 - ebx_3 + *(arg1 + 0x54)
        int32_t eax_29
        int32_t edx_9
        edx_9:eax_29 = sx.q((*(*eax_16 + 0x14))() * *(arg1 + 0x54))
        lprc_1:4.d = ((eax_29 - edx_9) s>> 1) - *(arg1 + 0x5c) - arg2
        int32_t eax_35 = (*(*eax_16 + 0x10))()
        int32_t edx_10 = *(arg1 + 0x54)
        lprc_1:8.d = edx_10 + 1 + (*(arg1 + 0x58) + edx_10) * eax_35 - ebx_3
        result = FillRect(hDC, &lprc, *(arg1 + 0x8c))
        int32_t var_34
        edi_4 = var_34
        edx_1 = var_3c_1 + 1
        var_3c_1 = edx_1
    while (edx_1 s< result_1)

sub_69a5bc(rect.bottom ^ &var_48)
return result
