// 函数: sub_683bf0
// 地址: 0x683bf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_737ed6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* result = arg1

if (*(result + 0x14) != 0)
    int32_t* ebx_1 = *(result + 0x10)
    void* esi_1 = result + 0x10
    int32_t* i_1 = *ebx_1
    
    while (i_1 != ebx_1)
        (**i_1[4])(eax_2)
        
        if ((*(*i_1[4] + 4))() == 1)
            int32_t* i = **(result + 4)
            
            while (i != *(result + 4))
                if (i[5] == i_1[4])
                    (*(*i[4] + 4))()
                    (*(*i[5] + 4))()
                    int32_t* var_1c
                    sub_4347d0(result + 4, &var_1c, i)
                    break
                
                if (*(i + 0xd) == 0)
                    int32_t* i_5 = i[2]
                    
                    if (*(i_5 + 0xd) != 0)
                        int32_t* i_7 = i[1]
                        
                        if (*(i_7 + 0xd) == 0)
                            while (i == i_7[2])
                                i = i_7
                                i_7 = i_7[1]
                                
                                if (*(i_7 + 0xd) != 0)
                                    break
                        
                        i = i_7
                    else
                        i = i_5
                        int32_t* i_6 = *i
                        
                        while (*(i_6 + 0xd) == 0)
                            i = i_6
                            i_6 = *i
        
        if (*(i_1 + 0xd) == 0)
            int32_t* i_2 = i_1[2]
            
            if (*(i_2 + 0xd) != 0)
                int32_t* i_4 = i_1[1]
                
                if (*(i_4 + 0xd) == 0)
                    while (i_1 == i_4[2])
                        i_1 = i_4
                        i_4 = i_4[1]
                        
                        if (*(i_4 + 0xd) != 0)
                            break
                
                i_1 = i_4
            else
                i_1 = i_2
                int32_t* i_3 = *i_1
                
                while (*(i_3 + 0xd) == 0)
                    i_1 = i_3
                    i_3 = *i_1
    
    int32_t var_8_1 = 0
    sub_4f2d00(*(*esi_1 + 4))
    void* eax_11 = *esi_1
    *(eax_11 + 4) = eax_11
    int32_t* eax_12 = *esi_1
    *eax_12 = eax_12
    result = *esi_1
    *(result + 8) = result
    *(esi_1 + 4) = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
