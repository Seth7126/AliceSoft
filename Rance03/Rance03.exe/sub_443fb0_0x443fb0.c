// 函数: sub_443fb0
// 地址: 0x443fb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edx = 0
int32_t ecx = *(arg1 + 4)
uint32_t esi_1 = ecx u>> 4
int32_t edx_2 = arg5
uint32_t ebx_1 = modu.dp.d(edx:arg2, esi_1) << 4
uint32_t ebp_1 = divu.dp.d(edx:arg2, esi_1) << 4

if (arg5 s< 0)
    edx_2 = arg5 - 1

uint32_t eax_2 = arg4

if (eax_2 s< 0)
    eax_2 -= 1

int32_t eax_4
int32_t edx_3
edx_3:eax_4 = sx.q(edx_2)
int32_t eax_7
int32_t edx_4
edx_4:eax_7 = sx.q(eax_2)
uint32_t esi_5 = ((eax_4 - edx_3) s>> 1) * ecx + ((eax_7 - edx_4) s>> 1)
int32_t ecx_2 = ecx * ebp_1 + ebx_1

if ((arg5.b & 1) == 0)
    if ((arg4.b & 1) == 0)
        sub_444fc0(arg1, ecx_2, ecx, arg3, esi_5)
        int32_t eax_43 = *(arg1 + 4)
        sub_444fc0(arg1, eax_43 * ebp_1 + 8 + ebx_1, eax_43, arg3, esi_5)
        int32_t eax_47 = *(arg1 + 4)
        sub_444fc0(arg1, eax_47 * (ebp_1 + 8) + ebx_1, eax_47, arg3, esi_5)
        int32_t eax_50 = *(arg1 + 4)
        sub_444fc0(arg1, eax_50 * (ebp_1 + 8) + 8 + ebx_1, eax_50, arg3, esi_5)
    else
        sub_444e10(arg1, ecx_2, ecx, arg3, esi_5)
        int32_t eax_32 = *(arg1 + 4)
        sub_444e10(arg1, eax_32 * ebp_1 + 8 + ebx_1, eax_32, arg3, esi_5)
        int32_t eax_36 = *(arg1 + 4)
        sub_444e10(arg1, eax_36 * (ebp_1 + 8) + ebx_1, eax_36, arg3, esi_5)
        int32_t eax_39 = *(arg1 + 4)
        sub_444e10(arg1, eax_39 * (ebp_1 + 8) + 8 + ebx_1, eax_39, arg3, esi_5)
else if ((arg4.b & 1) == 0)
    sub_444ba0(arg1, ecx_2, ecx, arg3, esi_5)
    int32_t eax_21 = *(arg1 + 4)
    sub_444ba0(arg1, eax_21 * ebp_1 + 8 + ebx_1, eax_21, arg3, esi_5)
    int32_t eax_25 = *(arg1 + 4)
    sub_444ba0(arg1, eax_25 * (ebp_1 + 8) + ebx_1, eax_25, arg3, esi_5)
    int32_t eax_28 = *(arg1 + 4)
    sub_444ba0(arg1, eax_28 * (ebp_1 + 8) + 8 + ebx_1, eax_28, arg3, esi_5)
else
    sub_444870(arg1, ecx_2, ecx, arg3, esi_5)
    int32_t eax_10 = *(arg1 + 4)
    sub_444870(arg1, eax_10 * ebp_1 + 8 + ebx_1, eax_10, arg3, esi_5)
    int32_t ecx_5 = *(arg1 + 4)
    sub_444870(arg1, (ebp_1 + 8) * ecx_5 + ebx_1, ecx_5, arg3, esi_5)
    int32_t eax_17 = *(arg1 + 4)
    sub_444870(arg1, eax_17 * (ebp_1 + 8) + 8 + ebx_1, eax_17, arg3, esi_5)

int32_t edx_5 = arg5

if (arg5 s< 0)
    edx_5 = arg5 - 2

if (arg4 s< 0)
    arg2 = arg4 - 2
else
    arg2 = arg4

uint32_t eax_57 = *(arg1 + 4) u>> 1
int32_t eax_59
int32_t edx_6
edx_6:eax_59 = sx.q(edx_5)
int32_t eax_61
int32_t edx_8
edx_8:eax_61 = sx.q(arg2)
uint32_t esi_14 = (((edx_6 & 3) + eax_59) s>> 2) * eax_57 + ((eax_61 + (edx_8 & 3)) s>> 2)
int32_t eax_65
int32_t edx_10
edx_10:eax_65 = sx.q(arg5)
int32_t eax_69
int32_t edx_11
edx_11:eax_69 = sx.q(arg4)

if ((((eax_65 - edx_10) s>> 1).b & 1) == 0)
    uint32_t ebp_3 = ebp_1 u>> 1
    uint32_t ebx_3 = ebx_1 u>> 1
    
    if ((((eax_69 - edx_11) s>> 1).b & 1) == 0)
        sub_445fb0(arg1, ebp_3 * eax_57 + ebx_3, eax_57, arg3, esi_14)
        uint32_t eax_100 = *(arg1 + 4) u>> 1
        sub_446100(arg1, eax_100 * ebp_3 + ebx_3, eax_100, arg3, esi_14)
        int32_t eax_103
        eax_103.b = 1
        return eax_103
    
    sub_445c50(arg1, ebp_3 * eax_57 + ebx_3, eax_57, arg3, esi_14)
    uint32_t eax_93 = *(arg1 + 4) u>> 1
    sub_445e00(arg1, eax_93 * ebp_3 + ebx_3, eax_93, arg3, esi_14)
    int32_t eax_96
    eax_96.b = 1
    return eax_96

uint32_t ebp_2 = ebp_1 u>> 1
uint32_t ebx_2 = ebx_1 u>> 1

if ((((eax_69 - edx_11) s>> 1).b & 1) == 0)
    sub_445770(arg1, ebp_2 * eax_57 + ebx_2, eax_57, arg3, esi_14)
    uint32_t eax_83 = *(arg1 + 4) u>> 1
    sub_4459e0(arg1, eax_83 * ebp_2 + ebx_2, eax_83, arg3, esi_14)
    int32_t eax_86
    eax_86.b = 1
    return eax_86

sub_445110(arg1, ebp_2 * eax_57 + ebx_2, eax_57, arg3, esi_14)
uint32_t eax_76 = *(arg1 + 4) u>> 1
sub_445440(arg1, eax_76 * ebp_2 + ebx_2, eax_76, arg3, esi_14)
int32_t eax_79
eax_79.b = 1
return eax_79
