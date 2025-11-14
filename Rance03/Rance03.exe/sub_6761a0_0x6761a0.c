// 函数: sub_6761a0
// 地址: 0x6761a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6d0378
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_64
int32_t eax_2 = __security_cookie ^ &var_64
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg1 + 0x1c0
sub_4107c0(*ebx, *(arg1 + 0x1c4))
*(ebx + 4) = *ebx
void* eax_6 = *(arg1 + 0x3c)
*(arg1 + 0x40) = eax_6
bool cond:0 = *(arg1 + 0x44) != 0
var_64 = eax_6 + 1
int32_t* eax_7
eax_7.b = cond:0
int32_t* i_5 = nullptr
int32_t* var_60

if (eax_7.b != 0 && arg2 s> 0)
    int32_t* eax_9 = data_75d4fc + 0x178
    int32_t var_78_1 = arg2
    var_60 = eax_9
    
    if (sub_4a55e0(eax_9) != 0)
        int32_t var_78_2 = arg2
        int32_t* eax_12
        
        if (sub_4a55e0(var_60) != 0)
            eax_12 = sub_4f0040(arg2, var_64)
        else
            eax_12 = nullptr
        
        enum SCROLLBAR_CONSTANTS nBar = *(arg1 + 0x1b0)
        var_60 = eax_12
        int32_t* ecx_3 = GetScrollPos(*(arg1 + 0x1a8), nBar)
        
        if (*(arg1 + 0x44) != arg2)
            *(arg1 + 0x1cc) = 0
        
        int32_t* eax_13 = var_60
        *(arg1 + 0x38) = 0
        int32_t* var_84
        
        switch (eax_13)
            case nullptr
                void* var_78_3 = ebx
                sub_676700(arg1, arg2, var_64, ecx_3)
            case 1
                void* var_78_4 = ebx
                sub_6767c0(arg1, arg2, var_64, ecx_3)
            case 2
                void* var_78_5 = ebx
                sub_676880(arg1, arg2, var_64, ecx_3)
            case 3
                void* var_78_6 = ebx
                sub_676940(arg1, arg2, var_64, ecx_3)
            case 4
                void* var_78_7 = ebx
                sub_676a00(arg1, arg2, var_64, ecx_3)
            case 5
                void* var_78_8 = ebx
                sub_676ac0(arg1, arg2, var_64, ecx_3)
            case 6
                void* var_78_9 = ebx
                sub_676b80(arg1, arg2, var_64, ecx_3)
            case 7
                void* var_78_10 = ebx
                sub_676c40(arg1, arg2, var_64, ecx_3)
            case 8
                void* var_78_11 = ebx
                sub_676d00(arg1, var_84)
            case 9
                void* var_78_12 = ebx
                sub_676db0(arg1, var_84)
            case 0xb
                void* var_78_13 = ebx
                sub_676e60(arg1, arg2, var_64, ecx_3)
            case 0xc
                void* var_78_14 = ebx
                sub_677110(arg1, arg2, var_64, ecx_3)
            case 0xd
                void* var_78_15 = ebx
                sub_6774f0(arg1, arg2, var_64, ecx_3)
            case 0xe
                void* var_78_16 = ebx
                sub_678040(arg1, arg2, var_64, ecx_3)
            case 0xf
                void* var_78_17 = ebx
                sub_6782b0(arg1, arg2, var_64, ecx_3)
            case 0x10
                void* var_78_18 = ebx
                sub_678520(arg1, arg2, var_64, ecx_3)
            case 0x11
                void* var_78_19 = ebx
                sub_678b70(arg2, var_64, ecx_3)
            case 0x12
                void* var_78_20 = ebx
                sub_678d90(arg1, arg2, var_64, ecx_3)
            case 0x13
                void* var_78_21 = ebx
                sub_6792b0(arg2, var_64, ecx_3)
            case 0x14
                void* var_78_22 = ebx
                sub_679520(arg1, arg2, var_64, ecx_3)

int32_t eax_14
int32_t edx_2
edx_2:eax_14 = muls.dp.d(0x2aaaaaab, *(ebx + 4) - *ebx)
int32_t edx_3 = edx_2 s>> 2
int32_t i_3 = (edx_3 u>> 0x1f) + edx_3

if (i_3 s> 0)
    int32_t* edx_5 = *ebx + 0x10
    int32_t* i_6 = nullptr
    int32_t i
    
    do
        int32_t* eax_15 = *edx_5
        int32_t** ecx_24 = &i_5
        var_60 = eax_15
        
        if (eax_15 s>= i_6)
            ecx_24 = &var_60
        
        edx_5 = &edx_5[6]
        i_6 = *ecx_24
        i_5 = i_6
        i = i_3
        i_3 -= 1
    while (i != 1)
    ebx = arg1 + 0x1c0

