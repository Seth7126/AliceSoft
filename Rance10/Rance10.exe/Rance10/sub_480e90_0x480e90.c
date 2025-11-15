// 函数: sub_480e90
// 地址: 0x480e90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72e8ac
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = *(arg1 + 0x10)
int32_t* i = *edi

while (i != edi)
    sub_485a50(*(arg1 + 4), i[0xa])
    
    if (*(i + 0xd) == 0)
        int32_t* i_2 = i[2]
        
        if (*(i_2 + 0xd) != 0)
            int32_t* i_4 = i[1]
            
            if (*(i_4 + 0xd) == 0)
                while (i == i_4[2])
                    i = i_4
                    i_4 = i_4[1]
                    
                    if (*(i_4 + 0xd) != 0)
                        break
            
            i = i_4
        else
            i = i_2
            int32_t* i_3 = *i
            
            while (*(i_3 + 0xd) == 0)
                i = i_3
                i_3 = *i

int32_t var_8_1 = 0
sub_432200(*(*(arg1 + 0x10) + 4))
void* eax_4 = *(arg1 + 0x10)
*(eax_4 + 4) = eax_4
int32_t* eax_5 = *(arg1 + 0x10)
*eax_5 = eax_5
void* eax_6 = *(arg1 + 0x10)
int32_t var_8_2 = 0xffffffff
*(eax_6 + 8) = eax_6
*(arg1 + 0x14) = 0
void* ebx_1 = arg1 + 0x18
int32_t* edi_1 = *ebx_1
int32_t* i_1 = *edi_1

while (i_1 != edi_1)
    sub_485a50(*(arg1 + 4), i_1[5])
    
    if (*(i_1 + 0xd) == 0)
        int32_t* i_5 = i_1[2]
        
        if (*(i_5 + 0xd) != 0)
            int32_t* i_7 = i_1[1]
            
            if (*(i_7 + 0xd) == 0)
                while (i_1 == i_7[2])
                    i_1 = i_7
                    i_7 = i_7[1]
                    
                    if (*(i_7 + 0xd) != 0)
                        break
            
            i_1 = i_7
        else
            i_1 = i_5
            int32_t* i_6 = *i_1
            
            while (*(i_6 + 0xd) == 0)
                i_1 = i_6
                i_6 = *i_1

int32_t var_8_3 = 1
sub_42e7b0(*(*ebx_1 + 4))
void* eax_8 = *ebx_1
*(eax_8 + 4) = eax_8
int32_t* eax_9 = *ebx_1
*eax_9 = eax_9
void* result = *ebx_1
*(result + 8) = result
*(ebx_1 + 4) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
