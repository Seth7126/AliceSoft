// 函数: sub_4702e0
// 地址: 0x4702e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$?_wcrtomb_s_l@@YAHQAHQADI_WQAU_Mbstatet@@QAU__crt_locale_pointers@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_34
int32_t* eax_3 = arg1
int32_t var_8_1 = 0
void** eax_4 = *eax_3
char var_1c = 1
void** edi = eax_4[1]
int32_t* arg_c

if (*(edi + 0xd) == 0)
    int32_t* edx_1 = arg_c
    arg1 = edx_1[4]
    int32_t* var_18_1 = arg1
    void** var_20_1
    
    do
        void* eax_5 = &edi[4]
        int32_t* ebx_1 = *(eax_5 + 0x10)
        var_20_1 = edi
        
        if (edi[9] u>= 0x10)
            eax_5 = *eax_5
        
        int32_t* esi_1
        
        if (edx_1[5] u< 0x10)
            esi_1 = edx_1
        else
            esi_1 = *edx_1
        
        int32_t* edx_2 = ebx_1
        
        if (arg1 u< ebx_1)
            edx_2 = arg1
        
        int32_t eax_7
        bool cond:3_1
        
        if (edx_2 == 0)
        label_4703b5:
            
            if (arg1 u>= ebx_1)
                eax_7.b = arg1 != ebx_1
            else
                eax_7 = 0xffffffff
            
            cond:3_1 = eax_7 s< 0
        else
            void* i_1 = edx_2 - 4
            
            if (edx_2 u>= 4)
                void* i
                
                do
                    if (*esi_1 != *eax_5)
                        goto label_470376
                    
                    esi_1 = &esi_1[1]
                    eax_5 += 4
                    i = i_1
                    i_1 -= 4
                while (i u>= 4)
            
            if (i_1 == 0xfffffffc)
                eax_7 = 0
            else
            label_470376:
                arg1.b = *esi_1
                char temp2_1 = *eax_5
                
                if (arg1.b != temp2_1)
                    eax_7 = sbb.d(eax_5, eax_5, arg1.b u< temp2_1) | 1
                else if (i_1 == 0xfffffffd)
                    eax_7 = 0
                else
                    arg1.b = *(esi_1 + 1)
                    char temp5_1 = *(eax_5 + 1)
                    
                    if (arg1.b != temp5_1)
                        eax_7 = sbb.d(eax_5, eax_5, arg1.b u< temp5_1) | 1
                    else if (i_1 == 0xfffffffe)
                        eax_7 = 0
                    else
                        arg1.b = *(esi_1 + 2)
                        char temp6_1 = *(eax_5 + 2)
                        
                        if (arg1.b != temp6_1)
                            eax_7 = sbb.d(eax_5, eax_5, arg1.b u< temp6_1) | 1
                        else if (i_1 == 0xffffffff)
                            eax_7 = 0
                        else
                            arg1.b = *(esi_1 + 3)
                            char temp7_1 = *(eax_5 + 3)
                            
                            if (arg1.b == temp7_1)
                                eax_7 = 0
                            else
                                eax_7 = sbb.d(eax_5, eax_5, arg1.b u< temp7_1) | 1
            
            arg1 = var_18_1
            cond:3_1 = eax_7 s< 0
            
            if (eax_7 == 0)
                goto label_4703b5
        
        eax_7.b = cond:3_1
        var_1c = eax_7.b
        
        if (eax_7.b == 0)
            edi = edi[2]
        else
            edi = *edi
        
        edx_1 = arg_c
    while (*(edi + 0xd) == 0)
    
    eax_4 = var_20_1

int32_t var_38 = arg3
*arg2 = *sub_428350(eax_3, &arg_c, var_1c, eax_4, arg1)
arg2[1].b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
