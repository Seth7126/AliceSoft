// 函数: sub_4a71e0
// 地址: 0x4a71e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bcaeb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CGUIController::VTable** var_10 = arg1
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CGUIController::VTable** var_10_1 = arg1
int32_t arg_8
arg1[1] = arg_8
arg1[2] = arg3
*arg1 = &partsengine::CGUIController::`vftable'
arg1[3] = arg2
sub_4ac060(&arg1[4], arg2)
int32_t var_4 = 0
arg1[0x28] = 0
arg_8 = arg4

if (arg4 != 0)
    int32_t edx_1 = arg1[0x22]
    int32_t* eax_6 = arg1[0x21]
    
    if (eax_6 == edx_1)
        sub_412de0(&arg1[0x21], &arg_8)
    else
        while (*eax_6 != arg4)
            eax_6 = &eax_6[1]
            
            if (eax_6 == edx_1)
                break
        
        if (eax_6 == edx_1)
            sub_412de0(&arg1[0x21], &arg_8)

int32_t* ecx_3 = arg1[1]

if (ecx_3 != 0)
    (**ecx_3)(eax_2)
    arg1[1][0x127].vFunc_0.b = 1
    arg1[1][0x128].vFunc_0 = arg1

int32_t* ecx_4 = arg1[3]

if (ecx_4 != 0)
    (**ecx_4)(eax_2)
    arg1[3][0x127].vFunc_0.b = 1
    arg1[3][0x128].vFunc_0 = arg1

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