int32_t eax_16
int32_t edx_6
edx_6:eax_16 = muls.dp.d(0x2aaaaaab, *(ebx + 4) - *ebx)
int32_t edx_7 = edx_6 s>> 2
*(arg1 + 0x19c) = (edx_7 u>> 0x1f) + edx_7 + 1
sub_670600(arg1 + 0x188)
int32_t eax_21
int32_t edx_9
edx_9:eax_21 = sx.q(*(arg1 + 0x30))
*(arg1 + 0x1b8) = ((eax_21 - edx_9) s>> 1) * (i_5 + 2)
sub_670600(arg1 + 0x1a4)
var_60 = GetScrollPos(*(arg1 + 0x18c), *(arg1 + 0x194))
int32_t lpwndpl
GetWindowPlacement(*(arg1 + 8), &lpwndpl)
int32_t var_28
int32_t var_20
int32_t i_7 = divs.dp.d(sx.q(var_20 - *(arg1 + 0x2c) - var_28), *(arg1 + 0x30))
struct _EXCEPTION_REGISTRATION_RECORD** var_54 = nullptr
i_5 = i_7
int32_t var_50 = 0
int32_t var_4c = 0
int32_t var_c_1 = 0
int32_t eax_31
int32_t edx_11
edx_11:eax_31 = muls.dp.d(0x2aaaaaab, *(ebx + 4) - *ebx)
int32_t edx_12 = edx_11 s>> 2
int32_t* edx_13 = var_60
int32_t* i_4

if ((edx_12 u>> 0x1f) + edx_12 s>= i_5 + edx_13)
    i_4 = i_5
else
    int32_t eax_32
    int32_t edx_14
    edx_14:eax_32 = muls.dp.d(0x2aaaaaab, *(ebx + 4) - *ebx)
    int32_t edx_15 = edx_14 s>> 2
    edx_13 = var_60
    i_4 = (edx_15 u>> 0x1f) + edx_15 - edx_13

if (edx_13 s< i_4 + edx_13)
    int32_t* i_2 = i_4
    int32_t edi_8 = edx_13 * 0x18
    int32_t* i_1
    
    do
        sub_421cd0(&var_54, *ebx + edi_8)
        edi_8 += 0x18
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

struct _EXCEPTION_REGISTRATION_RECORD** eax_35
eax_35.b = *(arg1 + 0x170)
char edi_9 = (*(arg1 + 0x178)).b
int32_t var_58
var_58.b = eax_35.b
int32_t eax_36
int32_t ecx_41
eax_36, ecx_41 = GetScrollPos(*(arg1 + 0x1a8), *(arg1 + 0x1b0))
int32_t var_78_27 = var_58
int32_t* eax_37 = sub_671cc0(&lpwndpl, &var_54, eax_36, ecx_41, edi_9 - (*(arg1 + 0x34)).b)

if (arg1 + 0x48 != eax_37)
    if (*(arg1 + 0x5c) u>= 0x10)
        j__free(*(arg1 + 0x48))
    
    *(arg1 + 0x5c) = 0xf
    *(arg1 + 0x58) = 0
    *(arg1 + 0x48) = 0
    
    if (eax_37[5] u>= 0x10)
        *(arg1 + 0x48) = *eax_37
        *eax_37 = 0
    else
        void* eax_38 = eax_37[4]
        
        if (eax_38 != 0xffffffff)
            _memcpy(arg1 + 0x48, eax_37, eax_38 + 1, eax_4)
    
    *(arg1 + 0x58) = eax_37[4]
    *(arg1 + 0x5c) = eax_37[5]
    eax_37[5] = 0xf
    eax_37[4] = 0
    *eax_37 = 0

int32_t var_34

if (var_34 u>= 0x10)
    j__free(lpwndpl)

sub_670d10(arg1 + 0x68, 0, *(arg1 + 0x184), *(arg1 + 0x174), *(arg1 + 0x178))
HWND hWnd = *(arg1 + 8)
*(arg1 + 0x44) = arg2
InvalidateRect(hWnd, nullptr, 0)
BOOL result = UpdateWindow(*(arg1 + 8))
struct _EXCEPTION_REGISTRATION_RECORD** ebx_2 = var_54

if (ebx_2 != 0)
    struct _EXCEPTION_REGISTRATION_RECORD** esi_1 = ebx_2
    
    if (ebx_2 != var_50)
        do
            if (esi_1[5] u>= 0x10)
                j__free(*esi_1)
            
            esi_1[5] = 0xf
            esi_1[4] = 0
            *esi_1 = nullptr
            esi_1 = &esi_1[6]
        while (esi_1 != var_50)
    
    result = j__free(ebx_2)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_64)
return result
