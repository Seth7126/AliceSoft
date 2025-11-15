// 函数: sub_565670
// 地址: 0x565670
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729896
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1[1] u>= 0x9249248)
    int32_t var_8_1 = 0
    int32_t* esi = arg5[6]
    
    if (esi != 0)
        bool cond:1_1 = esi[1] != 1
        esi[1]
        esi[1] -= 1
        
        if (not(cond:1_1))
            (**esi)(eax_2)
            int32_t edi_1 = esi[2]
            esi[2] -= 1
            
            if (edi_1 == 1)
                (*(*esi + 4))()
    
    int32_t var_8_2 = 0xffffffff
    sub_403160(arg5, 1, 0x1c)
    sub_6d0927("map/set<T> too long")
    noreturn

arg1[1] += 1
arg5[1] = arg4
void* ecx_2 = *arg1

if (arg4 == ecx_2)
    *(ecx_2 + 4) = arg5
    **arg1 = arg5
    *(*arg1 + 8) = arg5
else if (arg3 == 0)
    arg4[2] = arg5
    void* ecx_4 = *arg1
    
    if (arg4 == *(ecx_4 + 8))
        *(ecx_4 + 8) = arg5
else
    *arg4 = arg5
    void** ecx_3 = *arg1
    
    if (arg4 == *ecx_3)
        *ecx_3 = arg5

int32_t* esi_1 = arg5

if (*(arg5[1] + 0xc) == 0)
    do
        int32_t* eax_10 = esi_1[1]
        int32_t* edx_1 = eax_10[1]
        void* ecx_5 = *edx_1
        
        if (eax_10 == ecx_5)
            ecx_5 = edx_1[2]
            
            if (*(ecx_5 + 0xc) == 0)
                goto label_56578a
            
            if (esi_1 == eax_10[2])
                esi_1 = eax_10
                sub_44e400(arg1, esi_1)
            
            *(esi_1[1] + 0xc) = 1
            *(*(esi_1[1] + 4) + 0xc) = 0
            sub_44e3a0(arg1, *(esi_1[1] + 4))
        else if (*(ecx_5 + 0xc) != 0)
            if (esi_1 == *eax_10)
                esi_1 = eax_10
                sub_44e3a0(arg1, esi_1)
            
            *(esi_1[1] + 0xc) = 1
            *(*(esi_1[1] + 4) + 0xc) = 0
            void* ecx_9 = *(esi_1[1] + 4)
            int32_t* edx_2 = *(ecx_9 + 8)
            *(ecx_9 + 8) = *edx_2
            void* eax_23 = *edx_2
            
            if (*(eax_23 + 0xd) == 0)
                *(eax_23 + 4) = ecx_9
            
            edx_2[1] = *(ecx_9 + 4)
            void* eax_25 = *arg1
            
            if (ecx_9 != *(eax_25 + 4))
                int32_t** eax_26 = *(ecx_9 + 4)
                
                if (ecx_9 != *eax_26)
                    eax_26[2] = edx_2
                else
                    *eax_26 = edx_2
            else
                *(eax_25 + 4) = edx_2
            
            *edx_2 = ecx_9
            *(ecx_9 + 4) = edx_2
        else
        label_56578a:
            eax_10[3].b = 1
            *(ecx_5 + 0xc) = 1
            *(*(esi_1[1] + 4) + 0xc) = 0
            esi_1 = *(esi_1[1] + 4)
    while (*(esi_1[1] + 0xc) == 0)

*(*(*arg1 + 4) + 0xc) = 1
*arg2 = arg5
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
