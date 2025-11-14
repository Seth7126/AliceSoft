// 函数: sub_653230
// 地址: 0x653230
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6cee88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_64
int32_t eax_2 = __security_cookie ^ &var_64
int32_t __saved_edi
int32_t var_74 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_5
eax_5.b = *(*(arg1 + 0x38) + 0x10)
int32_t var_60

if (eax_5.b != 0)
    sub_4107c0(*(arg1 + 0x114), *(arg1 + 0x118))
    *(arg1 + 0x118) = *(arg1 + 0x114)
    sub_6534c0(arg1 + 0x114)
    int32_t esi_1 = 0
    int32_t eax_7
    int32_t edx_1
    edx_1:eax_7 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x118) - *(arg1 + 0x114))
    var_60 = 0
    int32_t edx_2 = edx_1 s>> 2
    int32_t i_2 = (edx_2 u>> 0x1f) + edx_2
    
    if (i_2 s> 0)
        int32_t* edx_4 = *(arg1 + 0x114) + 0x10
        int32_t i
        
        do
            int32_t eax_8 = *edx_4
            int32_t var_4c
            int32_t* ecx_3 = &var_4c
            var_4c = eax_8
            
            if (esi_1 s>= eax_8)
                ecx_3 = &var_60
            
            edx_4 = &edx_4[6]
            esi_1 = *ecx_3
            var_60 = esi_1
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    int32_t eax_9
    int32_t edx_5
    edx_5:eax_9 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x118) - *(arg1 + 0x114))
    int32_t edx_6 = edx_5 s>> 2
    *(arg1 + 0xf0) = (edx_6 u>> 0x1f) + edx_6 + 1
    sub_670600(arg1 + 0xdc)
    int32_t eax_14
    int32_t edx_8
    edx_8:eax_14 = sx.q(*(arg1 + 0x30))
    *(arg1 + 0x10c) = ((eax_14 - edx_8) s>> 1) * (esi_1 + 2)
    sub_670600(arg1 + 0xf8)

var_60 = GetScrollPos(*(arg1 + 0xe0), *(arg1 + 0xe8))
int32_t lpwndpl
GetWindowPlacement(*(arg1 + 8), &lpwndpl)
int32_t var_28
int32_t var_20
int32_t ebx_4 = divs.dp.d(sx.q(var_20 - *(arg1 + 0x2c) - var_28), *(arg1 + 0x30))
int32_t eax_23
int32_t edx_10
edx_10:eax_23 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x118) - *(arg1 + 0x114))
int32_t eax_24 = var_60
int32_t edx_11 = edx_10 s>> 2

if ((edx_11 u>> 0x1f) + edx_11 s< ebx_4 + eax_24)
    int32_t eax_25
    int32_t edx_12
    edx_12:eax_25 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x118) - *(arg1 + 0x114))
    eax_24 = var_60
    int32_t edx_13 = edx_12 s>> 2
    ebx_4 = (edx_13 u>> 0x1f) + edx_13 - eax_24

int32_t* var_5c = nullptr
int32_t var_58 = 0
int32_t var_54 = 0
int32_t ebx_8 = ebx_4 + eax_24
int32_t var_c_1 = 0

if (eax_24 s< ebx_8)
    int32_t esi_6 = eax_24 * 0x18
    int32_t i_3 = ebx_8 - eax_24
    int32_t i_1
    
    do
        sub_421cd0(&var_5c, *(arg1 + 0x114) + esi_6)
        esi_6 += 0x18
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

char esi_7 = (*(arg1 + 0xcc)).b
int32_t eax_28
int32_t ecx_17
eax_28, ecx_17 = GetScrollPos(*(arg1 + 0xfc), *(arg1 + 0x104))
int32_t var_78_7 = 0
sub_671cc0(&lpwndpl, &var_5c, eax_28, ecx_17, esi_7)
int32_t var_34

if (var_34 u>= 0x10)
    j__free(lpwndpl)

InvalidateRect(*(arg1 + 8), nullptr, 0)
BOOL result = UpdateWindow(*(arg1 + 8))
int32_t* ebx_9 = var_5c

if (ebx_9 != 0)
    int32_t* esi_8 = ebx_9
    
    if (ebx_9 != var_58)
        do
            if (esi_8[5] u>= 0x10)
                j__free(*esi_8)
            
            esi_8[5] = 0xf
            esi_8[4] = 0
            *esi_8 = 0
            esi_8 = &esi_8[6]
        while (esi_8 != var_58)
    
    result = j__free(ebx_9)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_64)
return result
