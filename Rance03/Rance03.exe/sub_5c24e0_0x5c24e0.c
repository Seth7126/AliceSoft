// 函数: sub_5c24e0
// 地址: 0x5c24e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c9ac1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_18 = arg3
__chkstk(0x4074)
int32_t eax_2 = __security_cookie ^ &var_18
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
int32_t arg_4060
fsbase->NtTib.ExceptionList = &arg_4060
char arg_54[0x4004]
arg_54[0] = 0
struct win32only::CDialog::usernotice::CVMErrorDialog::VTable* dwInitParam
_vsprintf_s(&arg_54, 0x4000, arg5, &dwInitParam)

if (arg4[0x86] != 2)
    sub_64b100(&dwInitParam)
    int32_t arg_4068 = 0
    char arg_3c = 0
    sub_401f60(&var_c, &arg_54)
    arg_4068.b = 1
    void arg_18
    sub_401ff0(&arg_18, &var_c, 0, 0xffffffff)
    
    if (arg5 u>= 0x10)
        j__free(var_c)
    
    var_18 = nullptr
    int32_t var_14 = 0
    int32_t var_10_1 = 0
    arg_4068.b = 2
    int32_t ecx_4 = sub_5c22f0(arg4, &var_18)
    HWND hWndParent
    
    if (data_75d534 == 0)
        hWndParent = nullptr
    else
        int32_t var_2c_4 = ecx_4
        int32_t* eax_5 = sub_6203f0()
        
        if (eax_5 == 0)
            hWndParent = nullptr
        else
            int32_t* eax_6 = (**eax_5)(0x6ea7a0)
            
            if (eax_6 == 0)
                hWndParent = nullptr
            else
                hWndParent = (**eax_6)(eax_4)
    
    HINSTANCE hInstance = arg4[2]
    HINSTANCE hInstance_1 = hInstance
    void arg_30
    sub_568f90(&arg_30, &var_18)
    char arg_50 = 0
    int32_t arg_10 = DialogBoxParamA(hInstance, 0x6c, hWndParent, sub_697100, &dwInitParam)
    arg4[0x85].b = 0
    
    if (arg4[0x86] == 0)
        arg4[0x86] = 1
    
    int32_t* esi_1 = var_18
    
    if (esi_1 != 0)
        sub_4107c0(esi_1, var_14)
        j__free(esi_1)
    
    sub_64b190(&dwInitParam)

int32_t* result
result.b = 0
fsbase->NtTib.ExceptionList = arg_4060
sub_69a5bc(eax_2 ^ &var_18)
return result
