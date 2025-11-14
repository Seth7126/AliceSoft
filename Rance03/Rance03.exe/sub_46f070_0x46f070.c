// 函数: sub_46f070
// 地址: 0x46f070
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b95a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
EnterCriticalSection(*(arg1 + 0x18) + 4)
int32_t* edi = *(arg1 + 0xc)
int32_t* i = *edi

while (i != edi)
    void* ecx = i[5]
    
    if (ecx != 0)
        int32_t var_28_1 = 0xf
        int32_t var_2c_1 = 0
        char var_3c = 0
        int32_t var_4 = 0
        int32_t var_40_1 = i[4]
        var_44 = 1
        
        if (&var_3c != ecx + 0x14)
            sub_401ff0(&var_3c, ecx + 0x14, 0, 0xffffffff)
        
        int32_t var_24_1 = *(i[5] + 0xc)
        char var_20_1 = (*(**(i[5] + 4) + 0x18))(eax_4)
        (*(**(i[5] + 4) + 0x1c))()
        float var_1c_1 = fconvert.s(unimplemented  {fstp dword [esp+0x3c], st0})
        unimplemented  {fstp dword [esp+0x3c], st0}
        int16_t top = top + 1
        int32_t var_18_1 = (*(**(i[5] + 4) + 0x20))()
        int32_t var_14_1 = (*(**(i[5] + 4) + 0x24))()
        sub_46f2b0(arg2, &var_44)
        int32_t var_4_1 = 0xffffffff
        
        if (var_28_1 u>= 0x10)
            j__free(var_3c.d)
    
    if (*(i + 0xd) == 0)
        int32_t* i_1 = i[2]
        
        if (*(i_1 + 0xd) != 0)
            int32_t* i_3 = i[1]
            
            if (*(i_3 + 0xd) == 0)
                while (i == i_3[2])
                    i = i_3
                    i_3 = i_3[1]
                    
                    if (*(i_3 + 0xd) != 0)
                        break
            
            i = i_3
        else
            i = i_1
            int32_t* i_2 = *i
            
            while (*(i_2 + 0xd) == 0)
                i = i_2
                i_2 = *i

int32_t result = LeaveCriticalSection(*(arg1 + 0x18) + 4)
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return result
