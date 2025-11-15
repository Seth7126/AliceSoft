// 函数: sub_688090
// 地址: 0x688090
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a8d6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg1
void* var_14 = ebx

if (*(ebx + 0x14) != 0)
    int32_t* edi_1 = *(ebx + 0x10)
    void* eax_3 = ebx + 0x10
    int32_t* i = *edi_1
    
    while (i != edi_1)
        (**i[4])(eax_2)
        
        if ((*(*i[4] + 4))() == 1)
            int32_t eax_7 = *(ebx + 8)
            int32_t* ebx_1 = *(ebx + 4)
            
            if (ebx_1 == eax_7)
                ebx = var_14
            else
                while (*ebx_1 != i[4])
                    ebx_1 = &ebx_1[1]
                    
                    if (ebx_1 == eax_7)
                        break
                
                if (ebx_1 == eax_7)
                    ebx = var_14
                else
                    (*(**ebx_1 + 4))()
                    sub_6feca0(ebx_1, &ebx_1[1], *(var_14 + 8) - &ebx_1[1])
                    ebx = var_14
                    *(ebx + 8) -= 4
        
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
    
    struct _EXCEPTION_REGISTRATION_RECORD*** ebx_2 = eax_3
    int32_t var_8_1 = 0
    sub_4f2d00((*ebx_2)[1])
    struct _EXCEPTION_REGISTRATION_RECORD** eax_11 = *ebx_2
    eax_11[1] = eax_11
    struct _EXCEPTION_REGISTRATION_RECORD** eax_12 = *ebx_2
    *eax_12 = eax_12
    result = *ebx_2
    result[2] = result
    ebx_2[1] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
