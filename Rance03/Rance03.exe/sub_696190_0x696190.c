// 函数: sub_696190
// 地址: 0x696190
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d19be
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = data_75de90
int32_t* ecx

if ((eax_3.b & 1) == 0)
    data_75de90 = eax_3 | 1
    int32_t var_4 = 0
    data_75de94 = 0
    data_75de98 = 0
    data_75de94 = sub_4203c0()
    ecx = _atexit(sub_6d3100)
    int32_t var_4_1 = 0xffffffff

int32_t* Msg_2
int32_t* Msg_1 = Msg_2

if (Msg_1 != 0x81)
    goto label_696237

int32_t ebx_1 = *arg2
uint32_t Msg
WPARAM wParam
int32_t* lParam
HWND hWnd

if (ebx_1 != 0)
    *sub_6962b0(ecx, &hWnd) = ebx_1
label_696237:
    sub_696570(&Msg_2, &hWnd)
    int32_t* Msg_3 = Msg_2
    
    if (Msg_3 != data_75de94)
        int32_t* ebx_2 = Msg_3[5]
        
        if (Msg_1 == 2)
            sub_696330(&Msg_2, Msg_3)
        
        int32_t eax_8 = (**ebx_2)(hWnd, Msg_1, arg1, arg2)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_8
    
    lParam = arg2
    wParam = arg1
    Msg = Msg_1
else
    lParam = arg2
    wParam = arg1
    Msg = 0x81

LRESULT eax_9 = DefWindowProcA(hWnd, Msg, wParam, lParam)
fsbase->NtTib.ExceptionList = ExceptionList
return eax_9
