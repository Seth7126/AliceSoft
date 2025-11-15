// 函数: sub_5c24b0
// 地址: 0x5c24b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a526
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edx = *arg1
int32_t* i = arg3

if (i == *edx && arg4 == edx)
    int32_t var_8_1 = 0
    sub_5c2a30(arg1, edx[1])
    void* eax_3 = *arg1
    *(eax_3 + 4) = eax_3
    int32_t* eax_4 = *arg1
    *eax_4 = eax_4
    void* eax_5 = *arg1
    *(eax_5 + 8) = eax_5
    arg1[1] = 0
    *arg2 = **arg1
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg2

for (; i != arg4; i = arg3)
    int32_t* i_1 = i
    
    if (*(i + 0xd) == 0)
        int32_t* i_2 = i[2]
        
        if (*(i_2 + 0xd) != 0)
            i_2 = i[1]
            
            if (*(i_2 + 0xd) == 0)
                while (i == i_2[2])
                    i = i_2
                    arg3 = i
                    i_2 = i_2[1]
                    
                    if (*(i_2 + 0xd) != 0)
                        break
        else
            int32_t* i_3 = *i_2
            
            while (*(i_3 + 0xd) == 0)
                i_2 = i_3
                i_3 = *i_2
        
        arg3 = i_2
    
    sub_5c25a0(arg1, &var_14, i_1)

*arg2 = i
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
