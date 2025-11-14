// 函数: sub_5c26a0
// 地址: 0x5c26a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c9b1c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_18 = arg3
__chkstk(0x409c)
int32_t eax_2 = __security_cookie ^ &var_18
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
int32_t arg_4088
fsbase->NtTib.ExceptionList = &arg_4088
int32_t* arg_4
int32_t* ebx = arg_4
char arg_7c = 0
void arg_c
_vsprintf_s(&arg_7c, 0x4000, arg4, &arg_c)
char result

if (ebx[0x85].b != 0)
    result = sub_5ccdf0(ebx, &arg_7c)

if (ebx[0x85].b == 0 || result != 0)
    result = 0
else
    struct win32only::CDialog::usernotice::CVMErrorDialog::VTable* dwInitParam
    sub_64b100(&dwInitParam)
    int32_t arg_4090 = 0
    sub_401f60(&arg_4, &arg_7c)
    arg_4090.b = 1
    void arg_28
    sub_401ff0(&arg_28, &arg_4, 0, 0xffffffff)
    
    if (arg5 u>= 0x10)
        j__free(arg_4)
    
    var_10 = nullptr
    int32_t var_c_1 = 0
    int32_t var_8_1 = 0
    arg_4090.b = 2
    sub_5c22f0(ebx, &var_10)
    HWND hWndParent = sub_5c2b60(eax_4)
    HINSTANCE hInstance = ebx[2]
    HINSTANCE hInstance_1 = hInstance
    void arg_40
    sub_568f90(&arg_40, &var_10)
    char arg_60 = 0
    int32_t eax_5
    int32_t ecx_6
    eax_5, ecx_6 = DialogBoxParamA(hInstance, 0x6c, hWndParent, sub_697100, &dwInitParam)
    int32_t arg_20 = eax_5
    
    if (eax_5 == 0)
        sub_5c0fc0(ebx)
    else if (arg_60 != 0)
        ExceptionList = ebx[0x82] - ebx[0x83]
        uint32_t var_2c_7 = zx.d(data_75dd32)
        struct _EXCEPTION_REGISTRATION_RECORD** var_30_1 = &ExceptionList
        int32_t** __saved_ebp
        sub_4ce350(&ebx[0x49a], &__saved_ebp, ecx_6)
        void arg_64
        sub_401f60(&arg_64, &arg_7c)
        arg_4090.b = 3
        ExceptionList = ebx[0x82] - ebx[0x83]
        sub_412d60(sub_5cfe90(&ebx[0x49c], &ExceptionList), &arg_64)
        sub_401fb0(&arg_64)
    
    sub_410440(&var_10)
    sub_64b190(&dwInitParam)
    result = 1

fsbase->NtTib.ExceptionList = arg_4088
sub_69a5bc(eax_2 ^ &var_18)
return result
