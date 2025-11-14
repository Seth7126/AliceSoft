// 函数: sub_466b30
// 地址: 0x466b30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5378
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_2c
int32_t eax_2 = __security_cookie ^ &var_2c
int32_t __saved_edi
int32_t var_3c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_5 = *(arg1 + 0x1c)
int32_t ebx
ebx.b = 0
bool cond:0 = *(arg1 + 0x20) == 0
void* edi = *eax_5
*(arg1 + 0x24) = edi

if (not(cond:0) && edi != eax_5)
    void* edi_1 = edi + 8
    
    if (edi != 0xfffffff8)
        void* i
        
        do
            if (*(edi_1 + 0x1c) == 0x10 && sub_464b20(edi_1 + 4) == 0)
                char eax_7 = sub_464ab0(edi_1 + 4)
                
                if (eax_7 == 0)
                    int32_t var_14_1 = 0xf
                    int32_t var_18_1 = 0
                    char var_28 = eax_7
                    sub_402110(&var_28, 0x6dce38, 0x28)
                    int32_t var_4 = 0
                    sub_456ab0(*(arg1 + 0x28), &var_28, edi_1)
                    int32_t var_4_1 = 0xffffffff
                    
                    if (var_14_1 u>= 0x10)
                        j__free(var_28.d)
                    
                    ebx.b = 1
            
            if (*(arg1 + 0x20) == 0)
                break
            
            int32_t* eax_8 = *(arg1 + 0x24)
            
            if (eax_8 == *(arg1 + 0x1c))
                break
            
            i = *eax_8
            *(arg1 + 0x24) = i
            
            if (*(arg1 + 0x20) == 0)
                break
            
            if (i == *(arg1 + 0x1c))
                break
            
            edi_1 = i + 8
        while (i != 0xfffffff8)

int32_t result
result.b = ebx.b == 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_2c)
return result
