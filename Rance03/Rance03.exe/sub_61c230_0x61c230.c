// 函数: sub_61c230
// 地址: 0x61c230
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b2e88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_38
int32_t eax_2 = __security_cookie ^ &var_38
int32_t __saved_edi
int32_t var_44 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = data_75d52c
HANDLE hHandle = *(esi + 8)
enum WAIT_EVENT result

if (hHandle != 0)
    result = WaitForSingleObject(hHandle, 0)

if (hHandle == 0 || result != WAIT_TIMEOUT)
    sub_61b910(esi)
    
    if (*(esi + 0x90) != 0)
        bool cond:0_1 = *(esi + 0x94) u< 0x10
        void* eax_5 = esi + 0x80
        *(eax_5 + 0x10) = 0
        
        if (not(cond:0_1))
            eax_5 = *eax_5
        
        *eax_5 = 0
    
    if (*(esi + 0x74) != *(esi + 0x78))
        void* eax_9 = *(esi + 0x78) - *(esi + 0x74)
        int32_t* var_4c_2 = *(esi + 0x74)
        int32_t var_20_1 = 0xf
        int32_t var_24_1 = 0
        char var_34 = 0
        sub_402110(&var_34, var_4c_2, eax_9)
        int32_t var_c_1 = 0
        char* ecx_4 = &var_34
        
        if (var_20_1 u>= 0x10)
            ecx_4 = var_34.d
        
        (*(*arg1 + 4))(ecx_4)
        
        if (var_20_1 u>= 0x10)
            j__free(var_34.d)
    else
        (*(*arg1 + 4))(0x6da7f3)
    
    result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_38)
return result
