// 函数: sub_6839b0
// 地址: 0x6839b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729896
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = *(arg1 + 4)
int32_t* i = *edi

while (i != edi)
    (*(*i[4] + 4))(eax_2)
    (*(*i[5] + 4))()
    
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

int32_t var_8_1 = 0
sub_42e7b0(*(*(arg1 + 4) + 4))
void* eax_6 = *(arg1 + 4)
*(eax_6 + 4) = eax_6
int32_t* eax_7 = *(arg1 + 4)
*eax_7 = eax_7
void* result = *(arg1 + 4)
*(result + 8) = result
*(arg1 + 8) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
