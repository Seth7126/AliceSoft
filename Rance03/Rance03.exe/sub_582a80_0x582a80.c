// 函数: sub_582a80
// 地址: 0x582a80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c7381
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_38
int32_t eax_2 = __security_cookie ^ &var_38
int32_t __saved_edi
int32_t var_48 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_34 = 0
char* var_30 = arg2
*(arg2 + 0x14) = 0xf
*(arg2 + 0x10) = 0
*arg2 = 0
int32_t var_4 = 0
int32_t* eax_5 = *(arg1 + 4)
int32_t var_34_1 = 1
int32_t* i = *eax_5

if (i != eax_5)
    do
        int32_t var_4_1 = 1
        int32_t var_2c
        sub_403110(arg2, sub_581fd0(i[5], &var_2c, 0), nullptr, 0xffffffff)
        var_4_1.b = 0
        int32_t var_18
        
        if (var_18 u>= 0x10)
            j__free(var_2c)
        
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
    while (i != *(arg1 + 4))

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_38)
return arg2
