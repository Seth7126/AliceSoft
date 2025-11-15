// 函数: sub_4f30b0
// 地址: 0x4f30b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7361eb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CGUIController::VTable** var_14 = arg1
void* arg_8
arg1[1] = arg_8
arg1[2] = arg3
*arg1 = &partsengine::CGUIController::`vftable'
arg1[3] = arg2
sub_4fb040(&arg1[4], arg2)
int32_t var_8_1 = 0
arg1[0x97] = 0
arg_8 = arg4

if (arg4 != 0)
    int32_t eax_6 = arg1[0x89]
    int32_t* edx_1 = arg1[0x88]
    
    if (edx_1 == eax_6)
        sub_42ccf0(&arg1[0x88], &arg_8)
    else
        while (*edx_1 != arg4)
            edx_1 = &edx_1[1]
            
            if (edx_1 == eax_6)
                break
        
        if (edx_1 == eax_6)
            sub_42ccf0(&arg1[0x88], &arg_8)

int32_t* ecx_3 = arg1[1]

if (ecx_3 != 0)
    (**ecx_3)(eax_2)
    arg1[1][0x90].vFunc_0.b = 1
    arg1[1][0x91].vFunc_0 = arg1

int32_t* ecx_4 = arg1[3]

if (ecx_4 != 0)
    (**ecx_4)(eax_2)
    arg1[3][0x90].vFunc_0.b = 1
    arg1[3][0x91].vFunc_0 = arg1

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
