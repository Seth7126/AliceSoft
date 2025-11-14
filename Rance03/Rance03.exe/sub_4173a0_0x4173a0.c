// 函数: sub_4173a0
// 地址: 0x4173a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b40eb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t var_90
int32_t eax_2 = __security_cookie ^ &var_90
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
SetFocus(arg2)

if (data_75d4b4 != 0)
    HWND hWnd = *(arg1 + 0xc)
    uint32_t ecx_1 = arg3 u>> 0x10
    var_90 = zx.d(arg3.w)
    int32_t eax_7 = GetScrollPos(hWnd, SB_HORZ)
    int32_t eax_8 = GetScrollPos(*(arg1 + 0xc), SB_VERT)
    int32_t edi_1 = *(arg1 + 0x54)
    int32_t eax_10
    int32_t edx_1
    edx_1:eax_10 = sx.q(edi_1)
    int32_t ecx_5 = *(arg1 + 0x58) + edi_1
    *(arg1 + 0x90) = eax_7 + divs.dp.d(sx.q(var_90), (eax_10 - edx_1) s>> 1)
    *(arg1 + 0x94) = divs.dp.d(sx.q(ecx_1), ecx_5) + eax_8
    InvalidateRect(arg2, nullptr, 0)
    UpdateWindow(arg2)
    int32_t* eax_19 = sub_417820(arg1, var_90, ecx_1)
    
    if (eax_19 != 0)
        void var_84
        sub_40dcf0(&var_84, eax_19, *(arg1 + 0x6c))
        int32_t var_4 = 0
        int32_t var_80
        char var_14
        
        if (var_14 != 0 && var_80 != 2 && var_80 != 0x30 && var_80 != 3 && var_80 != 4)
            void* ecx_8 = data_75d4b8
            int32_t var_48
            int32_t var_44
            
            if (ecx_8 != 0 && (*(*(ecx_8 + 0x84) + 0xc))(eax_4) != 0)
                sub_427160(var_48, var_44)
        
        sub_405be0(&var_84)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_90)
return 0
