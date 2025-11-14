// 函数: sub_5c28d0
// 地址: 0x5c28d0
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
int32_t* edi = arg_4
char arg_7c = 0
char arg_7d[0x4003]
_memset(&arg_7d, 0, 0x3fff)
void arg_c
_vsprintf_s(&arg_7c, 0x4000, arg4, &arg_c)
char result

if (edi[0x85].b != 0)
    result = sub_5ccdf0(edi, &arg_7c)

if (edi[0x85].b == 0 || result != 0)
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
    int32_t ecx_5 = sub_5c22f0(edi, &var_10)
    HWND hWndParent
    
    if (data_75d534 == 0)
        hWndParent = nullptr
    else
        int32_t var_2c_5 = ecx_5
        int32_t* eax_5 = sub_6203f0()
        
        if (eax_5 == 0)
            hWndParent = nullptr
        else
            int32_t* eax_6 = (**eax_5)(0x6ea7a0)
            
            if (eax_6 == 0)
                hWndParent = nullptr
            else
                hWndParent = (**eax_6)(eax_4)
    
    HINSTANCE hInstance = edi[2]
    HINSTANCE hInstance_1 = hInstance
    void arg_40
    sub_568f90(&arg_40, &var_10)
    char arg_60 = 0
    int32_t eax_9
    int32_t ecx_9
    eax_9, ecx_9 = DialogBoxParamA(hInstance, 0x6c, hWndParent, sub_697100, &dwInitParam)
    int32_t arg_20 = eax_9
    
    if (eax_9 != 0)
        if (arg_60 != 0)
            ExceptionList = edi[0x82] - edi[0x83]
            uint32_t var_2c_8 = zx.d(data_75dd32)
            struct _EXCEPTION_REGISTRATION_RECORD** var_30_1 = &ExceptionList
            int32_t** __saved_ebp
            sub_4ce350(&edi[0x49a], &__saved_ebp, ecx_9)
            void arg_64
            sub_401f60(&arg_64, &arg_7c)
            arg_4090.b = 3
            ExceptionList = edi[0x82] - edi[0x83]
            sub_412d60(sub_5cfe90(&edi[0x49c], &ExceptionList), &arg_64)
            sub_401fb0(&arg_64)
        
        hWndParent.b = 1
    else
        edi[0x85].b = eax_9.b
        
        if (edi[0x86] == eax_9)
            edi[0x86] = 1
        
        hWndParent.b = 0
    
    int32_t (* esi_1)(void* arg1) = var_10
    
    if (esi_1 != 0)
        sub_4107c0(esi_1, var_c_1)
        j__free(esi_1)
    
    sub_64b190(&dwInitParam)
    result = hWndParent.b

fsbase->NtTib.ExceptionList = arg_4088
sub_69a5bc(eax_2 ^ &var_18)
return result
