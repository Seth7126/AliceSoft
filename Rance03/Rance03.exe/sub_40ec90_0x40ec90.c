// 函数: sub_40ec90
// 地址: 0x40ec90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b372b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_9c
int32_t eax_2 = __security_cookie ^ &var_9c
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx = arg2[1]
void* esi = *arg2
int32_t* ecx = arg5
int32_t edx = arg6
int32_t* var_98 = ecx
var_9c = edx

if (esi != ebx)
    do
        sub_405be0(esi)
        esi += 0x74
    while (esi != ebx)
    
    ecx = var_98
    edx = var_9c

arg2[1] = *arg2
void* result

if (arg4 == 0 || ecx == 0)
    result.b = 0
else
    result = (*(*ecx + 4))(edx)
    
    if (result == 0)
        result.b = 0
    else
        int32_t eax_7 = (*(*var_98 + 0x1c))(var_9c)
        void* ebx_1 = (*(*arg4 + 0x20))(eax_7)
        
        if (eax_7 s< 0 || ebx_1 s< 0)
            result.b = 0
        else
            sub_402670(arg3, (*(*arg4 + 4))(eax_7))
            sub_410270(arg2, ebx_1)
            int32_t esi_2 = 0
            
            if (ebx_1 s> 0)
                do
                    void var_84
                    sub_40d770(&var_84)
                    int32_t var_4 = 0
                    char* eax_10 = (*(*arg4 + 0x28))(eax_7, esi_2)
                    int32_t var_80
                    
                    if (eax_10 != 0)
                        var_80 = (*(*arg4 + 0x24))(eax_7, esi_2)
                        void var_60
                        sub_402670(&var_60, eax_10)
                        sub_40e960(&var_84, (*(*result + 0x18))(eax_4) + (esi_2 << 2), var_9c, 
                            esi_2, arg4, var_98)
                    
                    sub_410380(arg2, &var_84)
                    
                    if (var_80 == 0x12 || var_80 == 0x33 || var_80 == 0x13)
                        esi_2 += 1
                    
                    int32_t var_4_1 = 0xffffffff
                    sub_405be0(&var_84)
                    esi_2 += 1
                while (esi_2 s< ebx_1)
            
            result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_9c)
return result
